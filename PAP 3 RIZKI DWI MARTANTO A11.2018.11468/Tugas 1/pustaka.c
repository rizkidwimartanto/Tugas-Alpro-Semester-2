#include "pustaka.h"

int count_array(int data[],int jml_data){
    int i, an_array = 0;
    jml_data = 0;

    for(i=0; data[i] != jml_data; i++){
        an_array++;
    }
    return an_array;
}
