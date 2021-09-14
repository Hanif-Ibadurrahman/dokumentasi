#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
lagi:
    int pilih;
    float a;
    char huruf = 'a';
    char huruf_besar = 'A';

    cout<< "Masukkan Nilai = ";
    cin>>a;

    int nilai, nilai1;
    nilai=(int) huruf;
    nilai1=(int) huruf_besar;
    cout<<nilai<<endl;
    cout<<nilai1<<endl;

    cout<< "Apa Ingin Coba Lagi"<<endl;
    cout<< "1) Iya"<<endl;
    cout<< "2) Tidak"<<endl;
    cout<< "Pilih Salah Satu : ";
    cin>>pilih;
    if (pilih==1)
        goto lagi;
    else
        cout<< "Selamat Tinggal";

    return 0;
}
