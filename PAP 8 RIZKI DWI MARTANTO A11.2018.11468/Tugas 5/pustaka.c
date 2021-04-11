#include "pustaka.h"

void rec_print_all (int data[], int cur, int arrSize)
{
    if (cur == arrSize)
    {

    }
    else
    {
        printf("(%d) ", data[cur]);
        rec_print_all(data, cur+1, arrSize);
    }
}
