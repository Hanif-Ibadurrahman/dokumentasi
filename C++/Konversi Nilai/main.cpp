#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan Nilai = " << endl;
    cin>>nilai;
    cout<<""<<endl;

    if (nilai>80)
    {
        cout<<"Konversi Nilai = A";
    }
    else if (nilai>65)
    {
        cout<<"Konversi Nilai = B";
    }
    else if (nilai>55)
    {
        cout<<"Konversi Nilai = C";
    }
    else if (nilai>40)
    {
        cout<<"Konversi Nilai = D";
    }
    else
        cout<<"Konversi Nilai = E";

    return 0;
}
