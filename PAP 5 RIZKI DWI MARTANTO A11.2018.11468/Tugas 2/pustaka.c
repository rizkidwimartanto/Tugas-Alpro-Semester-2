#include "pustaka.h"

int is_inverse (int list1 [], int list2 [], int jumlah_data)
{
    int x;
    for (x=0; x<jumlah_data; x++)
    {
        if (list1[x] == list2 [jumlah_data-1-x]){
            return 1;
        }
        else{
            return 0;
        }
    }
}
