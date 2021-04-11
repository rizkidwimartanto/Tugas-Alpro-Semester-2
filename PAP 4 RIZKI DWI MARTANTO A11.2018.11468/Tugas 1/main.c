#include "pustaka.h"

int main()
{
    int arr1 [] = {3, 5, 38, 0, 44, 47};
    int arr2 [] = {3, 0, 44, 38, 0, 5, 47};
    int arr3 [] = {2, 15, 0, 0, 0, 26, 27, 36};
    int arr4 [] = {15, 36, 27, 0, 0, 2, 26};

    printf("Array 1 : \n");
    compress_array(arr1, 6);
    puts("\n");

    printf("Array 2 : \n");
    compress_array(arr1, 6);
    puts("\n");

    printf("Array 3 : \n");
    compress_array(arr3, 8);
    puts("\n");

    printf("Array 4 : \n");
    compress_array(arr4, 7);
    puts("\n");

    return 0;
}
