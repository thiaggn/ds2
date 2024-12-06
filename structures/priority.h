#pragma once
#include <stdlib.h>

struct priority_queue {
    int *values;
    int capacity;
    int size;
};

struct priority_queue priority_queue_new(int capacity) {
    struct priority_queue q = {
            .values = malloc(sizeof(int) * capacity),
            .capacity = capacity,
            .size = 0,
    };

    return q;
}

void pq_insert(struct priority_queue *h, int k);

int pq_get_max(struct priority_queue *h);

int pq_remove_max(struct priority_queue *h);

void pq_increase_key(struct priority_queue *h, int i, int k);





