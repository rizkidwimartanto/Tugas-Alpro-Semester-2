#include "pustaka.h"

void sorting(int data[], int jumlah_data)
{
    int x,y,cek;
    for(x=0;x<jumlah_data-1;x++){
        for(y=0;y<jumlah_data-1-x;y++){
            if(data[y]>data[x]){
                cek=data[y];
                data[y]=data[x];
                data[x]=cek;
            }
        }
    }
}
void cetak(int data[], int jumlah_data)
{
    int x;
    for(x=0;x<jumlah_data;x++){
        printf("%d ",data[x]);
    }
}

int binary_search(int angka, int data[], int jumlah_data)
{
    int min, max, mid;
    min=0;
    max=jumlah_data-1;
    while(min<=max){
        mid=(min+max)/2;
        if(angka==data[mid]){
            return 1;
        }
        else if(angka<data[mid]){
            max=mid-1;
        }
        else{
            min=mid+1;
        }
    }
    return 0;
}

