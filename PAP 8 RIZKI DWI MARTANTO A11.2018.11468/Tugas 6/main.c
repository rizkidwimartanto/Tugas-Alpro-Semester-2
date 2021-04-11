#include "pustaka.h"

int main()
{
    int data1[] = {12,15,1,23,44,21,30};
    int data2[] = {19,16,22,15,9,28,11};
    int data3[] = {41,29,9,14,6,5,22};

    printf("Mean 1 = %.2f\n", rec_mean(data1, 0, 7));
    printf("Mean 2 = %.2f\n", rec_mean(data2, 0, 7));
    printf("Mean 3 = %.2f\n", rec_mean(data3, 0, 7));

    return 0;
}

