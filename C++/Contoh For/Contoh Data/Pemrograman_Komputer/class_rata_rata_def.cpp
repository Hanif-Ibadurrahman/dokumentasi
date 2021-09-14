#include <iostream>

using namespace std;
class rata_rata {
    int n,jml,i,rata;
    public:
    void nilai_data();
    void output_rata ();};

void rata_rata::nilai_data() {
    rata=0;
    jml=0;
    i=0;
    while (i<5) {
        cout <<"Masukan Angka ke -"<<i+1<<endl;
        cin >> n;
        jml=jml+n;
        ++i;
        }}
         
void rata_rata::output_rata() {
        cout << jml <<endl;
        cout << i << endl;
        rata = jml/i;
        cout << rata;  } 

int main() {
    rata_rata rata1;
    rata1.nilai_data();
    rata1.output_rata();
    system("pause");
    return 0;
}
        
        
    
