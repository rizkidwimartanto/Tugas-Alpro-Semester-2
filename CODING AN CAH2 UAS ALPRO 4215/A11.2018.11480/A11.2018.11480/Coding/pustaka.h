#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct
{
    char nama_karyawan[30];
    int kode_karyawan;
}data_Ksr;

typedef struct
{
    char jenis[50];
    char ukuran[5];
    int harga;
}pilih_beli;

///Fungsi Pendamping
void cls();
void entr();
void temp_str();
///fungsi Utama
void menu_awal(int *pilihan);
void input_dataKasir(char *nama_karyawan[],int *kode_karyawan);
void sistem_kasir(int *pilihan);
void menu_Jeans(int *pilihan);
void menu_Kemeja(int *pilihan);
void menu_Kaos(int *pilihan);
void menu_Nevada(int *harga,pilih_beli pilihan[],int indeks);
void menu_Emba(int *harga,pilih_beli pilihan[],int indeks);
void menu_Giordano(int *harga,pilih_beli pilihan[],int indeks);
void menu_Theexecutive(int *harga,pilih_beli pilihan[],int indeks);
void menu_3Second(int *harga,pilih_beli pilihan[],int indeks);
void menu_Greenlight(int *harga,pilih_beli pilihan[],int indeks);
void sorting(pilih_beli pilihan[],int indeks);
int rekursif_jmlBrg(int bil1,int bil2);


#endif // PUSTAKA_H_INCLUDED
