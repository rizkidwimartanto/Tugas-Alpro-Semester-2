#include "pustaka.h"

void selection_sort1 (int data[], int jumlah_data)
{
    int x, y, temp, min;
    for(x=0; x<jumlah_data; x++)
    {
        min=x;
        for(y=x; y<jumlah_data; y++)
        {
            if(data[y] < data[min])
            {
                min=y;
            }
        }
        temp=data[min];
        data[min]=data[x];
        data[x]=temp;

        printf("\n");
        cetak_array(data, jumlah_data);

    }
}
void cetak_array (int data[], int jumlah_data)
{
    int x;
    for (x=0; x<jumlah_data; x++)
    {
        printf("(%d) ", data[x]);
    }
}
