#include "pustaka.h"

int rec_min (int data[], int arrSize , int cur)
{
    if (arrSize >= cur-2)
    {
        if (data[arrSize] < data[arrSize + 1])
            return data[arrSize];
        else
            return data[arrSize + 1];
    }
    if (data[arrSize] < rec_min(data, arrSize + 1, cur))
        return data[arrSize];
    else
        return rec_min(data, arrSize + 1, cur);
}
void printArrayRek(int arr[], int awal, int akhir)
{
    if (awal == akhir)
    {

    }
    else
    {
        printf("(%d) ", arr[awal]);
        printArrayRek(arr, awal+1, akhir);
    }
}
