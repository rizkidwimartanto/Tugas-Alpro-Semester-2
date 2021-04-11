#include  "pustaka.h"

int main(){
    y=0;
    diamond mlbb[50];
    printf("\n\n\t-->>Data PreOrder Joki topUp Belum Tersedia, Isi Data Dahulu<<--\n\n");
    system("PAUSE");

    do{
        menu();
        scanf("%d",&pil);
        switch(pil){
        case 1 :
            inputdata(mlbb);
            break;

        case 2 :
            outputdata(mlbb);
            break;
        case 3 :
            do{
                menu_search();
                scanf("%d",&pil_id);
                if(pil_id==1){
                    searc_id(mlbb);
                }
                else if(pil_id==2){
                    searc_nick(mlbb);
                }
                else if(pil_id>3){
                    printf("--->>mohon maaf hanya terdapat 3 menu pilihan, silahkan masukan pilihan lagi<<---\n");
                }
                system("PAUSE");
            }while(pil_id!=3);
            break;
        case 4 :
            do{
                menu_sorting();
                scanf("%d",&pil_dm);
                if(pil_dm==1){
                    sort_dm(mlbb);
                }
                else if(pil_dm==2){
                    sort_dm_des(mlbb);
                }
                else if(pil_dm>3){
                    printf("\n\n\t--->>mohon maaf hanya terdapat 3 menu pilihan, silahkan masukan pilihan lagi<<---\n");
                }
                system("PAUSE");
            }while(pil_dm!=3);
            break;
        case 5 :
            system("cls");
            output_nota(mlbb);
//            printf("\t\t>>>NOTA HASIL PENJUALAN DIAMOND GAME ONLINE<<<\n\n\n");
//            printf("1. Total Pembeli\t\t\t\t= %d \n\n",y);
//            printf("2. Total penjualan Diamond\t\t\t= %d \n\n",output_total(mlbb,y-1,0));
//            printf("3. Total pemasukan penjualan Diamond\t\t= Rp. %d \n\n",output_total_duit(mlbb,y-1,0));
            system("PAUSE");
            break;
        case 6 :
            system("cls");
            printf("\n\n");
            Thanks(mlbb);
            exit(0);
            break;
        default :
            printf("INPUTNYA SALAH GAN, ULANGI LAGI DENGAN BENAR YA");
            break;
        }
    }while(pil != 6);

    return 0;
}
