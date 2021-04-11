#include "pustaka.h"

void menu()
{
    printf("\n\t--->Jasa Joki Top Up Diamond Mobile Legend<---\n\n");
    printf("\tMENU : \n");
    puts("1. Input Data Game");
    puts("2. Open Data");
    puts("3. Search Data");
    puts("4. Sorting Data");
    puts("5. Total Data Terjual");
    puts("6. Selesai");
    printf("\nMasukan Pilihan : ");
}
void menu_search()
{
    system("cls");
    printf("\t--->>>Pilihan Menu Search/Cari<<<--- \n\n");
    puts("1. Berdasarkan ID pembeli\n");
    puts("2. Berdasarkan NickName pembeli\n");
    puts("3. Kembali\n");
    printf("Masukan pilihan ? ");

}
void menu_sorting()
{
    system("cls");
    printf("\t--->>>Pilihan Menu Sorting<<<--- \n");
    printf("1. Ascending \n\n");
    printf("2. Descending \n\n");
    printf("3. Kembali \n\n");
    printf("Masukan Pilihan ? ");
}
void inputdata(diamond mlbb[])
{
    int x;
    int tmpdm;
//    int y=0;
    int cmnn=1;
    int tmp;
    do{
        cmnn=0;
        if(y==0){
            printf("Masukan ID Anda\t\t: ");
            scanf("%d",&mlbb[y].id);
            fflush(stdin);
            printf("Masukan NickName Anda\t: ");
            gets(mlbb[y].nick);fflush(stdin);
            printf("Masukan Jumlah Diamond\t: ");
            scanf("%d",&mlbb[y].dm);
            mlbb[y].harga=300*mlbb[y].dm;
            y++;
        }
        else{
            printf("Masukan ID Anda\t\t: ");
            scanf("%d",&tmp);
            for(x=0;x<y;x++){
                if(mlbb[x].id==tmp){
                    cmnn=1;
                }
            }
            if(cmnn==1){
                printf("\n\n\t>>>ID Sudah Terdaftar Di Data Joki<<<\n \n");
            }
            else{
                mlbb[y].id=tmp;
////                printf("Masukan ID Anda\t\t: ");
////                scanf("%d",&mlbb[y].id);
                fflush(stdin);
                printf("Masukan NickName Anda\t: ");
                gets(mlbb[y].nick);fflush(stdin);
                printf("Masukan Jumlah Diamond\t: ");
                scanf("%d",&mlbb[y].dm);
                mlbb[y].harga=300*mlbb[y].dm;
                y++;
            }
        }
        printf("Masukan Data Lagi? [Y/T] : ");
        ulang=toupper(getch());
        while(!(ulang=='T' || ulang=='Y'));
        ulang=toupper(getch());
        printf("%c\n\n",ulang);
    }while(ulang=='Y');

}

void searc_id(diamond mlbb[])
{
    int j;
    int cmnn=0;
    printf("Masukan ID yang dicari = ");
    scanf("%d",&band);
    output_searchid(mlbb);
}
void searc_nick(diamond mlbb[])
{
    int cmnn=0;
    fflush(stdin);
    printf("Masukan Nickname yang anda cari = ");
    gets(ban);
    output_searchnick(mlbb);
}
//int total_dm(int x, int y)
//{
//    if(y==0){
//        return x;
//    }
//    else{
//        return 1+total_dm(x,y-1);
//    }
//}
void outputdata(diamond mlbb[])
{
    int j;
    system("cls");
    for(j=0;j<y;j++){
        printf("\n\tData User - %d\n\n",j+1);
        printf("Kode Pesanan\t\t= %p\n",&mlbb[j+1].code);
        printf("NickName\t\t= %s \n",mlbb[j].nick);
        printf("ID\t\t\t= %d \n",mlbb[j].id);
        printf("Jumlah Diamond\t\t= %d\n",mlbb[j].dm);
        printf("Total Harga\t\t= Rp %d\n\n",mlbb[j].harga);
    }

    system("PAUSE");
}

