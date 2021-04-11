#include "Header.h"



int maks(int arr[], int n)
{
    int i;
    int max=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("\nNilai Maksimalnya adalah\t: %d\n", max);
}
