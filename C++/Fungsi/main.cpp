#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

float hitung_prisma_segitiga(float panjang, float lebar, float tinggi)
{
    float volume;
    volume = ((panjang*lebar)*tinggi);

    return volume;
}

float prisma_segitiga(float panjang, float lebar, float tinggi)
{
    float prisma;
    prisma = (panjang*lebar+panjang*tinggi+lebar*tinggi)*2;

    return prisma;
}

int main()
{
ulang:

    float volume, luas, panjang, lebar, tinggi, ket;


    cout<< "                >>>>>>>>>> Prisma Segiempat <<<<<<<<<<"<<endl<<endl;

    cout<< "1) Masukkan Panjang Prisma  : ";
    cin>>panjang;
    cout<< "2) Masukkan Lebar Prisma    : ";
    cin>>lebar;
    cout<< "3) Masukkan Tinggi Prisma   : ";
    cin>>tinggi;

    cout<<endl;
	volume = hitung_prisma_segitiga(panjang, lebar, tinggi);
    cout<< "Volume Prisma Segiempat = " <<volume<<endl;

    luas = prisma_segitiga(panjang, lebar, tinggi);
    cout<< "Luas Permukaan Prisma = "<<luas<<endl<<endl;

    cout<< "Apa Ingin Menghitung lagi ?"<<endl;
    cout<< "1) Iya"<<endl;
    cout<< "2) Tidak"<<endl;
    cout<< "Pilih Salah Satu = ";
    cin>>ket;

    if (ket==1)
    {
        goto ulang;
    }
    else
    {
        _exit(0);
    }

    getch();
}
