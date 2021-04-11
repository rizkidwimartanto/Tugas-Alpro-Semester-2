#include "pustaka.h"

int sum_transerval(int data[], int cur)
{
    if(data[cur] == '\0')
    {
        return 0;
    }

    else
    {
        return data[cur] + sum_transerval(data,cur+1);
    }
}
