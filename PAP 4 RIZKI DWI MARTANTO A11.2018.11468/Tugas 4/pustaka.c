#include "pustaka.h"

void get_median (int data [], int jumlah_data)
{
    float median;
    if(jumlah_data%2 == 0)
        median = (data[(jumlah_data/2)-1] + data[(jumlah_data/2)]) / 2.0;
    else
        median = data[(jumlah_data/2)];

    printf("\nMedian = %.0f\n", median);
}
void cetak_array(int data [], int jumlah_data)
{
    int x;
    for (x=0; x<jumlah_data; x++)
    {
        printf("(%d) ", data[x]);
    }
}
