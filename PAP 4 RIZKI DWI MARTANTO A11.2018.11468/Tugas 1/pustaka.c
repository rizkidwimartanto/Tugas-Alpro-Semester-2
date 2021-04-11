#include "pustaka.h"

void compress_array (int data [], int jumlah_data)
{
    int x;
    for (x=0; x<jumlah_data; x++)
    {
        if(data[x] > 0)
        {
            printf("(%d) ", data[x]);
        }
    }
}
