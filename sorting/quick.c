#include "../utils/utils.h"
#include "sorting.h"

static int partition(int arr[], int p, int r) {
    int x = arr[r];
    int i = p-1;
    int j = i;

    while(j < r) {
        if(arr[j] <= x) {
            i++;
            swap(arr, i, j);
        }
        j++;
    }

    int q = i+1;
    swap(arr, q, r);
    return q;
}

static void sort(int arr[], int p, int r) {
    if(p < r) {
        int q = partition(arr, p, r);
        sort(arr, p, q-1);
        sort(arr, q+1, r);
    }
}

void quick_sort(int arr[], int size) {
    sort(arr, 0, size - 1);
}