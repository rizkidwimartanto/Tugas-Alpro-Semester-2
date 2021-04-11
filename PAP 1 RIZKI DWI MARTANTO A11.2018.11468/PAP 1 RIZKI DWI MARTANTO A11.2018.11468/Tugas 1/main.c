#include <stdio.h>
#include <stdlib.h>

void print_identitas();
int main()
{
    print_identitas();
    return 0;
}
void print_identitas(){
    printf("==========================================================\n");
    printf("NIM    : A11.2017.12345\n");
    printf("Nama   : Anton Surowiroto\n");
    printf("Alamat : Gunungpati, Semarang\n");
    printf("==========================================================\n");
}
void print_jumlah( int num1, int num2);
int main()
{
    print_jumlah(15, 12);
    print_jumlah(44, 29);
    return 0;
}
void print_jumlah( int num1, int num2){
    int jumlah = num1 + num2;

    printf("%d + %d = %d", num1, num2, jumlah);
    puts("");
}
