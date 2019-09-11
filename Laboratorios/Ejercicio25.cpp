//Roberto Carlos Cabezas Moreno 00087619
#include <iostream>
#include <math.h>
using namespace std;

struct complejo{
	float real;
	float imaginario;
};

typedef struct complejo im;

int valorAbsoluto(im *p){
	int resultado;
	
	resultado=(sqrt(pow( (*p).imaginario,2)+ (pow((*p).real,2))) );
	
	
	return resultado;
}
int main(){
	im complejos;
	cout<<"Ingrese la parte real de su numero complejo "<<endl;
	cin>>complejos.real;
	
	cout<<"Ingrese la parte imaginaria de su numero complejo "<<endl;
	cin>>complejos.imaginario;
		
	cout<<"El valor absoluto de su numero complejo es: ";
	valorAbsoluto(&complejos);
	return 0;
}
