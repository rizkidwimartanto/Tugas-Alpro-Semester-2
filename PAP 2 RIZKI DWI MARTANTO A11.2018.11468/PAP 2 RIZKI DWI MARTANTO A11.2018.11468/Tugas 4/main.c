#include "header.h"

int main()
{
    char text[100];
    strcpy(text, "UDINUS kampus bebas Narkoba");
    printf("%s\n", text);
    char_frequency(text);

    strcpy(text, "Algoritma sangat menyenangkan");
    printf("%s\n", text);
    char_frequency(text);
    return 0;
}
