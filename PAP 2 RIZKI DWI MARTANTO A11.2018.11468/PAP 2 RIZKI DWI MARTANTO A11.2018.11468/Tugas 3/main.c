#include "header.h"

int main()
{
    int num, a, flag;
    printf("Masukkan bilangan = "); scanf("%d",&num);

    if(num <= 1){
        printf("%d bukan bilangan prima\n", num);
        exit(1);
    }
    flag = 0;

    for(a=2; a <= num / 2; a++){
        if ((num % a) == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d bilangan prima\n", num);
    else
        printf("%d bukan bilangan prima\n", num);

    return 0;
}
