#include "pustaka.h"



int main()
{
    int arr1[] = { 3, 44, 38, 5, 47 };
    int arr2[] = { 15, 36, 27, 2, 26 };

    printf("Array 1 : \n");
    printarray(arr1,5);
    puts("");
    bubble_sort1(arr1,5);


    printf("Array 2 : \n");
    printarray(arr2,5);
    puts("");
    bubble_sort1(arr2, 5);

    return 0;
}
