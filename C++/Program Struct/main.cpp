#include <iostream>
#include <cstring>
using namespace std;

struct data
{
    int nim;
    char nama[30], bulan[10];
    int hari, tahun;
};

int main()
{
    struct data mahasiswa;
    strcpy(mahasiswa.nama, "HANIF IBADURRAHMAN");
    mahasiswa.nim = 4616030016;
    mahasiswa.hari = 29;
    strcpy(mahasiswa.bulan, "MEI");
    mahasiswa.tahun = 1998;

    cout << "NIM            : " << mahasiswa.nim << endl;
    cout << "NAMA           : " << mahasiswa.nama << endl;
    cout << "TANGGAL LAHIR  : " <<mahasiswa.hari<<" "<<mahasiswa.bulan<<" "<<mahasiswa.tahun;

    return 0;
}
