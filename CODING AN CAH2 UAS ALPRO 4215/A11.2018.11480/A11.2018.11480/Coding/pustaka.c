#include"pustaka.h"
///fungsi pendamping
void cls()
{
    int i = 0;
    system("cls");
    printf("\t\t\tKASIR SWALAYAN SERBA ADA AJA\n");
    printf("\t\t\t\tJL.Setiabudi II\n");
    while(i<80)
    {
        printf("=");
        i++;
    }
    entr();
}
void temp_str()
{
    int i=0;
    while(i<80)
    {
        printf("=");
        i++;
    }
}
void entr()
{
    puts("");
}
void menu_awal(int *pilihan)
{
    printf("1.Data Kasir\n");
    printf("2.Sistem Kasir\n");
    printf("3.Checkout(Tampilkan Struk)\n");
    printf("4.Exit Program\n");
    printf("Masukkan Nomor Pilihan\t\t : ");
    scanf("%d",&(*pilihan));
}
void input_dataKasir(char *nama_karyawan[],int *kode_karyawan)
{
    printf("\t\tMasukkan Data karyawan & kode Karyawan\n");
    printf("\t\t\tUntuk Membuka Sistem Kasir\n\n");
    printf("Nama Karyawan\t\t: ");
    gets(nama_karyawan);
    printf("Kode Karyawan\t\t: ");
    fflush(stdin);
    scanf("%d",&(*kode_karyawan));
}
void sistem_kasir(int *pilihan)
{
    printf("1.Jeans\n");
    printf("2.Kemeja\n");
    printf("3.Kaos\n");
    printf("Masukkan Nomor Pilihan\t\t: ");
    scanf("%d",&(*pilihan));
}
void menu_Jeans(int *pilihan)
{
    printf("Merk Jeans\n\n");
    printf("1.Nevada\n");
    printf("2.Emba\n");
    printf("Masukkan Nomor Pilihan\t\t: ");
    scanf("%d",&(*pilihan));
}
void menu_Kemeja(int *pilihan)
{
    printf("Merk Kemeja\n\n");
    printf("1.Giordano\n");
    printf("2.The Executive\n");
    printf("Masukkan Nomor Pilihan\t\t: ");
    scanf("%d",&(*pilihan));
}
void menu_Kaos(int *pilihan)
{
    printf("Merk Kaos\n\n");
    printf("1.3Second\n");
    printf("2.GreenLight\n");
    printf("Masukkan Nomor Pilihan\t\t: ");
    scanf("%d",&(*pilihan));
}

