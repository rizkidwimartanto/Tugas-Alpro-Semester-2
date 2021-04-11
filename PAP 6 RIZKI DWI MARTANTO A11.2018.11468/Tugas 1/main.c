#include "pustaka.h"

int main()
{
    int list1[]={1,2,3,4,5,6,7,8,9,10};
    int list2[]={4,8,6,1,10,3,9,2,7,5};

    printf("TRUE  = 1\n");
    printf("FALSE = 0\n\n");
    printf("Data 1 = ");
    cetak(list1,10);
    printf("\nApakah angka 3 ada pada data 1? %d\n",binary_search(3,list1,10));
    printf("Data 2 = ");
    cetak(list2,10);
    printf("\nApakah angka 7 ada pada data 2? %d\n\n",binary_search(7,list2,10));

    return 0;
}
