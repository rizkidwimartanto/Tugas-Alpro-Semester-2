#include "header.h"

void judul()
{
    puts("======================================================");
    puts("        Sistem Aplikasi Pasien Rumah Sakit ");
    puts("======================================================");
    puts("Menu :(1) Tampil          ");
    puts("      (2) Input pasien    ");
    puts("      (3) Hapus           ");
    puts("      (4) Urutkan         ");
    puts("      (5) Pencarian       ");
    puts("      (0) Keluar          ");

}


void judul_aksi(char isi[50])
{
    system("cls");  // menghapus atau membersihkan layar.
    puts("======================================================");
    printf("\t%s\n",isi);
    puts("======================================================");
}

void pesan(char msg[100])
{
    printf("\n[ %s ]\n",msg);
}

char pilih_menu()
{
    char pilih;
    printf("Pilih menu : ");
    scanf("%c",&pilih);
    return pilih;
}

void pause()
{
    printf("\n\nTekan ENTER untuk lanjut..\n");
    fflush(stdin);
    char a = getchar();
    fflush(stdin);
    system("cls");
}

void swaping_float(float *a, float *b)
{
    float temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}

void swaping_integer(int *a, int *b)
{
    int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}

void tampil(int index, pasien l[])
{
    judul_aksi("Aksi : Tampil Data");
    if(index==0)
    {
        pesan("Data masih kosong.");
    }
	else
	{
        tampil_rekursif(index-1,l);
    }
}

void tampil_rekursif(int index, pasien l[]){
    int i;
    i=index;
    if(i<0)
	{

	}
	else
	{
		tampil_rekursif(i-1,l);
		printf("[No. %d] ",i+1);
		print_status_bayar(l[i].status_bayar);
		printf(" - %s\n",l[i].nama);
		puts("------------------------------------------------------");

		if(l[i].jenis == 1)
		{
			printf(" Jenis : VIP\n");
		}
		else if(l[i].jenis == 2)
		{
			printf(" Jenis : Biasa\n");
		}
		else
		{
			printf(" Jenis : Tidak ada\n");
		}

		printf(" Tgl. Datang : %d/%d/%d\n",l[i].tgl_datang.tanggal,l[i].tgl_datang.bulan,l[i].tgl_datang.tahun);
		puts("------------------------------------------------------\n");
	}
}

void tampil_detail(int index, pasien l[])
{
	int i=index;

	printf("[No. %d] ",i+1);
	print_status_bayar(l[i].status_bayar);
	printf(" - %s\n",l[i].nama);
	puts("------------------------------------------------------");
	if(l[i].jenis == 1)
	{
		printf(" Jenis : VIP\n");
	}
	else if(l[i].jenis == 2)
	{
		printf(" Jenis : Biasa\n");
	}
	else
	{
		printf(" Jenis : Tidak ada\n");
	}
	printf(" Tgl. Datang : %d/%d/%d\n",l[i].tgl_datang.tanggal,l[i].tgl_datang.bulan,l[i].tgl_datang.tahun);
	puts(""); puts("------------------------------------------------------\n");
}

void tambah(int index, pasien l[])
 {

	char bayar;

    judul_aksi("Aksi : Tambah Data");
    printf("Index Ke-[%d]\n",index);
    puts("-----------------------------------------------------");
    printf("Jenis Ruang Rawat  : (1) VIP\n");
    printf("                   :     Rp. 500.000 1 hari\n");
    printf("                   : (2) Biasa\n");
    printf("                   :     Rp. 250.000 1 hari\n");

    printf("Pilih Jenis    : ");
    scanf("%d",&l[index].jenis);

        if(l[index].jenis==1 || l[index].jenis==2)
        {
            fflush(stdin);
            printf("Nama           : ");
            gets(l[index].nama);
            fflush(stdin);

            printf("Tanggal Datang (format : dd/mm/yy)\n");
            printf("Masukan tanggal: ");
            scanf("%d/%d/%d",&l[index].tgl_datang.tanggal,&l[index].tgl_datang.bulan,&l[index].tgl_datang.tahun);
            puts("");

            fflush(stdin);
            printf("Bayar lunas sekarang? (y/n)");
            scanf("%c",&bayar);
            if(bayar=='y' || bayar=='Y')
            {
                l[index].status_bayar=1;
            }
            else
            {
                l[index].status_bayar=0;
            }

            fflush(stdin);
            pesan("SUCCESS : Data berhasil ditambah.");
            index_global++;
        }
        else
        {
            pesan("ERROR : Pilihan tidak ada dimenu jenis.");
        }
}

void hapus(int index, pasien l[])
{
    int pilih=0;
    int batas=index_global;

    judul_aksi("Aksi : Hapus Data");

        if(index==0)
        {
            pesan("Data masih kosong.");
        }
        else
        {
            tampil_rekursif(index-1,l);
        }
        printf("\nMasukan no. data yang ingin dihapus = ");
        scanf("%d",&pilih);

        if(pilih==batas)
        {
            pesan("ERROR : Pilihan tidak boleh kurang dari 0 dan melebihi batas");
        }
        else
        {
            ordering_hapus(index,pilih,l);
            pesan("SUCCESS : Data berhasil dihapus.");
            index_global--;
        }
}

