#include "sorting.h"
#include "../utils/utils.h"

void bubble_sort(int arr[], int size) {
    int repeat = 1;

    while(repeat) {
        repeat = 0;
        int i = 0;

        while(i < size - 1) {
            if(arr[i] > arr[i + 1]) {
                repeat = 1;
                swap(arr, i, i + 1);
            }
            i++;
        }
    }
}
