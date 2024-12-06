#include "priority.h"
#include "../structures/heaptree.h"
#include <stdio.h>
#include <stdlib.h>
#include "../utils/utils.h"
#include <limits.h>


int pq_remove_max(struct priority_queue *h) {
    if (h->size < 1) {
        fprintf(stderr, "error: priority queue: heap underflow\n");
        exit(-1);
    }

    int *arr = h->values;
    int max = arr[0];
    arr[0] = arr[h->size - 1];
    h->size--;

    max_heapify(arr, h->size, 0);
    return max;
}

void pq_increase_key(struct priority_queue *h, int i, int k) {
    int *arr = h->values;

    if (k < arr[i]) {
        fprintf(stderr, "error: priority queue: new key is smaller.\n");
        exit(-1);
    }

    arr[i] = k;
    while (i > 0) {
        int parent = (i-1)/2;

        if(arr[i] > arr[parent]) {
            swap(arr, i, (i-1)/2);
            i = parent;
        }
        else break;

        i--;
    }
}

void pq_insert(struct priority_queue *h, int k) {
    if(h->capacity == h->size) {
        fprintf(stderr, "error: priority queue: heap overflow\n");
        exit(-1);
    }

    h->values[h->size] = INT_MIN;
    pq_increase_key(h, h->size, k);
    h->size++;
}

int pq_get_max(struct priority_queue *h) {
    if (h->size < 1) {
        fprintf(stderr, "error: priority queue: heap underflow\n");
        exit(-1);
    }

    return h->values[0];
}

