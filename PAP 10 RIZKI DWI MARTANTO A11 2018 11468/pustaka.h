#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

///TUGAS 1
typedef struct
{
    int pembilang;
    int penyebut;
}pecahan;
pecahan makePecahan(int pemb, int peny);
///TUGAS 2
void printPecahan(pecahan p);
///TUGAS 3
int pembilang(pecahan p);
///TUGAS 4
int penyebut(pecahan p);
///TUGAS 5
typedef struct
{
    int x;
    int y;
}tambahPecahan;
tambahPecahan addPecahan(pecahan p1, pecahan p2);
///TUGAS 6
typedef struct
{
    int x;
    int y;
}kurangPecahan;
kurangPecahan subPecahan (pecahan p1, pecahan p2);
///TUGAS 7
typedef struct
{
    int x;
    int y;
}kaliPecahan;
kaliPecahan mulPecahan (pecahan p1, pecahan p2);
///TUGAS 8
typedef struct
{
    int x;
    int y;
}bagiPecahan;
bagiPecahan divPecahan (pecahan p1, pecahan p2);
///TUGAS 9
float desimalPecahan(pecahan p);
///TUGAS 10
int isEqual (pecahan p1, pecahan p2);
///TUGAS 11
int isBigger(pecahan p1, pecahan p2);
///TUGAS 12
int isSmaller(pecahan p1, pecahan p2);


#endif // PUSTAKA_H_INCLUDED
