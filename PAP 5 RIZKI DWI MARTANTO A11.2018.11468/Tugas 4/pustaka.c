#include "pustaka.h"

int min_max_gap (int data[], int jumlah_data)
{
    int x;
    int maximal, minimal;
    maximal = data[0];
    minimal = data[0];

    for (x=0; x<jumlah_data; x++)
    {
        if (minimal < data[x]){
            minimal = data[x];
        }
        else if (maximal > data[x]){
            maximal = data[x];
        }

    }
    return (minimal - maximal);
}
