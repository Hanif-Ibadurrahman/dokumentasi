#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

struct data
{
    int nim;
    char nama[30];
    float nilai;
};

int main()
{

    int i, n;
    cout<<endl;
    cout<< "                        ======================================================"<<endl;
    cout<< "                           >>>>>>>>>> POLITEKNIK NEGERI JAKARTA <<<<<<<<<<"<<endl;
    cout<< "                        ======================================================"<<endl<<endl;
    cout<< "                                      DATA MAHASISWA POLITEKNIK"<<endl<<endl;
ulang :
    struct data mahasiswa[30];

    cout<<endl;
    cout<< " Data Yang Ingin Dimasukkan = ";
    cin>>n;
    cout<<endl;

    for (i=1; i<=n; i++)
    {
        cout<<" DATA MAHASISWA Ke-"<<i<<endl;
        cout<<"  NAMA   = ";
        cin>>mahasiswa[i].nama;
        cout<<"  NIM    = ";
        cin>>mahasiswa[i].nim;
        cout<<"  NILAI  = ";
        cin>>mahasiswa[i].nilai;
        cout<<endl;
    };

system("color 3E");
    cout<< "=================="<<endl;
    cout<< " Hasil Input DATA"<<endl;
    cout<< "=================="<<endl;

    cout<< "================================="<<endl;
    cout<< "|  NIM  |      NAMA     | NILAI |"<<endl;
    cout<< "================================="<<endl;
    for (i=1; i<=n; i++)
    {
        cout<<"=   "<<mahasiswa[i].nim<<"  =     "<<mahasiswa[i].nama<<"      =  "<<mahasiswa[i].nilai<<"  =";
        cout<<endl;
    };
    cout<< "================================="<<endl;

char lagi;
	cout<<endl<<endl;
    cout<<"  Pilih Salah Satu : "<<endl;
    cout<<"  Ingin Melakukan Perkalian Matrik Lagi? (Y/N) : ";
    cin>>lagi;
    if (lagi=='Y'||lagi=='y')
    	goto ulang;
    else if (lagi=='N'||lagi=='n')
		cout<<endl;
		cout<< ">>>>>>>>>> TERIMA KASIH <<<<<<<<<<"<<endl;
		cout<< "         SELAMAT  TINGGAL";
    return 0;
}
