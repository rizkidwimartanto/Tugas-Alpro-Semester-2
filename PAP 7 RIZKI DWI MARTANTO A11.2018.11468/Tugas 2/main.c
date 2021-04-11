#include "pustaka.h"

int main()
{
    puts("PENGURANGAN\n");
    cetak(9,2);
    printf(" = %d\n", subs_rec(9,2));
    puts("");
    cetak(7,4);
    printf(" = %d\n", subs_rec(7,4));
    puts("");
    cetak(2,5);
    printf(" = %d\n", subs_rec(2,5));
    puts("");
    cetak(5,5);
    printf(" = %d\n", subs_rec(5,5));
    puts("");
    return 0;
}
