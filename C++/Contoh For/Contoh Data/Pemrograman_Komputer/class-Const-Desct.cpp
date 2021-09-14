// Contoh Konstruktor dan Destruktor
#include<iostream>
class Tpersegi
{
int *lebar, *panjang;
public:
Tpersegi (int, int);
~Tpersegi();
int Luas() {return (*lebar * *panjang);}
};
Tpersegi::Tpersegi(int a, int b)
{
lebar = new int;
panjang = new int;
*lebar = a;
*panjang = b;
}
Tpersegi::~Tpersegi()
{ delete lebar;
  delete panjang;
}

int main()
{ 
    Tpersegi pers(3,4);
    Tpersegi persg(5,6);
         //cout << "Luas pers = " ;
        // cout << pers.Luas()<<endl;
         //cout << "Luas persg = " <<persg.Luas()<<endl;
system ("pause");
return 0;
}
