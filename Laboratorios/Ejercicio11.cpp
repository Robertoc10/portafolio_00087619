//Roberto Carlos Cabezas Moreno 00087619
//ejercicio 11
#include <iostream>
#include <cmath>
using namespace std;

int main()
{int a[5],i,may;
 for(i=0;i<5;i++)
 {cout<<"\n  Ingrese un numero =";
  cin>>a[i];
 }
 may=a[0];
 for(i=0;i<5;i++)
 { if(a[i]>may)
   may=a[i]; 
 }
 cout<<"\n  El mayor es:"<<may;

  return 0;
}
