#include <iostream>
#include <conio.h>

using namespace std;

float konversi (float n)
{
    if (n >= 81)
    {
        cout<<"A";
    }

    else if (n >= 66)
    {
        cout<<"B";
    }

    else if (n >= 56)
    {
        cout<<"C";
    }

    else if (n >= 41)
    {
        cout<<"D";
    }
    else
    {
        cout<<"E";
    }
}

int main()
{
    lagi:
    char ket, hasil_konversi;
    float n;
    cout << "Masukkan Nilai : ";
    cin>>n;

    hasil_konversi=konversi(n);

    cout<<endl;
    cout<<"Merupakan Hasil Konversi Dari Nilai : "<<n<<hasil_konversi<<endl;

    cout<<endl;
    cout<<"Lagi(Y/N)";
    cin>>ket;

    if (ket=='Y'||'y')
    {
        goto lagi;
    }
    else
    {
        return 0;
    }
}
