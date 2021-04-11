#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    int tanggal;
    int bulan;
    int tahun;
}date;

typedef struct{
    int   jenis;
    int   harga;
    char  nama[50];
    date  tgl_datang;
    int   status_bayar;
}pasien;

int index_global;


void judul();
void judul_aksi(char isi[50]);
void pesan(char msg[100]);
char pilih_menu();
void pause();

void tampil(int index, pasien l[]);
    void tampil_rekursif(int index, pasien l[]);
    void tampil_detail(int index, pasien l[]);

void tambah(int index, pasien l[]);
    void hitung_harga(int index, pasien l[]);
    void hitung_tgl_ambil(int index, pasien l[]);

void hapus(int index, pasien l[]);
    void swaping_float(float *a, float *b);
    void swaping_integer(int *a, int *b);
    void ordering_hapus(int index, int pilih, pasien l[]);


void cari(int index, pasien l[]);
    void cari_by_nama(int index, pasien l[]);
    void cari_by_tanggal(int index, pasien l[]);

void urut(int index, pasien l[]);
    void urut_tgl_datang(int index, pasien l[]);
    void urut_harga(int index, pasien l[]);
void konversi_tgl_to_num(int tgl, int bln, int thn, int *hasil);

#endif // HEADER_H_INCLUDED
