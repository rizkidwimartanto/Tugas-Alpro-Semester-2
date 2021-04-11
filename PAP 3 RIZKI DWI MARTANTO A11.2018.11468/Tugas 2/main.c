#include "pustaka.h"



int main()
{
    int arr1[] = { 3, 5, 38, 44, 47 };
    int arr2[] = { 3, 44, 38, 5, 47 };
    int arr3[] = { 2, 15, 26, 27, 36 };
    int arr4[] = { 15, 36, 27, 2, 26 };

    printf("1 = True\n");
    printf("0 = False\n\n");

    printf("Cek urut Arr1 = %d\n",cek_urut(arr1, 5));
    printf("Cek urut Arr2 = %d\n",cek_urut(arr2, 5));
    printf("Cek urut Arr3 = %d\n",cek_urut(arr3, 5));
    printf("Cek urut Arr4 = %d\n",cek_urut(arr4, 5));
    return 0;
}
