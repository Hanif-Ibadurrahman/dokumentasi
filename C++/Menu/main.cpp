#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <windows.h>

using namespace std;

float konversi ()
{
    system("color 2F");
    ulang:
    float n, ket;
        cout<<endl<<endl;
        cout<< ">>>>>>>>>> KONVERSI NILAI <<<<<<<<<<"<<endl<<endl;
        cout<< "Masukkan Nilai : ";
        cin>>n;

    if (n >= 81)
    {
        cout<<"Nilai Hasil Konversi dari "<<n<<" Adalah A";
    }

    else if (n >= 66)
    {
        cout<<"Nilai Hasil Konversi dari "<<n<<" Adalah B";
    }

    else if (n >= 56)
    {
        cout<<"Nilai Hasil Konversi dari "<<n<<" Adalah C";
    }

    else if (n >= 41)
    {
        cout<<"Nilai Hasil Konversi dari "<<n<<" Adalah D";
    }
    else
    {
        cout<<"Nilai Hasil Konversi dari "<<n<<" Adalah E";
    }
    cout<<endl<<endl;
    cout<< "Apa Ingin Mencoba Lagi?"<<endl;
    cout<< "1) IYA"<<endl;
    cout<< "2) TIDAK"<<endl;
    cout<< "Pilih Salah Satu : ";
    cin>>ket;
    if (ket==1)
        return konversi();
    else
    cout<< ">>>>>>>>>> TERIMA KASIH <<<<<<<<<<"<<endl;
    cout<< "         SELAMAT  TINGGAL";
    return 0;
}

double pangkat()
{
    system("color 4D");
    ulang:
    double hasil, ket;
    int y, n;
        cout<<endl<<endl;
        cout << "MENGHITUNG Y Pangkat N"<<endl;
        cout << "Y = ";
        cin >> y;
        cout << "N = ";
        cin >> n;
    hasil=pow(y,n);
    cout<< "Hasil dari "<<y<<" Pangkat "<<n<<" Adalah "<<hasil<<endl;

    cout<<endl;
    cout<< "Apa Ingin Mencoba Lagi?"<<endl;
    cout<< "1) IYA"<<endl;
    cout<< "2) TIDAK"<<endl;
    cout<< "Pilih Salah Satu : ";
    cin>>ket;
    if (ket==1)
        return pangkat();
    else
    cout<< ">>>>>>>>>> TERIMA KASIH <<<<<<<<<<"<<endl;
    cout<< "         SELAMAT  TINGGAL";
    return 0;
}

