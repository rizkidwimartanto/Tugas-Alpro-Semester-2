#include "pustaka.h"

///TUGAS 1
void swapValue(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
///TUGAS 2
void changeValue(int *target, int num1, int num2)
{
    *target = num1 + num2;
}
///TUGAS 3
void initDynArray(int *arrData, int ukuran)
{
    int x;
    for(x=0; x<ukuran; x++)
    {
        arrData[x]=x+1;
        printf("%d, ", arrData[x]);
    }
}
///TUGAS 4
void printArray(int *arrData, int ukuran)
{
    int x;
    for (x=0; x<ukuran; x++)
    {
        printf("(%d) ", *(arrData + x));
    }
}
///TUGAS 5
void putAverage(float *avg, int *arrData, int ukuran)
{
    int x, sum=0;
    for(x=0; x<ukuran; x++)
    {
        sum+=arrData[x];
    }
    *avg = (float)sum/ukuran;
}
