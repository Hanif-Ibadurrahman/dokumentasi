#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	int A, B, C, D;
	char lagi;

	cout<<"                     <<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"                         <<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"                         PERKALIAN MATRIK DENGAN MENGGUNAKAN ARRAY"<<endl;
	cout<<"                         <<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"                     <<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
menu:
	cout<<endl;
    cout<<"                          -----------------------------------------"<<endl;
    cout<<"                             |  MATRIK A DIKALI DENGAN MATRIK B  |"<<endl;
    cout<<"                          -----------------------------------------"<<endl;
	cout<<endl<<endl;
	cout<<"  ----------------------"<<endl;
	cout<<"  Masukkan ORDO Matrik A"<<endl;
	cout<<"  ----------------------"<<endl;
	cout<<"  1.  Masukkan Jumlah Baris  :"<<" ";
	cin>>A;
	cout<<"  2.  Masukkan Jumlah Kolom  :"<<" ";
	cin>>B;
	cout<<endl;
	cout<<"  ORDO Matrik Yang Dibuat : "<<" "<<A<<"x"<<B<<endl;
	cout<<endl;
	cout<<"  ----------------------"<<endl;
	cout<<"  Masukkan ORDO Matrik B"<<endl;
	cout<<"  ----------------------"<<endl;
	cout<<"  1.  Masukkan Jumlah Baris  :"<<" ";
	cin>>C;
	cout<<"  2.  Masukkan Jumlah Kolom  :"<<" ";
	cin>>D;
	cout<<endl;
	cout<<"  ORDO Matrik Yang Dibuat : "<<" "<<C<<"x"<<D<<endl;
	cout<<endl;

	int matrik_A[A][B];
	int matrik_B[C][D];
	int baris=0;
	int kolom=0;

if (B==C)
        goto lakukan;
    else
        cout<<endl;
        cout<<"WARNING : Tidak Bisa Melakukan Perkalian"<<endl;
        cout<<"Syarat  : Kolom A = Baris B";
        goto menu;

lakukan:
    cout<<"  --------"<<endl;
    cout<<"  Matrik A"<<endl;
	cout<<"  --------"<<endl;

	for (baris=1; baris<=A; baris++)
	{
		for (kolom=1; kolom<=B; kolom++)
		{
			cout<<" Matriks A["<<baris<<"]["<<kolom<<"]= ";
			cin>>matrik_A[baris][kolom];
		}
		cout<<endl;
	}

	cout<<" Matriks A :"<<endl;
	for (baris=1; baris<=A; baris++)
	{
		for (kolom=1; kolom<=B; kolom++)
		{
			cout<<" |"<<matrik_A[baris][kolom]<<"|";
		}
		cout<<endl;
	}

	cout<<endl;

// Buat Matrik B
    cout<<"  --------"<<endl;
	cout<<"  Matrik B"<<endl;
	cout<<"  --------"<<endl;

	for (baris=1;baris<=C;baris++)
	{
		for (kolom=1;kolom<=D;kolom++)
		{
			cout<<"  Angka Pada Baris ["<<baris<<"] dan Kolom ["<<kolom<<"] ="<<" ";
			cin>>matrik_B[baris][kolom];
		}
		cout<<endl;
	}

	cout<<endl;

	cout<<"  ---------------------"<<endl;
	cout<<"  Matrik Yang Anda Buat"<<endl;
	cout<<"  ---------------------"<<endl;
	cout<<endl;

	for (baris=1;baris<=C;baris++)       // baris sampai batas "c"
	{
		for (kolom=1;kolom<=D;kolom++)   // kolom sampai batas "d"
		{
			cout<<" |"<<matrik_B[baris][kolom]<<"|";
		}
		cout<<endl;
	}

	cout<<endl;


	int X;
	int matrik_C[baris][kolom];
	int kali=0;

	for (baris=1;baris<=A;baris++)
	{
		for (kolom=1;kolom<=D;kolom++)
		{
			matrik_C[baris][kolom]=0;
			for (X=1;X<=C;X++)
			{
				kali=matrik_A[baris][X]*matrik_B[X][kolom];
				matrik_C[baris][kolom]=matrik_C[baris][kolom]+kali;
			}
		}
		cout<<endl;
	}

	cout<<endl;

// Menampilkan Hasil Perkalian Matrik

	cout<<"  Hasil Perkalian Matrik A Dengan Matrik B "<<endl;
	cout<<"  -----------------------------------------"<<endl;
	cout<<endl;

	for (baris=1;baris<=A;baris++)       // baris sampai batas "c"
	{
		for (kolom=1;kolom<=D;kolom++)   // kolom sampai batas "d"
		{
			cout<<"\t|"<<matrik_C[baris][kolom]<<"|";
		}
		cout<<endl;
	}

	cout<<endl<<endl;
    cout<<"  Pilih Salah Satu : "<<endl;
    cout<<"  Ingin Melakukan Perkalian Matrik Lagi? (Y/N) : ";
    cin>>lagi;
    	if (lagi=='Y'||lagi=='y')
    	goto menu;

    else if (lagi=='N'||lagi=='n')
		goto selesai;


	selesai:
	cout<<"  <<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>"<< endl;
	cout<<"           ^_^ .SELAMAT TINGGAL. ^_^"<<endl;
	cout<<"  <<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>"<< endl;
	cout<<endl;

	return 0;
}