void menu_Nevada(int *harga,pilih_beli pilihan[],int indeks)
{
    int plhan;
    char sz[5];
    printf("Model Merk Nevada\n\n");
    printf("1.Jeans Ripped == RP170.000\n");
    printf("2.Jeans Legging == RP150.000\n");
    printf("Masukkan Nomor Pilihan\t\t: ");
    scanf("%d",&plhan);
    if(plhan == 1)
    {
        fflush(stdin);
        char jins[40]="Nevada Jeans Ripped";
        printf("Masukkan Size yang Ingin Dibeli\t\t: ");
        gets(sz);
        strcpy(pilihan[indeks].jenis,jins);
        strcpy(pilihan[indeks].ukuran,sz);
        pilihan[indeks].harga = 170000;
        *harga = 170000;
    }
    else
    {
        fflush(stdin);
        char jins[40]="Nevada Jeans Legging";
        printf("Masukkan Size yang Ingin Dibeli\t\t: ");
        gets(sz);
        strcpy(pilihan[indeks].jenis,jins);
        strcpy(pilihan[indeks].ukuran,sz);
        pilihan[indeks].harga = 150000;
        *harga = 150000;
    }
}
void menu_Emba(int *harga,pilih_beli pilihan[],int indeks)
{
    int plhan;
    char sz[5];
    printf("Model Merk Emba\n\n");
    printf("1.Jeans Ripped == RP190.000\n");
    printf("2.Jeans Legging == RP160.000\n");
    printf("Masukkan Nomor Pilihan\t\t: ");
    scanf("%d",&plhan);
    if(plhan == 1)
    {
        fflush(stdin);
        char jins[40]="Emba Jeans Ripped";
        printf("Masukkan Size yang Ingin Dibeli\t\t: ");
        gets(sz);
        strcpy(pilihan[indeks].jenis,jins);
        strcpy(pilihan[indeks].ukuran,sz);
        pilihan[indeks].harga = 190000;
        *harga = 190000;
    }
    else
    {
        fflush(stdin);
        char jins[40]="Emba Jeans Legging";
        printf("Masukkan Size yang Ingin Dibeli\t\t: ");
        gets(sz);
        strcpy(pilihan[indeks].jenis,jins);
        strcpy(pilihan[indeks].ukuran,sz);
        pilihan[indeks].harga = 160000;
        *harga = 160000;
    }
}
void menu_Giordano(int *harga,pilih_beli pilihan[],int indeks)
{
    int plhan;
    char sz[5];
    printf("Model Merk Giordano\n\n");
    printf("1.Lengan Pendek == RP180.000\n");
    printf("2.Lengan Panjang == RP200.000\n");
    printf("Masukkan Nomor Pilihan\t\t: ");
    scanf("%d",&plhan);
    if(plhan == 1)
    {
        fflush(stdin);
        char kmj[50]="Giordano Kemeja Lengan Pendek";
        printf("Masukkan Size yang Ingin Dibeli\t\t: ");
        gets(sz);
        strcpy(pilihan[indeks].jenis,kmj);
        strcpy(pilihan[indeks].ukuran,sz);
        pilihan[indeks].harga = 180000;
        *harga = 180000;
    }
    else
    {
        fflush(stdin);
        char kmj[50]="Giordano Kemeja Lengan Panjang";
        printf("Masukkan Size yang Ingin Dibeli\t\t: ");
        gets(sz);
        strcpy(pilihan[indeks].jenis,kmj);
        strcpy(pilihan[indeks].ukuran,sz);
        pilihan[indeks].harga = 200000;
        *harga = 200000;
    }
}
void menu_Theexecutive(int *harga,pilih_beli pilihan[],int indeks)
{
    int plhan;
    char sz[5];
    printf("Model Merk The Executive\n\n");
    printf("1.Lengan Pendek == RP160.000\n");
    printf("2.Lengan Panjang == RP180.000\n");
    printf("Masukkan Nomor Pilihan\t\t: ");
    scanf("%d",&plhan);
    if(plhan == 1)
    {
        fflush(stdin);
        char kmj[50]="The Executive Kemeja Lengan Pendek";
        printf("Masukkan Size yang Ingin Dibeli\t\t: ");
        gets(sz);
        strcpy(pilihan[indeks].jenis,kmj);
        strcpy(pilihan[indeks].ukuran,sz);
        pilihan[indeks].harga = 160000;
        *harga = 160000;
    }
    else
    {
        fflush(stdin);
        char kmj[50]="The Executive Kemeja Lengan Panjang";
        printf("Masukkan Size yang Ingin Dibeli\t\t: ");
        gets(sz);
        strcpy(pilihan[indeks].jenis,kmj);
        strcpy(pilihan[indeks].ukuran,sz);
        pilihan[indeks].harga = 180000;
        *harga = 180000;
    }
}
void menu_3Second(int *harga,pilih_beli pilihan[],int indeks)
{
    int plhan;
    char sz[5];
    printf("Model Merk 3Second\n\n");
    printf("1.Lengan Pendek == RP140.000\n");
    printf("2.Lengan Panjang == RP160.000\n");
    printf("Masukkan Nomor Pilihan\t\t: ");
    scanf("%d",&plhan);
    if(plhan == 1)
    {
        fflush(stdin);
        char kos[50]="3Second Kaos Lengan Pendek";
        printf("Masukkan Size yang Ingin Dibeli\t\t: ");
        gets(sz);
        strcpy(pilihan[indeks].jenis,kos);
        strcpy(pilihan[indeks].ukuran,sz);
        pilihan[indeks].harga = 140000;
        *harga = 140000;
    }
    else
    {
        fflush(stdin);
        char kos[50]="3Second Kaos Lengan Panjang";
        printf("Masukkan Size yang Ingin Dibeli\t\t: ");
        gets(sz);
        strcpy(pilihan[indeks].jenis,kos);
        strcpy(pilihan[indeks].ukuran,sz);
        pilihan[indeks].harga = 160000;
        *harga = 160000;
    }
}
void menu_Greenlight(int *harga,pilih_beli pilihan[],int indeks)
{
    int plhan;
    char sz[5];
    printf("Model Merk Greenlight\n\n");
    printf("1.Lengan Pendek == RP120.000\n");
    printf("2.Lengan Panjang == RP140.000\n");
    printf("Masukkan Nomor Pilihan\t\t: ");
    scanf("%d",&plhan);
    if(plhan == 1)
    {
        fflush(stdin);
        char kos[50]="Greenlight Kaos Lengan Pendek";
        printf("Masukkan Size yang Ingin Dibeli\t\t: ");
        gets(sz);
        strcpy(pilihan[indeks].jenis,kos);
        strcpy(pilihan[indeks].ukuran,sz);
        pilihan[indeks].harga = 120000;
        *harga = 120000;
    }
    else
    {
        fflush(stdin);
        char kos[50]="Greenlight Kaos Lengan Panjang";
        printf("Masukkan Size yang Ingin Dibeli\t\t: ");
        gets(sz);
        strcpy(pilihan[indeks].jenis,kos);
        strcpy(pilihan[indeks].ukuran,sz);
        pilihan[indeks].harga = 140000;
        *harga = 140000;
    }
}

void sorting(pilih_beli pilihan[],int indeks)
{
    int i = 0;
    int j;
    int idx;
    char jeans[50];
    char ukuran[5];
    int harga;
    while(i<= indeks)
    {
        idx = i;
        j = i;
        while(j <=indeks)
        {
            if(strcmpi(pilihan[idx].jenis,pilihan[j].jenis)>0)
            {
                idx=j;
            }
            else if(strcmpi(pilihan[idx].jenis,pilihan[j].jenis)==0)
            {
                if(pilihan[idx].ukuran > pilihan[j].ukuran)
                {
                    idx = j;
                }
            }
            j++;
        }
        strcpy(jeans,pilihan[i].jenis);
        strcpy(pilihan[i].jenis,pilihan[idx].jenis);
        strcpy(pilihan[idx].jenis,jeans);

        strcpy(ukuran,pilihan[i].ukuran);
        strcpy(pilihan[i].ukuran,pilihan[idx].ukuran);
        strcpy(pilihan[idx].ukuran,ukuran);

        harga = pilihan[i].harga;
        pilihan[i].harga = pilihan[idx].harga;
        pilihan[idx].harga = harga;
        i++;
    }
}

int rekursif_jmlBrg(int bil1,int bil2)
{
    if(bil2 == 0)
  {
    return bil1;
  }
  else if(bil2>0)
  {
    return  rekursif_jmlBrg(bil1,(bil2-1)) +1;
  }
  else
  {
    return  rekursif_jmlBrg(bil1,(bil2+1)) -1;
  }
}
