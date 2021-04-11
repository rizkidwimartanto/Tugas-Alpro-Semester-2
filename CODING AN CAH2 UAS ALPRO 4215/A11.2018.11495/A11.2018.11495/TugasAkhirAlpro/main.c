#include "header.h"

int main()
{
    index_global=0;

    int i,ulang=0;
    char pilih;
    pasien l[50];

    for(i=0; !ulang; i++)
	{
        judul();
        pilih = pilih_menu();
        if(pilih=='0')
		{
            ulang=1;
        }
		else if(pilih=='1')
		{
            tampil(index_global,l);
            pause();
        }
		else if(pilih=='2')
		{
            tambah(index_global,l);
            pause();
        }
		else if(pilih=='3')
		{
            hapus(index_global,l);
            pause();
        }
		else if(pilih=='4')
		{
            urut(index_global,l);
            pause();
        }
		else if(pilih=='5')
		{
            cari(index_global,l);
            pause();
        }
		else
		{
            pesan("ERROR : Pilihan tidak ada dimenu.");
            pause();
        }
    }
    return 0;
}
