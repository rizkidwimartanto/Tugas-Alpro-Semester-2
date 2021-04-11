#include "pustaka.h"

int subs_rec(int num1, int num2)
{
    //basis
    if(num2 == 0)
    {
        return num1;
    }
    //rekuren
    else
    {
        return subs_rec(num1, num2-1) - 1;
    }
}
void cetak(int num1, int num2)
{
    if(num2==0)
    {
        printf("+%d",num1);
    }
    else
    {
        printf("-1");
        cetak(num1,num2-1);
    }
}
