#include "header.h"

int hitung_vokal(char text[500])
{
    char vokal[10] = "aAiIuUeEoO";
    int a, b, panjang, hitung_v = 0;
    panjang = strlen(text);
    for (a=0; a<panjang; a++)
    {
        for (b=0; b<strlen(vokal); b++)
        {
            if(text[a]== vokal[b]){
               hitung_v++;
            }
        }
    }
    return hitung_v;
}
