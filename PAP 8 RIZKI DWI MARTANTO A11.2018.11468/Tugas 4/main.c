#include "pustaka.h"

int main()
{
    int data1 [] = {12, 15, 1, 23, 44, 21, 30};
    printArrayRek(data1, 0, 7);
    printf("\trec min  --> %d\n", rec_min(data1, 0 , 7));

    int data2 [] = {19, 16, 22, 15, 9, 28, 11};
    printArrayRek(data2, 0, 7);
    printf("\trec min  --> %d\n", rec_min(data2, 0 , 7));

    int data3 [] = {41, 29, 9, 14, 6, 5, 22};
    printArrayRek(data3, 0, 7);
    printf("\trec min  --> %d\n", rec_min(data3, 0 , 7));
    return 0;
}
