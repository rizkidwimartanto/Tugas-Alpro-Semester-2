#include "pustaka.h"

int sequent_search (int data[], int jumlah_data, int angka)
{
    int x;
    for (x=0; x<jumlah_data; x++)
    {
        if (angka == data[x])
        {
            return 1;
        }

    }
    return 0;
}