void output_searchid(diamond mlbb[])
{
    int j,cmnn=0;
    for(j=0;j<y;j++){
        if(band==mlbb[j].id){
            printf("\n\tData User - %d\n\n",j+1);
            printf("Kode Pesanan\t\t= %p\n",&mlbb[j+1].code);
            printf("NickName\t\t= %s \n",mlbb[j].nick);
            printf("ID\t\t\t= %d \n",mlbb[j].id);
            printf("Jumlah Diamond\t\t= %d\n",mlbb[j].dm);
            printf("Total Harga\t\t= Rp %d\n\n",mlbb[j].harga);
            cmnn=1;
        }
    }
    if(cmnn==0){
        printf("\n\n--->>>ID YANG ANDA CARI TIDAK TERSEDIA<<<---\n\n");
    }

}
void output_searchnick(diamond mlbb[])
{
    int j,cmnn=0;
    fflush(stdin);
    for(j=0;j<y;j++){
        if(strcmp(strupr(ban),strupr(mlbb[j].nick))==0){
            printf("\n\tData User - %d\n\n",j+1);
            printf("Kode Pesanan\t\t= %p\n",&mlbb[j+1].code);
            printf("NickName\t\t= %s \n",mlbb[j].nick);
            printf("ID\t\t\t= %d \n",mlbb[j].id);
            printf("Jumlah Diamond\t\t= %d\n",mlbb[j].dm);
            printf("Total Harga\t\t= Rp %d\n\n",mlbb[j].harga);
            cmnn=1;
        }
    }
    if(cmnn==0){
        printf("\n\n--->>>NICKNAME YANG ANDA CARI TIDAK TERSEDIA<<<---\n\n");
    }
}
void output_nota(diamond mlbb[])
{
    printf("\t\t>>>NOTA HASIL PENJUALAN DIAMOND GAME ONLINE<<<\n\n\n");
    printf("1. Total Pembeli\t\t\t\t= %d \n\n",y);
    printf("2. Total penjualan Diamond\t\t\t= %d \n\n",output_total(mlbb,y-1,0));
    printf("3. Total pemasukan penjualan Diamond\t\t= Rp. %d \n\n",output_total_duit(mlbb,y-1,0));
}
int output_total(diamond mlbb[],int a, int tmp)
{
    if(a==-1){
        return 0;
    }
    else{
        return mlbb[a].dm+output_total(mlbb,a-1,tmp);
    }
}
int output_total_duit(diamond mlbb[],int a, int tmp)
{
    if(a==-1){
        return 0;
    }
    else{
        return mlbb[a].harga+output_total_duit(mlbb,a-1,tmp);
    }
}
void swap_struck(diamond *mlbb1, diamond *mlbb2)
{
    diamond cadang;
    cadang=*mlbb1;
    *mlbb1=*mlbb2;
    *mlbb2=cadang;
}

void sort_dm(diamond mlbb[])
{
    int i,j,idx;
    int batas;
    batas=y;
    for(i=0;i<batas;i++){
        idx=i;
        for(j=i;j<batas;j++){
            if(mlbb[j].id<mlbb[idx].id){
                idx=j;
            }
        }
    ///swap total
        swap_struck(&mlbb[i],&mlbb[idx]);
    }
        outputdata(mlbb);
        printf(">>>DATA SETELAH SORTING ID (ASCENDING)<<<\n");

}
void sort_dm_des(diamond mlbb[])
{
    int i,j,idx;
    int batas;
    batas=y;
    for(i=0;i<batas;i++){
        idx=i;
        for(j=i;j<batas;j++){
            if(mlbb[j].id>mlbb[idx].id){
                idx=j;
            }
        }
    ///swap total
        swap_struck(&mlbb[i],&mlbb[idx]);

    }
    outputdata(mlbb);
    printf(">>>DATA SETELAH SORTING ID (DESCENDING)<<<\n");

}
void Thanks()
{
    int x, j, n=25, jumlah;
        char kata [100];

        strcpy(kata,">>>>>TERIMA KASIH SUDAH MENGGUNAKAN JASA KAMI<<<<");
        jumlah = strlen(kata);

        for(x=n/2; x<=n; x+=2){
            for(j=1; j<n-x; j+=2){
                printf(" ");
            }
            j=1;
            while(j<=x){
                printf("=");
                j++;
            }
            for(j=1; j<=n-x; j++){
                printf(" ");
            }
            j=1;
            do {
                printf("=");
                j++;
            }
            while(j<=x);

            printf("\n");
        }


        for(x=n ; x>=1 ; x--){
            j=x;
            while(j<n){
                printf(" ");
                j++;
            }

            if(x==n){
                for(j=0 ; j<(n*2-jumlah) ; j++){
                    if(j==((n*2-jumlah)/2)){
                        printf("%s",kata);
                    }
                    else {
                        printf("=");
                    }
                }

            }
            else{
                for(j=1 ; j<=(x*2-1) ; j++){
                    printf("=");
                }

            }
            printf("\n");

        }
}

