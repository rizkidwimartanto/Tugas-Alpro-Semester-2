#include "pustaka.h"

int main()
{
    int list1 [] = {9, 12, 43, 13, 15};
    int list2 [] = {12, 4, 19, 9, 22, 1};
    int list3 [] = {8, 21, 29, 17, 20, 13};
    int list4 [] = {18, 11, 19, 25, 31, 15};

    printf("Min Max Gap 1 --> %d\n", min_max_gap(list1, 5));
    printf("Min Max Gap 2 --> %d\n", min_max_gap(list2, 6));
    printf("Min Max Gap 3 --> %d\n", min_max_gap(list3, 6));
    printf("Min Max Gap 4 --> %d\n", min_max_gap(list4, 6));

    return 0;
}
