// contoh class Crectangle untuk mengukur luas
 #include <iostream> 
using namespace std; 
class CRectangle { 
  public:
  int x, y; 

  CRectangle (int,int);
  int area () { return (x*y);} 
}

CRectangle::CRectangle (int a, int b) 
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
