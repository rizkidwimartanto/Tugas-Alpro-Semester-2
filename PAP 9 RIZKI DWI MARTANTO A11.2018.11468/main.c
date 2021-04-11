#include "pustaka.h"

int main()
{
    printf("-----------TUGAS 1 Tukar Nilai-----------\n");
    int a = 5, b = 6, c = 7, d = 8;
    int e = 10, f = 11, g = 12, h = 13;

    swapValue(&a, &b);
    printf("swapValue(5, 6);    a = %d, b = %d\n",a, b);
    swapValue(&c, &d);
    printf("swapValue(7, 8);    c = %d, d = %d\n",c, d);
    swapValue(&e, &f);
    printf("swapValue(10, 11);  e = %d, f = %d\n",e, f);
    swapValue(&g, &h);
    printf("swapValue(12, 13);  g = %d, h = %d\n",g, h);

    system("pause");
    puts("");

    printf("-----------TUGAS 2 Penjumlahan-----------\n");
    int target = a = b = c = d;

    changeValue(&a, 5, 9);
    printf("changeValue(&a, 5, 9) -> a = %d\n", a);
    changeValue(&b, 7, 7);
    printf("changeValue(&a, 7, 7) -> b = %d\n", b);
    changeValue(&c, 6, 5);
    printf("changeValue(&a, 6, 5) -> c = %d\n", c);
    changeValue(&d, 2, 9);
    printf("changeValue(&a, 2, 9) -> d = %d\n", d);

    system("pause");
    puts("");

    printf("-----------TUGAS 3-----------\n");
    int *arr1, *arr2, *arr3, *arr4;
    printf("cetak array sampai angka 6\n");
    initDynArray(&arr1, 6);
    puts("");
    printf("cetak array sampai angka 4\n");
    initDynArray(&arr2, 4);
    puts("");
    printf("cetak array sampai angka 5\n");
    initDynArray(&arr3, 5);
    puts("");
    printf("cetak array sampai angka 3\n");
    initDynArray(&arr4, 3);
    puts("");

    system("pause");
    puts("");

    printf("-----------TUGAS 4 Cetak Array-----------\n");
    int arrA [] = {1, 2, 3, 4, 5};
    printArray(arrA, 5);
    puts("");
    int arrB[] = {6, 7, 8, 9, 10};
    printArray(arrB, 5);
    puts("");
    int arrC[] = {21, 22, 23, 24, 25};
    printArray(arrC, 5);
    puts("");
    int arrD[] = {31, 32, 33, 34, 35};
    printArray(arrD, 5);
    puts("");

    system("pause");
    puts("");

    printf("-----------TUGAS 5 Nilai Average-----------\n");
    float A,B,C,D;
    int avg1[] ={1, 2, 3, 4, 5};
    int avg2[] ={6, 7, 8, 9, 10};
    int avg3[] ={11, 12, 13, 14, 15};
    int avg4[] ={16, 17, 18, 19, 20};

    printf("putAverage(&a, {1, 2, 3, 4, 5}, 5);      --> a = ");
    putAverage(&A, avg1, 5);
    printf("%.2f\n", A);
    printf("putAverage(&a, {6, 7, 8, 9, 10}, 5);     --> a = ");
    putAverage(&B, avg2, 5);
    printf("%.2f\n", B);
    printf("putAverage(&a, {11, 12, 13, 14, 15}, 5); --> a = ");
    putAverage(&C, avg3, 5);
    printf("%.2f\n", C);
    printf("putAverage(&a, {16, 17, 18, 19, 20}, 5); --> a = ");
    putAverage(&D, avg4, 5);
    printf("%.2f\n", D);


    return 0;
}
