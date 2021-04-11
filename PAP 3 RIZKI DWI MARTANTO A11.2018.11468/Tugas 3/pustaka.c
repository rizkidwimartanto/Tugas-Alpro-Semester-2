#include "pustaka.h"

void bubble_sort1(int data[], int jumlah_data){
    int temp,i,j;

    for(i=0; i<jumlah_data-1; i++){
        for(j=0;j<jumlah_data-i-1;j++){
            if(data[j]>data[j+1]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
        printarray(data, jumlah_data);
        printf("\n");
    }
    printf("\n");
}
void printarray(int data[], int jumlah_data){
    int i;
    for(i=0;i<jumlah_data;i++){
         printf("%d ",data[i]);
    }

}
