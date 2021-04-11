#include "pustaka.h"

int search_word(char word[100], char text[100])
{
    int i, j, cari;
    int strLen, wordLen;
    strLen  = strlen(text);
    wordLen = strlen(word);

    for(i=0; i<strLen - wordLen; i++)
    {
        cari = 1;
        for(j=0; j<wordLen; j++)
        {
            if(text[i + j] != word[j])
            {
                cari = 0;
                break;
            }
        }

        if(cari == 1)
        {
            return 1;
        }
    }
    return 0;
}
