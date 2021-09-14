#include <iostream>

using namespace std;

int main()
{
    int n, i;
    float num, jum, bagi;

    cout<<"             NILAI RATA-RATA MAHASISWA "<<endl<<endl;
    cout<<"Masukkan Banyak Nilai Mahasiswa Yang Akan Dihitung : ";
    cin>>n;

    for(i=1; i<=n; i++)
        {
            cout<<endl<<"Nilai Mahasiswa Ke-"<<i<<" = ";
            cin>>num;
            jum=jum+num;
        }
    cout<<endl<<"Jumlah Nilai Mahasiswa = "<<jum<<endl<<endl;

    bagi=jum/n;
    cout<< "Nilai Rata-Rata Mahasiswa= "<<bagi<<endl;

    return 0;
}
