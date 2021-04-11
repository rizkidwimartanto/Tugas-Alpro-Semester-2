#include "pustaka.h"

int div_rec(int num1, int num2)
{
    if(num2 == 0)
    {
        return 0;
    }
    else if(num1 - num2 ==0)
    {
        printf("- %d", num2);
        return 1;
    }
    else if(num1 < num2)
    {
        return 0;
    }
    else
    {
        printf("- %d  ", num2);
        return(1 + div_rec(num1 - num2, num2));
    }
}
//int perkalian (int angka1, int angka2)
//{
//    //basis
//    if (angka1 == 0)
//    {
//        return 0;
//    }
//    //rekuren
//    else
//    {
//       return angka2 + perkalian(angka1-1, angka2);
//    }
//}
