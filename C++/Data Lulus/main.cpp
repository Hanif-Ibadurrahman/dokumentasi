#include <iostream>

using namespace std;

int main()
{
    int absen, ket, kolom;
    int data_nilai [4][3];
    data_nilai[4][4] = 0;
    data_nilai[0][0] = 80;
    data_nilai[0][1] = 70;
    data_nilai[0][2] = 90;
    data_nilai[1][0] = 85;
    data_nilai[1][1] = 75;
    data_nilai[1][2] = 90;
    data_nilai[2][0] = 80;
    data_nilai[2][1] = 90;
    data_nilai[2][2] = 75;
    data_nilai[3][0] = 90;
    data_nilai[3][1] = 85;
    data_nilai[3][2] = 70;

    cout<<"Nilai User Yang Akan Ditampilkan : ";
    cin>>absen;

    ket=absen-1;
    kolom=ket;
		for (kolom=0;kolom<=2;kolom++)
		{
			cout<<data_nilai[absen][kolom]<<"   ";
		}

return 0;
}
