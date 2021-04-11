#include "Header.h"



int main()
{
    int arr[100];
    int i,n;

    printf("Masukan Panjang Array\t: ");    scanf("%d", &n);
    puts("");
		for(i=0;i<n;i++)
		{
			printf("Angka Ke %d : ", i);    scanf("%d", &arr[i]);
		}

		maks(arr,n);
    return 0;
}
