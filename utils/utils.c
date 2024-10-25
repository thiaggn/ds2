#include "utils.h"
#include <stdio.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void print_arr(int *arr, int size) {
    int i = 1;

    while (i < size) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}
