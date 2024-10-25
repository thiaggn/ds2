#include "sorting.h"

void insertion_sort(int *arr, int size) {
    int n = 1;

    while (n < size) {
        int chave = arr[n];
        int i = n;

        while (i >= 0 && arr[i - 1] > chave) {
            arr[i] = arr[i - 1];
            i--;
        }
        arr[i] = chave;
        n++;
    }
}
