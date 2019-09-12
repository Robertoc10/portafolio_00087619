#include <iostream>
#include <cmath>

using namespace std;

long double calcularpi(int x, long double suma){
	if (x==0){
		return suma;}
	else{
	return suma+((pow(-1, x+1))/((2*x)-1)) + calcularpi(x-1, suma);
}
		
} 

int main (){
	int x=0;
	
	cout<<"Ingrese la cantdad de terminos que se usaran para la aproximacion"<<endl;
	cin>>x;
	
	cout<<"El valor aproximado de pi es: "<<4*calcularpi(x,0);
	
	return 0;
	
}
