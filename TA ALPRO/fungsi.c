#include "header.h"

int squentialSearch(int daftarHarga[],int uk, int pilih)
{
    int i;
    for(i=0;i<uk;i++)
    {
        if(pilih==daftarHarga[i])
        {
            return 1;
        }
    }
    return -1;
}

void swap(int data[], int i, int j)
{
	int temp = data[i];
	data[i] = data[j];
	data[j] = temp;
}
void selectionSort1(int data[], int i, int n)
{
	int min = i;
	for (int j = i + 1; j < n; j++)
	{
		if (data[j] > data[min])
			min = j;
	}

	swap(data, min, i);

	if (i + 1 < n) {
		selectionSort1(data, i + 1, n);
	}
}
void selectionSort2(int data[], int i, int n)
{
	int min = i;
	for (int j = i + 1; j < n; j++)
	{
		if (data[j] < data[min])
			min = j;
	}

	swap(data, min, i);

	if (i + 1 < n) {
		selectionSort2(data, i + 1, n);
	}
}
void cetak(int *arrData, int ukuran)
{
    for (x=0; x<ukuran; x++)
    {
        printf("Rp.%d ", *(arrData + x));
    }
}
void totalHarga(int *hasil, int num1, int num2)
{
    *hasil = num1 * num2;
}
