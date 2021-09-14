#include <iostream>

using namespace std;

int main()
{
    int kode;
    cout << "Masukkan Nilai = ";
    cin>>kode;

    switch (kode)
    {
    case 81 ... 100:
        cout<< "Konversi Nilai = A";
        break;
    case 66 ... 80:
        cout<< "Konversi Nilai = B";
        break;
    case 56 ... 65:
        cout<< "Konversi Nilai = C";
        break;
    case 41 ... 55:
        cout<< "Konversi Nilai = D";
        break;
    case 0 ... 40:
        cout<< "Konversi Nilai = E";
        break;
    default:
        cout<< "Nilai Yang Dimasukkan Salah";
    }
    return 0;
}
