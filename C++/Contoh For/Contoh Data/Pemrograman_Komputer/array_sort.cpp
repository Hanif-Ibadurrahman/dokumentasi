#include <iostream>

using namespace std;
int main ()
{
    int A[8];
    int C,j,k,temp;
    
    cout << "Masukan nilai pada elemen array : " <<endl;
    for (C=0; C<8; C++){
        cout <<"A["<<C<<"] = " ; cin >> A[C];}
        
cout << "Nilai elemen array sebelum diurutkan : " << endl;
for (C=0; C<8; C++) {
    cout <<"A["<<C<<"] = " << A[C] <<endl;}
// Mengurutkan Nilai pada array A[C]
for (j=0; j<8; j++){
    for (k=8;k>0; k--) {
        if (A[k] < A[k-1]) { temp = A[k]; A[k] = A[k-1]; A[k-1] = temp;}}}    
        cout << "\n Nilai elemen array setelah diurutkan : " << endl;
        for (C=0; C<8; C++) {cout <<"A["<<C<<"] = " << A[C] <<endl;}

system ("pause");
return 0;
}
