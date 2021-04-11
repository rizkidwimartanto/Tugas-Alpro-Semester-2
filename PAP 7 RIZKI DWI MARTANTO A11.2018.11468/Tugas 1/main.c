#include "pustaka.h"

int main()
{
    puts("PENJUMLAHAN\n");
    cetak(5,6);
    printf(" = %d \n",add_rec(5,6));
    puts("");
    cetak(9,3);
    printf(" = %d \n",add_rec(9,3));
    puts("");
    cetak(7,4);
    printf(" = %d \n",add_rec(7,4));
    puts("");
    cetak(8,1);
    printf(" = %d \n",add_rec(8,1));
    puts("");
    return 0;
}
