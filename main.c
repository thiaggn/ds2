#include "sorting/sorting.h"
#include "utils/utils.h"


int main() {
    int arr[] = {40, 4, 73, 31, 15, 89, 91, 10, 100, 23, 4923, 513, 923, 43, 23874, 934, 28, 2390, 2, 1, 0, 0};
    merge_sort(arr, 22);
    print_arr(arr, 22);
    return 0;
}
