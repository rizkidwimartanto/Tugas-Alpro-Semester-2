#include "pustaka.h"

int mul_rec(int num1, int num2)
{
    if(num2==0)
    {
        printf("%d ", num1);
        return 0;
    }

    else
    {
        printf("%d + ", num1);
        return num1+mul_rec(num1, num2-1);
    }
}


