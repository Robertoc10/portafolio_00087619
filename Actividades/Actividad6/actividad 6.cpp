//Roberto Carlos Cabezas Moreno 00087619
#include <iostream>
using namespace std;

int arreglo[] = {1,3,4,5,17,18,31,33};
int busquedaBinaria(int x,int low, int high);

int main()
{
  int x =0;
  int tamano = 8;
  
  int high=tamano-1;
  int low=0;
  int i;
  
  cout << "Digite un numero a buscar : " << endl;
  cin >> x;
  if (x<0){
  cout<<"El valor no fue encontrado"<<endl;}
  else
   i =busquedaBinaria( x, low, high);
  if (i==-1){
  	cout<<"El valor no fue encontrado"<<endl;}
  	else
  cout<< "Su valor se encuentra en la posicion: "<<i << endl;
  
  return 0;
  }

int busquedaBinaria( int x, int low , int high)
{
  int mid;
  if  (low > high)
  	return -1;
      mid = (high + low)/2;
      if (arreglo[mid] == x)
 return mid;
 if (x < arreglo[mid]){
   high=mid-1;
   busquedaBinaria( x,  low,  high);}
 else
   low= mid+1;
   busquedaBinaria( x,  low,  high);
    }

