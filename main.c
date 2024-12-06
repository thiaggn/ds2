#include "sorting/sorting.h"
#include "utils/utils.h"


int main() {
    int arr[10] = {2, 10, 4, 7, 1, 8, 9, 3, 6, 5};
    print_arr(arr, 10);
    heap_sort(arr, 10);
    print_arr(arr, 10);
}