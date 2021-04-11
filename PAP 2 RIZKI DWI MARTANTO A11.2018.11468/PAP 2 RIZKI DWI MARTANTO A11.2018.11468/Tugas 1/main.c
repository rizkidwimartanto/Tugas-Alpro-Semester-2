#include "header.h"

int main()
{
    int year;
    printf("Tahun = ");     scanf("%d",&year);
    if (year % 4 == 0){
        printf("Tahun kabisat");
    }
    else{
        printf("Bukan tahun kabisat");
    }
    return 0;
}
