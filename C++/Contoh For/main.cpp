#include <iostream>

using namespace std;

int main()
{
    int ket, bil1, bil2, a;
    cout << "Daftar Pilihan"<<endl;
    cout<< "1) Genap "<<endl;
    cout<< "2) Ganjil"<<endl;
    cout<< "Pilih Salah Satu = ";
    cin>>ket;

    if (ket==1)
    {
        cout<<""<<endl;
        cout<<"Masukkan Bilangan Awal = ";
        cin>>bil1;

        if (bil1%2==0)
        {
            cout<<"Masukkan Bilangan Akhir = ";
            cin>>bil2;

            if (bil2%2==0)
            {
            for (a=bil1; bil2>=a; a+=2)
            cout<<a<<endl;
            return 0;
            }
            cout<< ""<<endl;
            cout<< "Bilangan Yang Dimasukkan Salah. -_-";
        }
        cout<< ""<<endl;
        cout<< "Bilangan Yang Dimasukkan Salah. -_-";



    }
    else if (ket==2)
    {
        cout<<""<<endl;
        cout<<"Masukkan Bilangan Awal = ";
        cin>>bil1;

        if (bil1%3==0)
        {
            cout<<"Masukkan Bilangan Akhir = ";
            cin>>bil2;

            if (bil2%2==1)
            {
            for (a=bil1; bil2>=a; a+=2)
            cout<<a<<endl;
            return 0;
            }
            cout<< "Bilangan Yang Dimasukkan Salah. -_-";
        }
        cout<< "Bilangan Yang Dimasukkan Salah. -_-";
    }
    cout<< ""<<endl;
    cout<< "Tidak Ada Dalam Daftar. -_-";

    return 0;
}
