#include "header.h"

void inputpembalap(game *pembalap, int jumlah){
    int i,arena;
    int jarak;
        do{
            printf("Arena Balapan :\n");
            printf("1. Dakar Rally\t\t5KM\n");
            printf("2. Nurburging\t\t15KM\n");
            printf("3. De La Sante\t\t25KM\n");
            printf("Tentukan Arena : ");scanf("%d",&arena);
            switch(arena){
                case 1 :
                    printf("Anda memilih Arena Dakar Rally sepanjang 5KM\n\n");
                    jarak=5;
                break;
                case 2 :
                    printf("Anda memilih Arena Nurburging sepanjang 15KM\n\n");
                    jarak=15;
                break;
                case 3 :
                    printf("Anda memilih Arena De La Sante sepanjang 25KM\n\n");
                    jarak=25;
                break;
                default :
                    printf("Pilihan Anda Tidak Tersedia\n");
                    printf("Coba input kembali\n\n");
            }
        }while(arena<1||arena>3);
    for(i=0;i<jumlah;i++)
    {
        printf("~~Pembalap ke %d~~\n",i+1);
        printf("Nama Pembalap\t\t\t\t: ");fflush(stdin);gets((pembalap+i)->nama);
        printf("Merk Mobil\t\t\t\t: ");gets((pembalap+i)->jns_mbl);
        printf("Nomor Pembalap\t\t\t\t: ");scanf("%d",&(pembalap+i)->nmr_mbl);
        printf("Kecepatan yang diinginkan(KM/jam)\t: ");
        scanf("%f",&(pembalap+i)->kec);
        (pembalap+i)->waktu=(jarak/(pembalap+i)->kec)*60;
        puts("");
    }
    cetakpembalap(pembalap, jumlah);
    urutdata(&pembalap,jumlah);
    printf("\n\t\t===URUTAN JUARA===\n");puts("");
    cetakjuara(pembalap,jumlah);
}

void inisialmalloc(game *pembalap, int jumlah){
    pembalap = (game *)malloc(jumlah*sizeof(game));
}

void cetakpembalap(game *pembalap, int jumlah){
    int i;
        printf("Nomor\t Nama Pembalap\t Merk Mobil\t Kecepatan\t Waktu Tempuh\n");
        for(i=0;i<jumlah;i++){
            printf("%d\t %s\t %s\t\t \t%.2f\t %.2f\n",
                   (pembalap+i)->nmr_mbl,(pembalap+i)->nama,(pembalap+i)->jns_mbl,(pembalap+i)->kec,(pembalap+i)->waktu);
        }
}

void urutdata(game *pembalap, int jumlah){
    int i,j;
    game temp;
    for(i=0;i<jumlah-1;i++){
        for(j=0;j<jumlah-i-1;j++){
            if((pembalap+j)->waktu > (pembalap+j+1)->waktu){
                temp = *(pembalap+j);
                *(pembalap+j) = *(pembalap+j+1);
                *(pembalap+j+1) = temp;
            }
        }
    }
}
void cetakjuara(game *pembalap, int jumlah)
{
    int i;
        printf("Juara\t Nomor\t Nama Pembalap\t Merk Mobil\t Kecepatan\t Waktu Tempuh\n");
        for(i=0;i<jumlah;i++){
            printf("%d\t %d\t %s\t %s\t %.2f\t\t %.2f\n",
                   i+1,(pembalap+i)->nmr_mbl,(pembalap+i)->nama,(pembalap+i)->jns_mbl,(pembalap+i)->kec,(pembalap+i)->waktu);
        }
}

