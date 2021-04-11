#include "pustaka.h"

int Sisa(int A,int maks)
{
    if(A<1){
        return maks;
    }
    else
        return -1+Sisa(A-1,maks);

}

void IsiData(int A)
{
    int i;
    i=0;
    while(i<A)
    {
        printf("\nInput Loker ke [%d] ",i+1);
        printf("\nNo. Ktp: ");fflush(stdin);
        gets(masy[i].ktp);

        printf("\nInput Data Nama ke [%d] ",i+1);
        printf("\nNama Depan\t: ");fflush(stdin);
        gets(masy[i].masy.namadepan);
        printf("\nNama Belakang\t: ");fflush(stdin);
        gets(masy[i].masy.namabelakang);
        printf("\nLama Pinjam(hari): ");
        scanf("%d",&masy[i].lahir.tgl.lama);

        printf("\nInput Tempat Tgl Lahir ke [%d] ",i+1);
        printf("\nTempat\t\t: ");fflush(stdin);
        gets(masy[i].lahir.tempat);
        printf("Tanggal\t\t: ");
        scanf("%d",&masy[i].lahir.tgl.tanggal);
        printf("Bulan\t\t: ");fflush(stdin);
        gets(masy[i].lahir.tgl.bulan);
        printf("Tahun\t\t: ");
        scanf("%d",&masy[i].lahir.tgl.tahun);

        printf("\nInput Alamat ke [%d] ",i+1);
        printf("\nJalan\t\t: ");fflush(stdin);
        gets(masy[i].almtmasy.jalan);
        printf("No Jalan\t: ");fflush(stdin);
        gets(masy[i].almtmasy.nojln);
        printf("RT\t\t: ");
        scanf("%d",&masy[i].almtmasy.rt);
        printf("RW\t\t: ");
        scanf("%d",&masy[i].almtmasy.rw);
        printf("Desa\t\t: ");fflush(stdin);
        gets(masy[i].almtmasy.desa);
        printf("Kode Pos\t: ");
        scanf("%d",&masy[i].almtmasy.kodepos);
        printf("Kecamatan\t: ");fflush(stdin);
        gets(masy[i].almtmasy.kecamatan);

        printf("\nInput No Hp ke [%d] ",i+1);
        printf("\nNo Hp\t\t: +62");fflush(stdin);
        gets(masy[i].nohp);

        printf("\n*************************************\n");
    i=i+1;
    }
}

void bacadata(int A)
{
    int i;
    i=0;
    while(i<A)
    {
        printf("\nData Loker Bank Lian ke [%d] ",i+1);
        printf("\nNo. Ktp\t\t: %s ",masy[i].ktp);
        printf("\nNama Depan\t: %s",masy[i].masy.namadepan);
        printf("\nNama Belakang\t: %s",masy[i].masy.namabelakang);
        printf("\nLama Pinjam\t: %d",masy[i].lahir.tgl.lama);
        printf("\nNama Lengkap\t: %s %s",masy[i].masy.namadepan,masy[i].masy.namabelakang);
        printf("\nTTL\t\t: %s, %d %s %d ",masy[i].lahir.tempat,masy[i].lahir.tgl.tanggal,masy[i].lahir.tgl.bulan,masy[i].lahir.tgl.tahun);
        printf("\nAlamat\t\t: Jl %s , No %s ",masy[i].almtmasy.jalan,masy[i].almtmasy.nojln);
        printf("\n\t\t  Desa %s, RT %d - RW %d ",masy[i].almtmasy.desa,masy[i].almtmasy.rt,masy[i].almtmasy.rw);
        printf("\n\t\t  Kecamatan %s %d ",masy[i].almtmasy.kecamatan,masy[i].almtmasy.kodepos);
        printf("\nNo Hp\t\t: +62%s",masy[i].nohp);
        printf("\n*************************************\n");
    i=i+1;
    }
}

void SortingNamaAsc(int A)
{
    int i,j,minim;
    struct data temp;

    for(i=0;i<A;i++)
    {
        minim = i;
        for(j=i;j<A;j++)
        {
            if(strcmp(masy[i].masy.namadepan,masy[j].masy.namadepan)>0)
            {
                temp = masy[i];
                masy[i] = masy[j];
                masy[j] = temp;
            }
        }
    }
}

void SortingNamaDesc(int A)
{
    int i,j,minim;
    struct data temp;

    for(i=0;i<A;i++)
    {
        minim = i;
        for(j=i;j<A;j++)
        {
            if(strcmp(masy[i].masy.namadepan,masy[j].masy.namadepan)<0)
            {
                temp = masy[i];
                masy[i] = masy[j];
                masy[j] = temp;
            }
        }
    }
}

void Search(int *cari,int A)
{
    int i;
    for(i=0;i<A;i++)
    {
        if(masy[i].lahir.tgl.lama==*cari)
        {
            printf("\nKetemu\t: ");
            printf("\nKTP\t\t: %s ",masy[i].ktp);
            printf("\nNama Depan\t: %s",masy[i].masy.namadepan);
            printf("\nNama Belakang\t: %s",masy[i].masy.namabelakang);
            printf("\nNama Lengkap\t: %s %s",masy[i].masy.namadepan,masy[i].masy.namabelakang);
            printf("\nLama Pinjam(hari): %d",masy[i].lahir.tgl.lama);
            printf("\nTTL\t\t: %s, %d %s %d ",masy[i].lahir.tempat,masy[i].lahir.tgl.tanggal,masy[i].lahir.tgl.bulan,masy[i].lahir.tgl.tahun);
            printf("\nAlamat\t\t: Jl %s , No %s ",masy[i].almtmasy.jalan,masy[i].almtmasy.nojln);
            printf("\n\t\t  Desa %s, RT %d - RW %d ",masy[i].almtmasy.desa,masy[i].almtmasy.rt,masy[i].almtmasy.rw);
            printf("\n\t\t  Kecamatan %s %d ",masy[i].almtmasy.kecamatan,masy[i].almtmasy.kodepos);
            printf("\nNo Hp\t\t: +62%s",masy[i].nohp);
        }
    }
}
