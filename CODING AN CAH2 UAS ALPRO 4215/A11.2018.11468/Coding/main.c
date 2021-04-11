#include "header.h"

int main()
{
    int hargaCatCatylac = 30000;
    int hargaCatNipoon = 25000;
    int hargaCatAvitex = 20000;
    int hargaCatVinilex = 15000;
    int daftarHarga[] = {hargaCatCatylac, hargaCatNipoon, hargaCatAvitex, hargaCatVinilex};
    int pilih;
    int pilihHarga;
    int jumlahBeli;
    int priceTotal;
    char tanya;
    char namaPelanggan[50];
//    char tanggal[50];
    int *a, *b, *c, *d;
    int uk=sizeof(daftarHarga)/sizeof(int);

    printf("-----------------TOKO CAT------------------------\n\n");
    printf("Nama Pelanggan : ");    fflush(stdin);  gets(namaPelanggan);
//    printf("Hari/Tanggal   : ");    fflush(stdin);  gets(tanggal);
//    printf("Jam            : ");    scanf("%f", &jam);
    puts("-------------------------------------------------");
    printf("Pilihan Cat : \n");
    printf("1. Cat Catylac \n");
    printf("2. Cat Nipoon  \n");
    printf("3. Cat Avitex  \n");
    printf("4. Cat Vinilex \n");
    puts("-------------------------------------------------");
    printf("1. Dari harga termahal ke harga termurah\n");
    printf("2. Dari harga termurah ke harga termahal\n");
    printf("Pilih daftar harga : ");    scanf("%d", &pilihHarga);

    if(pilihHarga == 1){
        printf("Cat Catylac, Cat Nippon, Cat Avitex, Cat Vinilex\n");
        selectionSort1(daftarHarga, 0, 4);
        cetak(daftarHarga, 4);
        puts("\n\t\t*note : perkaleng");
    }
    else if(pilihHarga == 2){
        printf("Cat Vinilex, Cat Avitex, Cat Nippon, Cat Catylac\n");
        selectionSort2(daftarHarga, 0, 4);
        cetak(daftarHarga, 4);
        puts("\n\t\t*note : perkaleng");
    }
    puts("-------------------------------------------------");

    printf("Pilih Cat : "); scanf("%d", &pilih);
    if (squentialSearch(daftarHarga,uk,pilih))
    {
        if (pilih==1)
        {
            printf("stock cat pilihan anda masih banyak\n");
        }
        else if(pilih==2){
            printf("stock cat pilihan anda masih banyak\n");
        }
        else if(pilih==3){
            printf("stock cat pilihan anda masih banyak\n");
        }
        else if(pilih==4){
            printf("stock cat pilihan anda masih banyak\n");
        }
        else{
            printf("maaf cat yang anda pilih habis\n");
        }
    }
    puts("");
        if(pilih == 1){
        printf("Cat Catylac\n");
        printf("Jumlah Beli : ");   scanf("%d", &jumlahBeli);
        totalHarga(&a, jumlahBeli, hargaCatCatylac);
        puts("-------------------------------------------------");
        puts("\t\t*Struck Pembelian*");
        printf("Nama Pelanggan : %s\n",namaPelanggan);
        printf("Hari/Tanggal   : %s",asctime (Sys_T));
        printf("Total Harga    : Rp.%d\n", a);
        printf("-----------------Terima Kasih--------------------\n");
    }
    else if(pilih == 2){
        printf("Cat Nippon\n");
        printf("Jumlah Beli : ");   scanf("%d", &jumlahBeli);
        totalHarga(&b, jumlahBeli, hargaCatNipoon);
        puts("-------------------------------------------------");
        puts("\t\t*Struck Pembelian*");
        printf("Nama Pelanggan : %s\n",namaPelanggan);
        printf("Hari/Tanggal   : %s",asctime (Sys_T));
        printf("Total Harga    : Rp.%d\n", b);
        printf("-----------------Terima Kasih--------------------\n");
    }
    else if(pilih == 3){
        printf("Cat Avitex\n");
        printf("Jumlah Beli : ");   scanf("%d", &jumlahBeli);
        totalHarga(&c, jumlahBeli, hargaCatAvitex);
        puts("-------------------------------------------------");
        puts("\t\t*Struck Pembelian*");
        printf("Nama Pelanggan : %s\n",namaPelanggan);
        printf("Hari/Tanggal   : %s",asctime (Sys_T));
        printf("Total Harga    : Rp.%d\n", c);
        printf("-----------------Terima Kasih--------------------\n");
    }
    else if(pilih == 4){
        printf("Cat Vinilex\n");
        printf("Jumlah Beli : ");   scanf("%d", &jumlahBeli);
        totalHarga(&d, jumlahBeli, hargaCatVinilex);
        puts("-------------------------------------------------");
        puts("\t\t*Struck Pembelian*");
        printf("Nama Pelanggan : %s\n",namaPelanggan);
        printf("Hari/Tanggal   : %s",asctime (Sys_T));
        printf("Total Harga    : Rp.%d\n", d);
        printf("-----------------Terima Kasih--------------------\n");
    }

    return 0;
}
