#include <iostream>

using namespace std;

int b, k, i, j;
int main()
{
    int a, d;
    int A[b][k];
    cin >> b;
    cin >> k;
    a=0;
        
       i=0;
    while (i<b) {j=0;
        while (j<k) {
            cin >> a;
           A[i][j] = a;j++;
            }i++;}

i=0;
 while (i<b) { j=0;
        while (j<k) {
            cout << A[i][j]; j++;
            } cout<< '\n'; i++;}
            
    d = A[0][0]*A[1][1] - A[1][0]*A[0][1];
    cout << d;         
    
    
    
    system ("pause");
    return 0;
}
