#include <iostream>

using namespace std;

enum BOOLEAN {FALSE, TRUE};

int main ()
{
    int X;
        BOOLEAN STOP = FALSE;
    while (!STOP) {
          cout << "Masukan nilai X : "; cin >> X;
          if (X < 0 ) {
                 // STOP = TRUE;
                  continue;
                  }      
          } 
system ("pause");
return 0;
}
