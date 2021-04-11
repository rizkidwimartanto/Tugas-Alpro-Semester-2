#include "pustaka.h"

int cek_urut(int data[], int jumlah_data){
    int i;

    for(i=0; i<jumlah_data; i++){
        if(data[0]<data[1] && data[1]<data[2] && data[2]<data[3] && data[3]<data[4]){
                return 1;
        }
        else{
            return 0;
        }
    }
}
