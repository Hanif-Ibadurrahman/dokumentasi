#include <iostream>
#include <cstring>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

int keluaran(char *dosen)
{
    system("color 5E");
    strupr(dosen);
    if (strcmp(dosen, "ANITA") == 0)
        {
            cout<< "NAMA LENGKAP DOSEN  : ANITA HIDAYATI" << endl;
            cout<< "MATA KULIAH         : ALGORITMA & PEMROGRAMAN"<<endl;
        }
    else if (strcmp(dosen, "MAULDY") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : MAULDY LAYA" << endl;
            cout << "MATA KULIAH        : SISTEM OPERASI" << endl;
        }
    else if (strcmp(dosen, "FITRIA") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : FITRIA NUGRAHANI" << endl;
            cout << "MATA KULIAH        : PENDIDIKAN KEWARGANEGARAAN" << endl;
        }
    else if (strcmp(dosen, "RISNA") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : RISNA SARI" << endl;
            cout << "MATA KULIAH        : PENGANTAR TIK" << endl;
        }
    else if (strcmp(dosen, "ERIYA") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : ERIYA" << endl;
            cout << "MATA KULIAH        : PENGANTAR MULTIMEDIA" << endl;
        }
    else if (strcmp(dosen, "AZIZ") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : ABDUL AZIZ" << endl;
            cout << "MATA KULIAH        : PENGANTAR JARINGAN KOMPUTER" << endl;
        }
    else if (strcmp(dosen, "DEWI") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : DEWI KURNIAWATI" << endl;
            cout << "MATA KULIAH        : BAHASA INGGRIS UNTUK TIK 1" << endl;
        }
    else if (strcmp(dosen, "RINA") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : RINA SEPTIRIANA" << endl;
            cout << "MATA KULIAH        : MATEMATIKA DISKRIT" << endl;
        }
    else if (strcmp(dosen, "YUSUP") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : MUHAMAD YUSUP" << endl;
            cout << "MATA KULIAH        : PENDIDIKAN AGAMA DALAM TIK" << endl;
        }
    else
        {
            cout << "NAMA DOSEN TIDAK TERDAFTAR " << endl;
            cout << "  PADA PROGRAM STUDY TMJ" << endl;
        }
}

int keluaran1(char *matakuliah)
{
    if (strcmp(matakuliah, "algoritma") == 0)
        {
            cout<< "NAMA LENGKAP DOSEN  : ANITA HIDAYATI" << endl;
            cout<< "MATA KULIAH         : ALGORITMA & PEMROGRAMAN"<<endl;
        }
    else if (strcmp(matakuliah, "os") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : MAULDY LAYA" << endl;
            cout << "MATA KULIAH        : SISTEM OPERASI" << endl;
        }
    else if (strcmp(matakuliah, "pkn") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : FITRIA NUGRAHANI" << endl;
            cout << "MATA KULIAH        : PENDIDIKAN KEWARGANEGARAAN" << endl;
        }
    else if (strcmp(matakuliah, "tik") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : RISNA SARI" << endl;
            cout << "MATA KULIAH        : PENGANTAR TIK" << endl;
        }
    else if (strcmp(matakuliah, "multimedia") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : ERIYA" << endl;
            cout << "MATA KULIAH        : PENGANTAR MULTIMEDIA" << endl;
        }
    else if (strcmp(matakuliah, "jaringan") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : ABDUL AZIZ" << endl;
            cout << "MATA KULIAH        : PENGANTAR JARINGAN KOMPUTER" << endl;
        }
    else if (strcmp(matakuliah, "inggris") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : DEWI KURNIAWATI" << endl;
            cout << "MATA KULIAH        : BAHASA INGGRIS UNTUK TIK 1" << endl;
        }
    else if (strcmp(matakuliah, "matematika") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : RINA SEPTIRIANA" << endl;
            cout << "MATA KULIAH        : MATEMATIKA DISKRIT" << endl;
        }
    else if (strcmp(matakuliah, "agama") == 0)
        {
            cout << "NAMA LENGKAP DOSEN : MUHAMAD YUSUP" << endl;
            cout << "MATA KULIAH        : PENDIDIKAN AGAMA DALAM TIK" << endl;
        }
    else
        {
            cout << "NAMA MATA KULIAH TIDAK TERDAFTAR " << endl;
            cout << "     PADA PROGRAM STUDY TMJ" << endl;
        }
}

struct masukkan
{
    char dosen[30], matakuliah[30];
};

void nama (int nim)
{
    if (nim==16)
    {
        cout<<"NAMA = HANIF IBADURRAHMAN"<<endl<<endl;
        cout<<">>>>>> SELAMAT DATANG <<<<<<"<<endl;
    }
    else
    {
    cout<<endl;
    cout<< ">>>>>> SELAMAT DATANG <<<<<<"<<endl;
    }
}

int lakukan(int a)
{
    cout<< "                        ======================================================"<<endl;
    cout<< "                           >>>>>>>>>> POLITEKNIK NEGERI JAKARTA <<<<<<<<<<"<<endl;
    cout<< "                        ======================================================"<<endl<<endl;
    cout<< "                                  MENCARI NAMA LENGKAP DOSEN DENGAN"<<endl;
    cout<< "                                    NAMA PENDEKNYA / MATA KULIAH"<<endl;
ulang:
int nim;
    struct masukkan data;
    cout<<endl;
    cout<< "NIM     : ";
    cin>>nim;

    nama(nim);

    int pilih;
    cout<<endl;
    cout<< "PILIH OPTION YANG DIKETAHUI"<<endl;
    cout<< "1) NAMA PENDEK DOSEN"<<endl;
    cout<< "2) MATA KULIAH-NYA"<<endl;
    cout<< "MASUKKAN PILIHAN : ";
    cin>>pilih;

    if (pilih==1)
    {
        cout<<endl;
        cout<< "MASUKKAN NAMA DOSEN : ";
        cin>>data.dosen;
        keluaran(data.dosen);
    }
    else
    {
        cout<<endl;
        cout<< "MASUKKAN MATA KULIAH DOSEN :";
        cin>>data.matakuliah;
        keluaran1(data.matakuliah);
    }

 int ket;
    cout<<endl;
    cout<< "Apa Ingin Mencoba Lagi?"<<endl;
    cout<< "1) IYA"<<endl;
    cout<< "2) TIDAK"<<endl;
    cout<< "Pilih Salah Satu : ";
    cin>>ket;
    if (ket==1)
        goto ulang;
    else
    cout<<endl;
    cout<< ">>>>>>>>>> TERIMA KASIH <<<<<<<<<<"<<endl;
    cout<< "         SELAMAT  TINGGAL";
    return 0;
}

int main()
{
    int a;
    lakukan(a);
}
