#include "pustaka.h"

float rec_mean(int data[],int cur, int arrsize)
{
    if (arrsize == 1)
        return (float)data[arrsize-1];
    else
        return ((float)(rec_mean(data,0,arrsize-1)*(arrsize-1) + data[arrsize-1]) / arrsize);
}
