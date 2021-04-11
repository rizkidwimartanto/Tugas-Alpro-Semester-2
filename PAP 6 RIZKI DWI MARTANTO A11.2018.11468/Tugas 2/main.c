#include "pustaka.h"

int main()
{
    printf("TRUE  = 1\n");
    printf("FALSE = 0\n\n");

    printf("Search word 1 --> %d\n", search_word("Dian", "Universitas Dian Nuswantoro"));
    printf("Search word 2 --> %d\n", search_word("Algo", "Algoritma"));
    printf("Search word 3 --> %d\n", search_word("Program", "Pemrograman"));
    printf("Search word 4 --> %d\n", search_word("Dinus", "Dian Nuswantoro"));

    return 0;
}
