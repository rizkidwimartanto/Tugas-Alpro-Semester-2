#include "header.h"

void print_diamond(int row)
{
  int c, k, jarak = 1;

  jarak = row - 1;

  for (k = 1; k <= row; k++)
  {
    for (c = 1; c <= jarak; c++)
      printf(" ");

    jarak--;

    for (c = 1; c <= 2*k-1; c++)
      printf("*");

    printf("\n");
  }

  jarak = 1;

  for (k = 1; k <= row - 1; k++)
  {
    for (c = 1; c <= jarak; c++)
      printf(" ");

    jarak++;

    for (c = 1 ; c <= 2*(row-k)-1; c++)
      printf("*");

    printf("\n");
  }
}
