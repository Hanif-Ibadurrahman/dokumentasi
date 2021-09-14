// contoh class Crectangle untuk mengukur luas
#include <iostream> 
using namespace std; 
class CRectangle { 
 public: 
  int x, y; 
  void set_values (int,int);
  int area () { return (x*y);} 
};
void CRectangle::set_values (int a, int b) 
{  x = a;
   y = b;
 }
 
int main ()
 { CRectangle rect; 
rect.set_values (3,4);
 cout << "X: " << rect.x << endl;
  cout << "Y: " << rect.y << endl;
 cout << "area: " << rect.area(); 
 system("pause");
return 0; 
}