int perkalian_matrik ()
{
	system("color 3E");
	cout<<"                     <<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"                         <<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"                         PERKALIAN MATRIK DENGAN MENGGUNAKAN ARRAY"<<endl;
	cout<<"                         <<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"                     <<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
ulang:
	cout<<endl;
    cout<<"                          -----------------------------------------"<<endl;
    cout<<"                             |  MATRIK A DIKALI DENGAN MATRIK B  |"<<endl;
    cout<<"                          -----------------------------------------"<<endl;
	cout<<endl<<endl;

	int A, B;
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

	int C, D;
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
        goto ulang;

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

    cout<<"  --------"<<endl;
	cout<<"  Matrik B"<<endl;
	cout<<"  --------"<<endl;

	for (baris=1;baris<=C;baris++)
	{
		for (kolom=1;kolom<=D;kolom++)
		{
			cout<<"Matrik B ["<<baris<<"]["<<kolom<<"] ="<<" ";
			cin>>matrik_B[baris][kolom];
		}
		cout<<endl;
	}

	cout<<endl;

	cout<<"  ---------------------"<<endl;
	cout<<"  Matrik Yang Anda Buat"<<endl;
	cout<<"  ---------------------"<<endl;
	cout<<endl;

	for (baris=1;baris<=C;baris++)
	{
		for (kolom=1;kolom<=D;kolom++)
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

	cout<<"  Hasil Perkalian Matrik A Dengan Matrik B "<<endl;
	cout<<"  -----------------------------------------"<<endl;
	cout<<endl;

	for (baris=1;baris<=A;baris++)
	{
		for (kolom=1;kolom<=D;kolom++)
		{
			cout<<"|"<<matrik_C[baris][kolom]<<"|";
		}
		cout<<endl;
	}
char lagi;
	cout<<endl<<endl;
    cout<<"  Pilih Salah Satu : "<<endl;
    cout<<"  Ingin Melakukan Perkalian Matrik Lagi? (Y/N) : ";
    cin>>lagi;
    if (lagi=='Y'||lagi=='y')
    	return perkalian_matrik();
    else if (lagi=='N'||lagi=='n')
		cout<< ">>>>>>>>>> TERIMA KASIH <<<<<<<<<<"<<endl;
		cout<< "         SELAMAT  TINGGAL";
		return 0;
}

float luas_keliling()
{
    system("color 9A");
    float ket, ket2, yes, luas, kel, a, t ,l, p, r, b, c, d;
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
        return luas_keliling();
    else
    {
        cout<< ""<<endl;
        cout<< "^_^ .SELAMAT TINGGAL. ^_^"<<endl;
        cout<< "      TERIMA KASIH";
        return 0;
    }
}

float fungsi ()
{
    /* 10 Fungsi = math, string, char, i/o, konversi huruf*/
    char depan[30], belakang[30], njkp[30], njotkp[30];
    char njop[30]=" (Nilai Jual Objek Pajak)";
    int berlantai, nomor;
    long double luas_tanah, luas_bangunan, panjang, lebar, p, l;
    long double njopt, njopb, total, nnjotkp, njop_pbb, nnjkp, pajak, njopb_Kecil, total_kecil;
    system("color 5B");
    cout<<endl;
    cout<< "                              PROGRAM "<<endl;
    cout<< "               PERHITUNGAN PAJAK BUMI DAN BANGUNAN"<<endl;
    cout<< "             ======================================="<<endl;
    cout<<endl;
    cout<< "NAMA DEPAN    : ";
    cin>>depan;
    cout<< "NAMA BELAKANG : ";
    cin>>belakang;
    cout<<endl;
    strcat(depan, " ");
    strcat(depan,belakang);

    cout<< "LUAS TANAH (Meter)"<<endl;
    cout<< "1) Panjang  : ";
    cin>>panjang;
    cout<< "2) Lebar    : ";
    cin>>lebar;
    cout<< "Luas Tanah Adalah "<<panjang<<"x"<<lebar<<endl<<endl;
    if (panjang==lebar)
        luas_tanah=pow(panjang, 2);
    else
        luas_tanah=panjang*lebar;

    cout<< "LUAS BANGUNAN (Meter)"<<endl;
    cout<< "1) Panjang  : ";
    cin>>p;
    cout<< "2) Lebar    : ";
    cin>>l;
    cout<<endl;
    cout<< "Bangunan Berlantai (1/2/lainnya) : ";
    cin>>berlantai;
    luas_bangunan=p*l*berlantai;
    cout<< "Luas Bangunan Adalah "<<luas_bangunan<<endl<<endl;

    njopt=luas_tanah*1000000;
    njopb=luas_bangunan*3000000;
    njopb_Kecil=luas_bangunan*3;
    total=njopb+njopt;
    total_kecil=luas_tanah+njopb_Kecil;
    nnjotkp=(njopb*0.01)/1000000;
    njop_pbb=total-nnjotkp;
    nnjkp=njop_pbb*0.2;
    pajak=nnjkp*0.005;

    strcpy(njotkp, " (Nilai Jual Objek Tidak Kena Pajak)");
    cout<< "INFO :"<<endl;
    printf(" ================================================================================================");
    cout<<endl;
    cout<< "   NO .                                                                                        "<<endl;
    cout<< "   FULL NAME                    : "<<strupr(depan)<<"                                          "<<endl;
    cout<< "   LUAS TANAH                   : "<<luas_tanah<<"                                             "<<endl;
    cout<< "   LUAS TOTAL BANGUNAN          : "<<luas_bangunan<<"                                          "<<endl;
    cout<< "                                                                                               "<<endl;
    cout<< "                   NJOP"<<strdup(njop)<<"       - Tanah    = Rp."<<luas_tanah<<" Juta.         "<<endl;
    cout<< "                                                       - Bangunan = Rp."<<njopb_Kecil<<" Juta  "<<endl;
    cout<< "                                                       - Total    = RP."<<total_kecil<<" Juta  "<<endl;
    cout<< "                   NJOTKP"<<njotkp<<" = Rp."<<nnjotkp<<" Juta                                  "<<endl;
    cout<< "                   NJOP PBB           = Rp."<<njop_pbb<<"                                      "<<endl;
    cout<< "                                                                                               "<<endl;
    cout<< "                                                                                               "<<endl;
    cout<< "                   Nilai Jual Kena Pajak        = Rp."<<nnjkp<<"                               "<<endl;
    cout<< "                   PAJAK YANG HARUS DIBAYARKAN  = Rp."<<pajak<<"                               "<<endl;
    cout<< " ______________________________________________________________________________________________"<<endl;
    getch();
}

int main()
{
    int x;
    cout<< "                        ======================================================"<<endl;
    cout<< "                           >>>>>>>>>> POLITEKNIK NEGERI JAKARTA <<<<<<<<<<"<<endl;
    cout<< "                        ======================================================"<<endl<<endl;
    cout<< "                             FUNGSI KONVERSI-PANGKAT-MATRIK-BANGUN DATAR"<<endl<<endl;
ulang:
    cout<< "PILIH PROGRAM YANG TERSEDIA DIBAWAH INI :"<<endl;
    cout<< "1) Konversi Nilai"<<endl;
    cout<< "2) Pangkat"<<endl;
    cout<< "3) Perkalian Matrik"<<endl;
    cout<< "4) Luas Dan Keliling Bangunan"<<endl;
    cout<< "5) 10 Fungsi"<<endl;
    cout<< "Exit"<<endl;
    cout<< "   Pilih Salah Satu : ";
    cin>>x;

    if (x==1)
    {
        return konversi();
    }
    else if (x==2)
    {
        return pangkat();
    }
    else if (x==3)
    {
        return perkalian_matrik();
    }
    else if (x==4)
    {
        return luas_keliling();
    }
    else if (x==5)
    {
        return fungsi();
    }
    else
    {
        cout<< ">>>>>>>>>> TERIMA KASIH <<<<<<<<<<"<<endl;
        cout<< "         SELAMAT  TINGGAL";
        return 0;
    }
}
