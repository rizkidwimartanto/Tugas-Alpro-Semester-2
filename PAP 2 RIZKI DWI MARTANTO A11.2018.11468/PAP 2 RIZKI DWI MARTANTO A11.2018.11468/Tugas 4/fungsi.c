#include "header.h"

void char_frequency(char text[])
{
    int c = 0, x,  hasil[26] = {0};

    while (text[c] != '\0')
    {
        if (text[c] >= 'a' && text[c] <= 'z'){
            x = text[c] - 'a';
            hasil[x]++;
        }
        else if (text[c] >= 'A' && text[c] <= 'Z'){
            x = text[c] - 'A';
            hasil[x]++;
        }
        c++;
    }
    for (c=0; c < 26; c++){
        printf("%c = %d \n", c + 'a', hasil[c]);
    }
    puts("\n");

}
