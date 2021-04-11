#include "pustaka.h"

void min_max (int data[], int jumlah_data, int *max, int *min)
{
    int x;
    *max = data[0];
    *min = data[0];

    for (x=0; x<jumlah_data; x++)
    {
        if (*min < data[x]){
            *min = data[x];
        }
        else if (*max > data[x]){
        *max = data[x];
        }
    }
}

