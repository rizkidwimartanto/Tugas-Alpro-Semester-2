#include "pustaka.h"




int main()
{
    int a1[10] = {NULL}, a2[10] = {NULL};
    int a3[10] = {NULL}, a4[10] = {NULL};
    a1[0]=1; a1[1]=2; a1[2]=3; a1[3]=4; a1[4]=5; a1[5]=6;
    a2[0]=1; a2[1]=2; a2[2]=3; a2[3]=4;
    a3[0]=2; a3[1]=4; a3[2]=9; a3[3]=5; a3[4]=1;
    a4[0]=2; a4[1]=8; a4[2]=5;

    printf("Array 1 = %d\n", count_array(a1, 10));
    printf("Array 2 = %d\n", count_array(a2, 10));
    printf("Array 3 = %d\n", count_array(a3, 10));
    printf("Array 4 = %d\n", count_array(a4, 10));
    return 0;
}
