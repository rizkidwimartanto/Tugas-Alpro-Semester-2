#include "pustaka.h"

int at_least (char huruf, int jumlah, char teks[])
{
    int x;
    int frequency = 0;

    for(x=0; x<strlen(teks); x++)
    {
        if(huruf==tolower(teks[x]))
        {
            frequency++;
        }
    }

    if(frequency==jumlah)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
