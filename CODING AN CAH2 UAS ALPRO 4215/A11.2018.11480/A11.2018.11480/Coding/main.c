#include"pustaka.h"

int main()
{
    char nama[30];
    int kode;
    pilih_beli arr_model[255];
    int i = 0;
    int done = 0;
    int sdh = 0;
    int Itr = 1;
    int jml_barang = 0;
    int kembalian;
    int pilih_menu;
    int pilih_sistmKasr;
    int pilih_Mjeans;
    char pilih_jens;
    char pilih_kmj;
    char pilih_ks;
    int pilih_Mkemeja;
    int pilih_Mkaos;
    int sum = 0;
    int price;
    int uang;
    int jml_jins=0;
    int jml_kemeja=0;
    int jml_kaos=0;

    awal: ///goto
    cls();
    entr();
    menu_awal(&pilih_menu);
    switch(pilih_menu)
    {
        case 1:
            cls();
            fflush(stdin);
            input_dataKasir(&nama,&kode);
            done = 1;
            goto awal;
            break;
        case 2:
            cls();
            if(done == 1)
            {
                awal_ksr: ///goto
                sistem_kasir(&pilih_sistmKasr);
                cls();
                if(pilih_sistmKasr == 1)
                {
                    fflush(stdin);
                    Mjeans: ///goto
                    menu_Jeans(&pilih_Mjeans);
                    cls();
                    if(pilih_Mjeans == 1)
                    {
                        menu_Nevada(&price,arr_model,i);
                        sdh = 1;
                        i++;
                        sum += price;
                        jml_jins+=1;
                        entr();
                        fflush(stdin);
                        printf("Ingin Memilih Jeans Lagi/check out(Menampilkan Struk)? (Y/T/C)");
                        scanf("%c",&pilih_jens);
                        if(pilih_jens == 'Y' || pilih_jens == 'y')
                        {
                            cls();
                            goto Mjeans;
                        }
                        else if(pilih_jens == 'T' || pilih_jens == 't')
                        {
                            cls();
                            goto awal_ksr;
                        }
                        else
                        {
                            cls();
                            goto awal;
                        }

                    }
                    else
                    {
                        menu_Emba(&price,arr_model,i);
                        sdh = 1;
                        i++;
                        sum +=price;
                        jml_jins+=1;
                        entr();
                        fflush(stdin);
                        printf("Ingin Memilih Jeans Lagi/check out(Menampilkan Struk)? (Y/T/C)");
                        scanf("%c",&pilih_jens);
                        if(pilih_jens == 'Y' || pilih_jens == 'y')
                        {
                            cls();
                            goto Mjeans;
                        }
                        else if(pilih_jens == 'T' || pilih_jens == 't')
                        {
                            cls();
                            goto awal_ksr;
                        }
                        else
                        {
                            cls();
                            goto awal;
                        }
                    }
                }
                else if(pilih_sistmKasr == 2)
                {
                    Mkemeja: ///goto
                    menu_Kemeja(&pilih_Mkemeja);
                    cls();
                    if(pilih_Mkemeja == 1)
                    {
                        fflush(stdin);
                        menu_Giordano(&price,arr_model,i);
                        sdh = 1;
                        i++;
                        sum += price;
                        jml_kemeja+=1;
                        entr();
                        fflush(stdin);
                        printf("Ingin Memilih Kemeja Lagi/check out(Menampilkan Struk)? (Y/T/C)");
                        scanf("%c",&pilih_kmj);
                        if(pilih_kmj == 'Y' || pilih_kmj =='y')
                        {
                            cls();
                            goto Mkemeja;
                        }
                        else if(pilih_kmj == 'T' || pilih_kmj == 't')
                        {
                            cls();
                            goto awal_ksr;
                        }
                        else
                        {
                            cls();
                            goto awal;
                        }
                    }
                    else
                    {
                        menu_Theexecutive(&price,arr_model,i);
                        sdh = 1;
                        i++;
                        sum += price;
                        jml_kemeja+=1;
                        entr();
                        fflush(stdin);
                        printf("Ingin Memilih Kemeja Lagi/check out(Menampilkan Struk)? (Y/T/C)");
                        scanf("%c",&pilih_kmj);
                        if(pilih_kmj == 'Y' || pilih_kmj == 'y')
                        {
                            cls();
                            goto Mkemeja;
                        }
                        else if(pilih_kmj == 'T' || pilih_kmj == 't')
                        {
                            cls();
                            goto awal_ksr;
                        }
                        else
                        {
                            cls();
                            goto awal;
                        }
                    }
                }
                else
                {
                    Mkaos:
                    menu_Kaos(&pilih_Mkaos);
                    cls();
                    if(pilih_Mkaos == 1)
                    {
                        menu_3Second(&price,arr_model,i);
                        sdh = 1;
                        i++;
                        sum +=price;
                        jml_kaos+=1;
                        fflush(stdin);
                        printf("Ingin Memilih Kaos Lagi/check out(Menampilkan Struk)? (Y/T/C)");
                        scanf("%c",&pilih_ks);
                        if(pilih_ks == 'Y' || pilih_ks == 'y')
                        {
                            cls();
                            goto Mkaos;
                        }
                        else if(pilih_ks == 'T' || pilih_ks == 't')
                        {
                            cls();
                            goto awal_ksr;
                        }
                        else
                        {
                            cls();
                            goto awal;
                        }
                    }
                    else
                    {
                        menu_Greenlight(&price,arr_model,i);
                        sdh = 1;
                        i++;
                        sum += price;
                        jml_kaos+=1;
                        fflush(stdin);
                        printf("Ingin Memilih Kaos Lagi/check out(Menampilkan Struk)? (Y/T/C)");
                        scanf("%c",&pilih_ks);
                        if(pilih_ks == 'Y' || pilih_ks == 'y')
                        {
                            cls();
                            goto Mkaos;
                        }
                        else if(pilih_ks == 'T' || pilih_ks == 't')
                        {
                            cls();
                            goto awal_ksr;
                        }
                        else
                        {
                            cls();
                            goto awal;
                        }
                    }
                }
            }
            else
            {
                printf("Silahkan Masukkan Data Karyawan Terlebih Dahulu\n");
                getch();
                goto awal;
            }
            goto awal;
            break;
        case 3:
            if(sdh == 1)
            {
                int a;
                int jmlBrg;
                a=rekursif_jmlBrg(jml_jins,jml_kaos);
                jmlBrg = rekursif_jmlBrg(a,jml_kemeja);
                system("cls");
                printf("Total Harga\t\t: %d\n",sum);
                printf("Uang Yang Dibayarkan\t\t: ");
                scanf("%d",&uang);
                kembalian = uang - sum;
                cls();
                sorting(arr_model,i);
                fflush(stdin);
                printf("Karyawan Kasir\t\t: %s\n",nama);
                printf("Kode Karyawan\t\t: %d\n",kode);
                entr();
                entr();
                printf("Pembelian\t\t: \n");
                while(Itr <=i)
                {
                    printf("%s\n",arr_model[Itr].jenis);
                    printf("Harga\t\t: %d\n",arr_model[Itr].harga);
                    printf("Size\t\t: %s\n",arr_model[Itr].ukuran);
                    entr();
                    Itr++;
                }
                printf("Jumlah Barang\t\t\t: %d\n",jmlBrg);
                temp_str();
                printf("\t\t\t\tTotal Harga\t\t: %d\n",sum);
                printf("\t\t\t\tUang Dibayarkan\t\t: %d\n",uang);
                printf("\t\t\t\tKembalian\t\t: %d\n",kembalian);
            }
            else
            {
                cls();
                printf("Silahkan Pilih Barang Terlebih Dahulu");
                getch();
                goto awal;
            }
            break;
        case 4:
            exit(1);
            break;
    }
    return 0;
}
