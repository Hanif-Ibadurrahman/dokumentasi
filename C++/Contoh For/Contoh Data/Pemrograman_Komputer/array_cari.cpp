#include <iostream>

using namespace std;
int i;
int main()
{
    int A[i];
    int ANGKA,j,k;
    cout << "Masukan Jumlah Masukan (Input) Angka =" ; cin >> k;
    for (i=0; i<k; i++){
    cout << "Masukan angka ke - " << i << " = "; 
    cin >> A[i];} 
    cout << '\n';
    cout << "Masukan Nilai yang dicari = " ; 
    cin >> ANGKA;

for (j=0; j<10; j++){
    if (A[j] == ANGKA) {
             cout << "Nilai yang dicari ada pada indeks ke - "<< j <<endl; }
             else {cout << "Data tidak ketemu";}
             break;}   
             cout << '\n';   
             
        system ("pause");
        return 0;
}
    
    
