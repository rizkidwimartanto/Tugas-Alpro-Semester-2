#include "pustaka.h"

int main()
{
    int list1 [] = {1, 2, 3, 4, 5};
    int list2 [] = {5, 4, 3, 2, 1};
    int list3 [] = {6, 7, 8, 9, 10};
    int list4 [] = {10, 9, 8, 7, 6};
    printf("TRUE  = 1\n");
    printf("FALSE = 0\n\n");

    printf("is inverse 1 --> %d\n", is_inverse(list1, list2, 5));
    printf("is inverse 2 --> %d\n", is_inverse(list3, list4, 5));
    printf("is inverse 3 --> %d\n", is_inverse(list1, list3, 5));
    printf("is inverse 4 --> %d\n", is_inverse(list2, list2, 5));

    return 0;
}
