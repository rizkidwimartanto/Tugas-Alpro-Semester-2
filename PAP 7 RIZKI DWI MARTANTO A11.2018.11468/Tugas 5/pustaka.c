#include "pustaka.h"

int pow_rec(int num1, int num2)
{
    if(num2 == 0)
    {
        return 1;
    }

    else
    {
        printf("%d * ", num1);
        return pow_rec(num1, num2-1) * num1;
    }
}
