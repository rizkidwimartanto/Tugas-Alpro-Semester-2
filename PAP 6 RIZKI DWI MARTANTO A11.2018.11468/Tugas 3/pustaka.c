#include "pustaka.h"

int is_anagram(char text1[], char text2[])
{
  int awal[26] = {0}, kedua[26] = {0}, c=0;

  while (text1[c] != '\0')
  {
    awal[text1[c]-'a']++;
    c++;
  }
  c = 0;

  while (text2[c] != '\0')
  {
    kedua[text2[c]-'a']++;
    c++;
  }

  for (c = 0; c < 26; c++)
  {
    if (awal[c] != kedua[c])
      return 0;
  }

  return 1;
}