void ordering_hapus(int index, int pilih, pasien l[])
{
    int i,batas;

    batas=index_global;
    pilih = pilih-1;
        for(i=pilih; i<batas; i++)
        {
            swaping_integer(&l[i].jenis,&l[i+1].jenis);
            swaping_integer(&l[i].harga,&l[i+1].harga);


            fflush(stdin);
            strcpy(l[i].nama,l[i+1].nama);
            fflush(stdin);

            swaping_integer(&l[i].tgl_datang.tanggal,&l[i+1].tgl_datang.tanggal);
            swaping_integer(&l[i].tgl_datang.bulan,&l[i+1].tgl_datang.bulan);
            swaping_integer(&l[i].tgl_datang.tahun,&l[i+1].tgl_datang.tahun);

            swaping_integer(&l[i].status_bayar,&l[i+1].status_bayar);

        }
}


void print_status_bayar(int status)
{
    if(status==1)
    {
        printf("[LUNAS]");
    }
    else
    {
        printf("[BELUM LUNAS]");
    }
}


void cari(int index, pasien l[])
{
	int i,ulang=0;
    char pilih;
    fflush(stdin);

    for(i=0; !ulang; i++)
	{
        judul_aksi("Aksi : Pencarian Data");
        puts("Cari berdasarkan :(1) Nama Pasien  ");
        puts("                 :(2) Tanggal         ");
        puts("                 :(0) Kembali");

        pilih = pilih_menu();
        if(pilih=='0')
		{
            ulang=1;
        }
		else if(pilih=='1')
		{
            cari_by_nama(index_global,l);
            pause();
        }
		else if(pilih=='2')
		{
            cari_by_tanggal(index_global,l);
            pause();
        }
		else
		{
            pesan("ERROR : Pilihan tidak ada dimenu pencarian.");
            pause();
        }
    }
}

void cari_by_nama(int index, pasien l[])
{
    char nama[50];
    fflush(stdin);

    judul_aksi("Aksi : Cari by nama pasien");
    printf("Masukan nama pasien :"); gets(nama);
    fflush(stdin);
    puts("");

	int i,count=0;
	for(i=0;i<index_global;i++)
	{
        if(strcmp(nama,l[i].nama)==0)
		{
            tampil_detail(i,l);
            count++;
        }
    }


    if(count==0)
	{
        pesan("Data tidak ditemukan.");
    }

}

void cari_by_tanggal(int index, pasien l[])
{
    int tanggal;

    judul_aksi("Aksi : Cari by tanggal datang");
    printf("Masukan tanggal datang :"); scanf("%d",&tanggal);
    puts("");
    int i,count=0;

	for(i=0;i<index_global;i++)
	{
        if(tanggal==l[i].tgl_datang.tanggal)
		{
            tampil_detail(i,l);
            count++;
        }
    }

    if(count==0)
	{
        pesan("Data tidak ditemukan.");
    }
}

void urut(int index, pasien l[])
{

	int i,ulang=0;
    char pilih;
    fflush(stdin);

    for(i=0; !ulang; i++)
	{
        judul_aksi("Aksi : Pengurutan Data");
        puts("Urut berdasarkan :(1) Tgl Datang  ");

        puts("                 :(0) Kembali");

        pilih = pilih_menu();
        if(pilih=='0')
		{
            ulang=1;
        }
		else if(pilih=='1')
		{
            urut_tgl_datang(index_global,l);
            pause();
        }
		else
		{
            pesan("ERROR : Pilihan tidak ada dimenu pengurutan.");
            pause();
        }
    }
}

void urut_tgl_datang(int index, pasien l[])
{
    int i,j,idx;
    int batas = index_global;
    int num1=0,num2=0;

    for(i=0;i<batas;i++)
	{
        idx = i;
        for(j=i;j<batas;j++)
		{ konversi_tgl_to_num(l[idx].tgl_datang.tanggal,l[idx].tgl_datang.bulan,l[idx].tgl_datang.tahun,&num1);
		  konversi_tgl_to_num(l[j].tgl_datang.tanggal,l[j].tgl_datang.bulan,l[j].tgl_datang.tahun,&num2);

			if(num1>num2)
			{
                idx=j;
            }
        }

        swaping_integer(&l[i].jenis,&l[idx].jenis);
        swaping_integer(&l[i].harga,&l[idx].harga);

        fflush(stdin);
        strcpy(l[i].nama,l[idx].nama);

        fflush(stdin);

        swaping_integer(&l[i].tgl_datang.tanggal,&l[idx].tgl_datang.tanggal);
        swaping_integer(&l[i].tgl_datang.bulan,&l[idx].tgl_datang.bulan);
        swaping_integer(&l[i].tgl_datang.tahun,&l[idx].tgl_datang.tahun);


	}

        pesan("SUCCESS : Data berhasil diurutkan.");
}


void konversi_tgl_to_num(int tgl, int bln, int thn, int *hasil)
{
    *hasil = (tgl*25)+(bln*720)+(thn*8640);
}

