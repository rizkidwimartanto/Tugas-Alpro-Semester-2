#include "pustaka.h"

int main()
{
  char text1[100], text2[100];

  printf("is_anagram 1 --> %d\n", is_anagram("the eyes", "they see"));
  printf("is_anagram 2 --> %d\n", is_anagram("astronomer", "moon starer"));
  printf("is_anagram 3 --> %d\n", is_anagram("udinus", "dian nuswantoro"));
  printf("is_anagram 4 --> %d\n", is_anagram("columbia", "australia"));

  if (is_anagram(text1, text2) == 1)
    return 1;
  else
    return 0;

  return 0;
}


