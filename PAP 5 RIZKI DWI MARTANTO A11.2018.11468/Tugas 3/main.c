#include "pustaka.h"

int main()
{
    int a,b;
    int list1 [] = {9, 12, 43, 13, 15};
    int list2 [] = {12, 4, 19, 9, 22, 1};
    int list3 [] = {8, 21, 29, 17, 20, 13};
    int list4 [] = {18, 11, 19, 25, 31, 15};

    min_max(list1, 5, &a, &b);
    printf("Min Max 1 --> a = %d , b = %d\n", a, b);
    min_max(list2, 6, &a, &b);
    printf("Min Max 2 --> a = %d , b = %d\n", a, b);
    min_max(list3, 6, &a, &b);
    printf("Min Max 3 --> a = %d , b = %d\n", a, b);
    min_max(list4, 6, &a, &b);
    printf("Min Max 4 --> a = %d, b = %d\n", a, b);

    return 0;
}
