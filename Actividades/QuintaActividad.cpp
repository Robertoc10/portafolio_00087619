#include <iostream>
using namespace std;
int multi(int , int );
int main()
{
 int n1,n2,m;

 cout << "Introduzca primer numero: ";
 cin >> n1;
 cout << "Introduzca segundo numero: ";
 cin >> n2;
 m=multi(n1,n2);
 cout << "multiplicacion: " << m << endl;

}

int multi(int a, int b)
{
  if (b==1){
  return a;
  }else{
    return a+multi(a,b-1);
   }
}
