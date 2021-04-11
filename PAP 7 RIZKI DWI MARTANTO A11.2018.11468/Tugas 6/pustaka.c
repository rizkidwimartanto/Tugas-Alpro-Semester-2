#include "pustaka.h"

int factorial(int number)
{
    if(number == 0)
    {
        return 1;
    }

    else
    {
        printf("%d * ", number);
        return factorial(number-1)* number;
    }
}
