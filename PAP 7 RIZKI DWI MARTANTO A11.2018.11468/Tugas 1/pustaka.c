#include "pustaka.h"

int add_rec(int num1, int num2)
{
    if(num2 == 0)
    {
        return num1;
    }
    //rekuren
    else
    {
        return 1 + add_rec(num1, num2-1);
    }
}
void cetak(int num1, int num2)
{
    if(num2==0)
    {
        printf("%d",num1);
    }
    else
    {
        printf("1+");
        cetak(num1,num2-1);
    }
}
