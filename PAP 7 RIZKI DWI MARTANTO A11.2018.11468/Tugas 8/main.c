#include "pustaka.h"

int main()
{
    puts("SUM TRANSVERSAL\n");
    int arr1[8] = {2, 5, 7, 9, 12, 16, NULL};
    printf("Sum = %d\n", sum_transerval(arr1, 0));
    puts("");
    int arr2[8] = {3, 5, 6, 8, 1, 8, NULL};
    printf("Sum = %d\n", sum_transerval(arr2, 0));
    puts("");
    int arr3[10] = {5, 82, 33, 55, 22, NULL};
    printf("Sum = %d\n", sum_transerval(arr3, 0));
    puts("");
    int arr4[12] = {9, 8, 7, 6, 5, 4, 3, 2, 1, NULL};
    printf("Sum = %d\n", sum_transerval(arr4, 0));
    puts("");
    return 0;
}
