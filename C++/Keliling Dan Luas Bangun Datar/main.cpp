#include <iostream>

using namespace std;

int main()
{
    float ket, ket2, yes, luas, kel, a, t ,l, p, r, b, c, d;
lagi:
    cout<< ""<<endl;
    cout << "Daftar List Bangun Datar : "<<endl;
    cout << "1) Segitiga"<<endl;
    cout << "2) Persegi Panjang"<<endl;
    cout << "3) Lingkaran"<<endl;
    cout << "Pilih Salah Satu = ";
    cin>>ket;

    if (ket==1)
    {
        cout<< ""<<endl;
        cout << "Ingin Mencari : "<<endl;
        cout << "1) Luas"<<endl;
        cout << "2) Keliling"<<endl;
        cout << "Pilih Salah Satu = ";
        cin>>ket2;

        if (ket2==1)
        {
            cout<< ""<<endl;
            cout << "Masukkan Panjang Alas = ";
            cin>>a;
            cout << "Masukkan Tinggi Segitiga = ";
            cin>>t;

            cout<< ""<<endl;
            luas=(a*t)/2;
            cout << "Luas Segitiga = "<<luas<<endl;
        }
        else
        {
        cout<< ""<<endl;
        cout<< "Keliling :"<<endl;
        cout << "Masukkan Panjang Sisi 1 = ";
        cin>>b;

        cout << "Masukkan Panjang Sisi 2 = ";
        cin>>c;

        cout << "Masukkan Panjang Sisi 3 = ";
        cin>>d;

        kel=b+c+d;
        cout<< ""<<endl;
        cout<< "Keliling Segitiga = "<<kel<<endl;
        }
    }
    else if (ket==2)
    {
        cout<< ""<<endl;
        cout << "Ingin Mencari : "<<endl;
        cout << "1) Luas"<<endl;
        cout << "2) Keliling"<<endl;
        cout << "Pilih Salah Satu = ";
        cin>>ket2;

        if (ket2==1)
        {
            cout<< ""<<endl;
            cout << "Masukkan Panjang = ";
            cin>>p;
            cout << "Masukkan Lebar = ";
            cin>>l;

            luas=p*l;
            cout<< ""<<endl;
            cout << "Luas Segitiga = "<<luas<<endl;
        }
        else
        {
        cout<< ""<<endl;
        cout<< "Keliling :"<<endl;
        cout << "Masukkan Panjang = ";
        cin>>p;

        cout << "Masukkan Lebar = ";
        cin>>l;

        kel=(p+l)*2;
        cout<< ""<<endl;
        cout<< "Keliling Persegi Panjang = "<<kel<<endl;
        }

    }
    else
    {
    cout<< ""<<endl;
    cout << "Ingin Mencari : "<<endl;
    cout << "1) Luas"<<endl;
    cout << "2) Keliling"<<endl;
    cout << "Pilih Salah Satu = ";
    cin>>ket2;

    if (ket2==1)
    {
        cout << "Masukkan Jari-Jari = ";
        cin>>r;

        luas=(r*r)*3.14;
        cout<< ""<<endl;
        cout << "Luas Lingkaran = "<<luas<<endl;
    }
    else
    {
        kel=(r*2)*3.14;
        cout<< ""<<endl;
        cout<< "Keliling Lingkaran = "<<kel<<endl;
    }
    }
    cout<< ""<<endl;
    cout<< "Apa Ingin Mencobanya lagi?"<<endl;
    cout<< "1) IYA"<<endl;
    cout<< "2) TIDAK"<<endl;
    cout<< "Pilih Salah Satu = ";
    cin>>yes;

    if (yes==1)
    {
        goto lagi;
    }
    else
    {
        cout<< ""<<endl;
        cout<< "SELAMAT TINGGAL. ^_^";
        return 0;
    }
}
