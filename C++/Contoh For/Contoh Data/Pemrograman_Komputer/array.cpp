#include<iostream>
using namespace std;

int h, k; // Deklarasi Variable Global

int main()
{
      int x[h][k]; // Deklarasi Array 2 Dimensi
      int i,j,c; // Deklarasi Nilai Batas Pengulangan
      
      // Memasukan nilai batas array dan isinya
      cout << "Masukan Jumlah Baris = " ; cin >> i;
      cout << "Masukan Jumlah Kolom = " ; cin >> j;
      cout << "Masukan Angka: " ; cin >> c;
      
      // Pengisian Data Array    
      for(h=0; h<i; h++)
      { for (k=0; k<j; k++) {
            x[h][k] = c+k;   // Inti dari sintaks pengisian array
              cout << x[h][k] <<" ";} // Akses Array
      cout <<'\n';
      }  
      
      system("Pause");
      return 0;
}
      
      
      
