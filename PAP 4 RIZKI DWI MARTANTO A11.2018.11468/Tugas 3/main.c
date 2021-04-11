#include "pustaka.h"

int main()
{
    int arr1[] = {3, 44, 38, 5, 47};
    int arr2[] = {15, 36, 27, 2, 26};
    printf("Array 1 : \n");
    cetak_array(arr1, 5);
    selection_sort2(arr1, 5);
    puts("\n");

    printf("Array 2 : \n");
    cetak_array(arr2, 5);
    selection_sort2(arr2, 5);

    return 0;
}
