#include "header.h"

int main()
{
    char lagi;
    int arena, jml_pmblp;
    game *pembalap;
    printf("\t\t===WELCOME TO 'CRAZY CAR RICING' GAME===\n\n");

    do{
        printf("Input Jumlah Pembalap : ");
        scanf("%d",&jml_pmblp);
        puts("");
        inisialmalloc(&pembalap,jml_pmblp);
        inputpembalap(&pembalap,jml_pmblp);
        printf("Apakah Anda Ingin Bermain Lagi (y/n) ? ");
        scanf("%c ",&lagi);
    }while(lagi=='y'||lagi=='Y');
    return 0;
}
