#include "sorting.h"
#include <stdlib.h>

static void merge(int arr[], int p, int q, int r) {
    int length = r - p + 1;
    int *out = malloc(sizeof(int) * length);

    int i = p;
    int j = q + 1;
    int k = 0;

    while (i <= q && j <= r) {
        if (arr[i] < arr[j]) {
            out[k] = arr[i];
            i++;
        } else {
            out[k] = arr[j];
            j++;
        }

        k++;
    }

    while (i <= q) {
        out[k] = arr[i];
        i++;
        k++;
    }

    while (j <= r) {
        out[k] = arr[j];
        j++;
        k++;
    }

    int s = 0;
    while (s < length) {
        arr[p + s] = out[s];
        s++;
    }

    free(out);
}

static void sort(int arr[], int p, int r) {
    if (p != r) {
        int q = (p + r) / 2;
        sort(arr, p, q);
        sort(arr, q+1, r);
        merge(arr, p, q, r);
    }
}

void merge_sort(int arr[], int size) {
  sort(arr, 0, size - 1);
}