#include "header.h"

void print_diamond(int row);
int main()
{
    int row;
    printf("Masukkan batas angka : ");  scanf("%d",&row);
    print_diamond(row);

    return 0;
}
