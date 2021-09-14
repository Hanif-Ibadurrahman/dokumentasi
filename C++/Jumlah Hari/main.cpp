#include <iostream>

using namespace std;

int main()
{
    int hari, bulan ,tahun;
    int jumlah_hari [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout<< "          MEMPROSES JUMLAH HARI"<<endl;
    cout<< "    PADA SUATU BULAN DAN SUATU TAHUN"<<endl;
    cout<< "    --------------------------------"<<endl;
    cout<< "Masukkan Bulan (1 ... 12) : ";
    cin>> bulan;
    cout<< "Masukkan Tahun : ";
    cin>>tahun;

    if (bulan==2)
    {
        if (tahun%4==0)
        {
            hari = 29;
        }
        else
            hari = 28;
    }
    hari=jumlah_hari[bulan-1];
    cout<< "Jumlah Hari Dalam Bulan "<<bulan<<", Pada Tahun "<<tahun<<", Adalah "<<hari;
    return 0;
}
