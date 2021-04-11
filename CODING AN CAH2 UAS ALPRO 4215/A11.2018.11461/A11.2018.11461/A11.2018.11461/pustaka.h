#define PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

int A;

struct nama
{
    char namadepan[20];
    char namabelakang[30];
};

struct waktu
{
    int tanggal;
    char bulan[10];
    int tahun;
    int lama;
};

struct temptgl
{
    struct waktu tgl;
    char tempat[20];
};

struct alamat
{
    char jalan[25];
    char nojln[10];
    int rt;
    int rw;
    char desa[25];
    int kodepos;
    char kecamatan[25];
};

struct data
{
    char ktp[17];
    struct nama masy;
    struct temptgl lahir;
    struct alamat almtmasy;
    char nohp[15];
};

struct data masy[145];
void IsiData(int A);
void bacadata(int A);
void SortingNamaAsc(int A);
void SortingNamaDesc(int A);
void Search(int *cari,int A);
int Sisa(int A,int maks);
