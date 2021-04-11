#include "pustaka.h"

int main()
{
    int data1[] = {12,15,1,23,44,21,30};
    int data2[] = {19,16,22,15,9,28,11};
    int data3[] = {41,29,9,14,6,5,22};

    selectionSort(data1, 0,7);
    selectionSort(data2, 0,7);
    selectionSort(data3, 0,7);
	rec_print_all(data1,0,7);
	puts("");
	rec_print_all(data2,0,7);
	puts("");
	rec_print_all(data3,0,7);


    return 0;
}
