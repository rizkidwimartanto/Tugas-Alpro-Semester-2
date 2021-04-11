#include "pustaka.h"

int main()
{
    int arr [] = {12, 14, 20, 15, 22, 25, 18, 10, 27};
    int x;
    int jumlah_data = 9;
    int angka;

    printf("TRUE  = 1\n");
    printf("FALSE = 0\n\n");
    printf("Int data = ");
    for (x=0; x<jumlah_data; x++)
    {
        printf("(%d) ", arr[x]);
    }
    puts("");

    printf("Sequent Search 15 --> %d\n", sequent_search(arr, jumlah_data, 15));
    printf("Sequent Search 25 --> %d\n", sequent_search(arr, jumlah_data, 25));
    printf("Sequent Search 39 --> %d\n", sequent_search(arr, jumlah_data, 39));
    printf("Sequent Search 17 --> %d\n", sequent_search(arr, jumlah_data, 17));

    return 0;
}
