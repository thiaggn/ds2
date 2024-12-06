#include "heaptree.h"
#include "../utils/utils.h"


void max_heapify(int arr[], int size, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < size && arr[l] > arr[i]) largest = l;
    else
        largest = i;

    if (r < size && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr, i, largest);
        max_heapify(arr, size, largest);
    }
}

void build_max_heap(int arr[], int size) {
    for (int i = (size / 2) - 1; i >= 0; i--) {
        max_heapify(arr, size, i);
    }
}