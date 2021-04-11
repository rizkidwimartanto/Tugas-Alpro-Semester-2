#include "pustaka.h"

void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void selectionSort(int arr[], int i, int n)
{
	int min = i;
	for (int j = i + 1; j < n; j++)
	{
		if (arr[j] < arr[min])
			min = j;
	}

	swap(arr, min, i);

	if (i + 1 < n) {
		selectionSort(arr, i + 1, n);
	}
}
void rec_print_all(int data[],int cur, int arrsize)
{
    if(cur==arrsize)
    {

    }
    else
    {
        printf(" (%d)",data[cur]);
        rec_print_all(data,cur+1,arrsize);
    }
}
