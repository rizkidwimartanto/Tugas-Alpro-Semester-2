#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct {
    int id;
    char nick[50];
    int dm;
    int harga;
    int code;
    int total;
}diamond;

int y; ///indeks global
char ulang;
int pil, pil_id,pil_dm ;
int *band;
char ban[30];
void menu();
void menu_search();
void menu_sorting();
void inputdata(diamond mlbb[]);
void outputdata(diamond mlbb[]);
void searc_id(diamond mlbb[]);
void searc_nick(diamond mlbb[]);
void output_dm(diamond mlbb[]);
void output_searchid(diamond mlbb[]);
void output_searchnick(diamond mlbb[]);
void output_nota(diamond mlbb[]);
//void swap_dm(int *a, int *b);
int output_total(diamond mlbb[], int a, int tmp);
int output_total_duit(diamond mlbb[], int a, int tmp);
void sort_dm(diamond mlbb[]);
void sort_dm_des(diamond mlbb[]);
void swap_struck(diamond *mlbb1, diamond *mlbb2);
void hapus(diamond mlbb[]);
void Thanks();

#endif // PUSTAKA_H_INCLUDED
