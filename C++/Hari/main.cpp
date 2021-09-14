#include <iostream>

using namespace std;

int main()
{
    int kode;
    cout << "Masukkan Kode Hari = ";
    cin>>kode;

    switch (kode)
    {
    case 0:
        cout<< "Hari Minggu";
        break;
    case 1:
        cout<< "Hari Senin";
        break;
    case 2:
        cout<< "Hari Selasa";
        break;
    case 3:
        cout<< "Hari Rabu";
        break;
    case 4:
        cout<< "Hari Kamis";
        break;
    case 5:
        cout<< "Hari Jum'at";
        break;
    case 6:
        cout<< "Hari Sabtu";
        break;
    default:
        cout<< "Bukan Hari";
    }
    return 0;
}
