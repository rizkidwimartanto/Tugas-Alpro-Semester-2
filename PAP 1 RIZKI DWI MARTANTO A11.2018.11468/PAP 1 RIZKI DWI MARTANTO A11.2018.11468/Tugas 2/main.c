#include <stdio.h>
#include <stdlib.h>

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

