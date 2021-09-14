#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	ulang:
	int A, B;
    int baris, kolom;

    cout<< "                                           >>>>>>>>>> PERTAMBAHAN MATRIK <<<<<<<<<<"<<endl<<endl;
	cout<< "Masukkan Ordo Matrik "<<endl;
    cout<< "Jumlah Baris : ";
    cin>>A;
    cout<< "Jumlah Kolom : ";
    cin>>B;

	int matrik_A[A][B];
	cout<<endl;
    cout<<"Anggota Matrik A "<<endl;
    for(baris=0; baris<A; baris++)
    {
        for(kolom=0; kolom<B; kolom++)
        {
            cout<< "Matrik A["<<baris<<"]["<<kolom<<"]= ";
            cin>>matrik_A[baris][kolom];
        }
        cout<<endl;
    }

    cout<<"Matrik A : "<<endl;
    for(baris=0; baris<A; baris++)
    {
        for(kolom=0; kolom<B; kolom++)
        {
            cout<< " |"<<matrik_A[baris][kolom]<<"| ";
        }
        cout<<endl;
    }

	int matrik_B[A][B];
	cout<<endl;
    cout<<"Anggota Matrik B "<<endl;
    for(baris=0; baris<A; baris++)
    {
        for(kolom=0; kolom<B; kolom++)
        {
            cout<< "Matrik B["<<baris<<"]["<<kolom<<"]= ";
            cin>>matrik_B[baris][kolom];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matrik B : "<<endl;
    for(baris=0; baris<A; baris++)
    {
        for(kolom=0; kolom<B; kolom++)
        {
            cout<< " |"<<matrik_B[baris][kolom]<<"| ";
        }
        cout<<endl;
    }
    cout<<endl;

	int matrik_C[baris][kolom];
    for(baris=0; baris<A; baris++)
    {
        for(kolom=0; kolom<B; kolom++)
        {
            matrik_C[baris][kolom]=matrik_A[baris][kolom]+matrik_B[baris][kolom];
        }
        cout<<endl;
    }

    cout<< "Hasil Penjumlahan = "<<endl;
    for(baris=0; baris<A; baris++)
        {
            for(kolom=0; kolom<B; kolom++)
            {
                cout<<" |"<<matrik_C[baris][kolom]<<"| ";
            }
        cout<<endl;
        }
    int ket;

    cout<<endl<<endl;
    cout<< "Apa Ingin Mencoba Lagi?"<<endl;
    cout<< "1) IYA"<<endl;
    cout<< "2) TIDAK"<<endl;
    cout<< "Pilih Salah Satu : ";
    cin>>ket;
    if (ket==1)
        goto ulang;
    else
    cout<< ">>>>>>>>>> TERIMA KASIH <<<<<<<<<<"<<endl;
    cout<< "         SELAMAT  TINGGAL";
    return 0;
}
