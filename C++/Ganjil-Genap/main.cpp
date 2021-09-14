#include <iostream>

using namespace std;

int main()
{
    int bil1, bil2, ket1, ket2;

    {
        cout<< "MENAMPILKAN BILANGAN GANJIL/GENAP DENGAN INTERVAL YANG DIINGINKAN"<<endl<<endl;
        cout<< "Masukkan Bilangan Awal = ";
        cin>>bil1;
        cout<< "Masukkan Bilangan Akhir = ";
        cin>>bil2;
        cout<< ""<<endl<<endl;
        cout<< "Daftar List Pilihan :"<<endl;
        cout<< "1) Genap"<<endl;
        cout<< "2) Ganjil"<<endl;
        cout<< "Pilih Salah Satu = ";
        cin>>ket1;
        if (ket1==1)
        {
            if (bil1%2==0)
            {
                for (bil1; bil1<=bil2; bil1+=2)
                    cout<<bil1<<endl;
            }
            bil1++;
            for (bil1; bil1<=bil2; bil1+=2)
                cout<<bil1<<endl;
        }
        else if (bil1%2==1)
        {
            for (bil1; bil1<=bil2; bil1+=2)
                cout<<bil1<<endl;
        }
        bil1++;
        for (bil1; bil1<=bil2; bil1+=2)
            cout<<bil1<<endl;
    cout<<endl;
    cout<< "Apa Ingin Mencoba lagi ?"<<endl;
    cout<< "1)IYA"<<endl;
    cout<< "2)TIDAK"<<endl;
    cout<< "Pilih Salah Satu = ";
    cin>>ket2;
    }while (ket2==1)
    {
        cout<<endl;
        cout<< "MENAMPILKAN BILANGAN GANJIL/GENAP DENGAN INTERVAL YANG DIINGINKAN"<<endl<<endl;
        cout<< "Masukkan Bilangan Awal = ";
        cin>>bil1;
        cout<< "Masukkan Bilangan Akhir = ";
        cin>>bil2;
        cout<< ""<<endl<<endl;
        cout<< "Daftar List Pilihan :"<<endl;
        cout<< "1) Genap"<<endl;
        cout<< "2) Ganjil"<<endl;
        cout<< "Pilih Salah Satu = ";
        cin>>ket1;
        if (ket1==1)
        {
            if (bil1%2==0)
            {
                for (bil1; bil1<=bil2; bil1+=2)
                    cout<<bil1<<endl;
            }
            bil1++;
            for (bil1; bil1<=bil2; bil1+=2)
                cout<<bil1<<endl;
        }
        else if (bil1%2==1)
        {
            for (bil1; bil1<=bil2; bil1+=2)
                cout<<bil1<<endl;
        }
        bil1++;
        for (bil1; bil1<=bil2; bil1+=2)
            cout<<bil1<<endl;
    cout<<endl;
    cout<< "Apa Ingin Mencoba lagi ?"<<endl;
    cout<< "1)IYA"<<endl;
    cout<< "2)TIDAK"<<endl;
    cout<< "Pilih Salah Satu = ";
    cin>>ket2;
    }
    cout<< ""<<endl;
    cout<< "SELAMAT TINGGAL. ^_^";

    return 0;
}
