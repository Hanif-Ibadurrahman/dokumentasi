#include <iostream>

using namespace std;
class rata_rata {
    int n,jml,i,rata;
    public:
    void proses_rata (){
    rata=0;
    jml=0;
    i=0;
    while (i<5) {
        cout <<"Masukan Angka ke -"<<i+1<<endl;
        cin >> n;
        jml=jml+n;
        ++i;
        }
        cout << jml<<endl;
        cout << i << endl;
        rata = jml/i;
        cout << rata;  }};

int main() {
    rata_rata rata1;
    rata1.proses_rata();
        
        system("pause");
        return 0;
}
        
        
    
