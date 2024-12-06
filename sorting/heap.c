#include "../structures/heaptree.h"
#include "../utils/utils.h"
#include "sorting.h"


void heap_sort(int arr[], int size) {
    build_max_heap(arr, size);

    for(int i = size - 1; i > 0; i--) {
        swap(arr, 0, i);
        max_heapify(arr, i, 0);
    }
}