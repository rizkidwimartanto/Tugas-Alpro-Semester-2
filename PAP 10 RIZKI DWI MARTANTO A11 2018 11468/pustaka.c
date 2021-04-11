#include "pustaka.h"

///TUGAS 1
pecahan makePecahan(int pemb, int peny)
{
    pecahan p;
    p.pembilang = pemb;
    p.penyebut  = peny;
    printf("Bilangan pecahan = %d/%d\n",p.pembilang, p.penyebut);

    return p;
}
///TUGAS 2
void printPecahan(pecahan p)
{

}
///TUGAS 3
int pembilang(pecahan p)
{
    printf("Bilangan pembilang = %d\n",p.pembilang);
}
///TUGAS 4
int penyebut(pecahan p)
{
    printf("Bilangan penyebut = %d\n",p.penyebut);
}
///TUGAS 5
tambahPecahan addPecahan(pecahan p1, pecahan p2)
{
    tambahPecahan p;
    p.x = (p1.pembilang * p2.penyebut) + (p2.pembilang * p1.penyebut);
    p.y = p1.penyebut * p2.penyebut;
    printf("Add pecahan = %d/%d\n", p.x, p.y);

    return p;
}
///TUGAS 6
kurangPecahan subPecahan (pecahan p1, pecahan p2)
{
    kurangPecahan p;
    p.x = (p1.pembilang * p2.penyebut) - (p2.pembilang * p1.penyebut);
    p.y = p1.penyebut * p2.penyebut;
    printf("Sub pecahan = %d/%d\n", p.x, p.y);

    return p;
}
///TUGAS 7
kaliPecahan mulPecahan (pecahan p1, pecahan p2)
{
    kaliPecahan p;
    p.x = p1.pembilang * p2.pembilang;
    p.y = p1.penyebut * p2.penyebut;
    printf("Sub pecahan = %d/%d\n", p.x, p.y);

    return p;
}
///TUGAS 8
bagiPecahan divPecahan (pecahan p1, pecahan p2)
{
    bagiPecahan p;
    p.x = p1.pembilang * p2.penyebut;
    p.y = p1.penyebut * p2.pembilang;
    printf("Sub pecahan = %d/%d\n", p.x, p.y);

    return p;
}
///TUGAS 9
float desimalPecahan(pecahan p)
{
    printf("Bilangan desimal = %d\n", p.penyebut);
}
///TUGAS 10
int isEqual(pecahan p1, pecahan p2)
{
    float x, y;
    x = (float) p1.pembilang / (float) p1.penyebut;
    y = (float) p2.pembilang / (float) p2.penyebut;
    if (x == y){
        return 1;
    }
    else{
        return 0;
    }
}
///TUGAS 11
int isBigger(pecahan p1, pecahan p2)
{
    float x, y;
    x = (float) p1.pembilang / (float) p1.penyebut;
    y = (float) p2.pembilang / (float) p2.penyebut;
    if (x > y){
        return 1;
    }
    else{
        return 0;
    }
}
///TUGAS 12
int isSmaller(pecahan p1, pecahan p2)
{
    float x, y;
    x = (float) p1.pembilang / (float) p1.penyebut;
    y = (float) p2.pembilang / (float) p2.penyebut;
    if (x < y){
        return 1;
    }
    else{
        return 0;
    }
}


