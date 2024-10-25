#include "sorting.h"
#include "../utils/utils.h"

void selection_sort(int arr[], int size) {
    int start = 0;

    while (start < size - 1) {
        int i = start + 1;
        int smallest = start;

        while (i < size) {
            if (arr[i] < arr[smallest]) {
                smallest = i;
            }

            i++;
        }

        swap(arr, start, smallest);
        start++;
    }
}
