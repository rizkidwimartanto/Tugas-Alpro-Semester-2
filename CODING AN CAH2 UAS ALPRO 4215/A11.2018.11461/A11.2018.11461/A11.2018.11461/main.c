#include "pustaka.h"

int main()
{
    int n,pilih,a,b=145,*c,*d;
    int lanjut;
    do
    {
        printf("\t\tPengisian Data Loker Bank Lian\n");
        printf("\n1. Isi Jumlah Data");
        printf("\n2. Isi Data Diri");
        printf("\n3. Baca Data");
        printf("\n4. Sort Data Nama Ascending");
        printf("\n5. Sort Data Nama Descending");
        printf("\n6. Searching Data Lama");
        printf("\n7. Sisa Loker");
        printf("\n\n-------------------------------------------\n");
        printf("\nMasukkan Pilihan [1-7] : ");
        scanf("%d",&pilih);

        switch(pilih)
        {
        case 1:
            system("cls");
            printf("1. Isi Frekuensi Data\n\n");
            printf("Masukkan Frekuensi Data [ max 145 ] : ");
            scanf("%d",&A);
            printf("\n\n-------------------------------------------\n");
            printf("\nKembali ke menu? [Y/T] : ");fflush(stdin);scanf("%c",&lanjut);system("cls");
            break;

        case 2:
            system("cls");
            printf("2. Isi Data\n\n");
            IsiData(A);
            printf("\n\n-------------------------------------------\n");
            printf("\nKembali ke menu? [Y/T] : ");fflush(stdin);scanf("%c",&lanjut);system("cls");
            break;

        case 3:
            system("cls");
            printf("3. Baca Data\n\n");
            bacadata(A);
            printf("\n\n-------------------------------------------\n");
            printf("\nKembali ke menu? [Y/T] : ");fflush(stdin);scanf("%c",&lanjut);system("cls");
            break;

        case 4:
            system("cls");
            printf("4. Sort Data Nama Ascending\n\n");
            SortingNamaAsc(A);
            bacadata(A);
            printf("\n\n-------------------------------------------\n");
            printf("\nKembali ke menu? [Y/T] : ");fflush(stdin);scanf("%c",&lanjut);system("cls");
            break;

        case 5:
            system("cls");
            printf("5. Sort Data Nama Descending\n\n");
            SortingNamaDesc(A);
            bacadata(A);
            printf("\n\n-------------------------------------------\n");
            printf("\nKembali ke menu? [Y/T] : ");fflush(stdin);scanf("%c",&lanjut);system("cls");
            break;

        case 6:
            system("cls");
            printf("\n8. Searching Lama\n");
            printf("Masukkan Lama yang Dicari: ");
            scanf("%d",&c);
            Search(&c,A);
            printf("\n\n-------------------------------------------\n");
            printf("\nKembali ke menu? [Y/T] : ");fflush(stdin);scanf("%c",&lanjut);system("cls");
            break;
        case 7:
            system("cls");
            printf("7. Sisa Loker\n\n");
            printf("Sisa Loker = %d",Sisa(A,b));
            printf("\n\n-------------------------------------------\n");
            printf("\nKembali ke menu? [Y/T] : ");fflush(stdin);scanf("%c",&lanjut);system("cls");
            break;
        }
    }
    while(lanjut!='T');

    return 0;
}
