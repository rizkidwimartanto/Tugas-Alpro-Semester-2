#include "pustaka.h"

void fibonacci(int number)
{
    int x;
    int y = 0;
    int z = 1;
    int out;

    for (x=1; x<=number; x++)
    {
        if(x<=1)
        {
            out = x;
            printf("%d ", out);
        }
        else
            out = y + z;
            y = z;
            z = out;
            printf("%d ", out );
    }
}

