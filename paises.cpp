#include <iostream>
#include <string.h>
using namespace std;


struct pais{
	char nombre [30];
	char capital [30];
	int habitantes;
}paises[5];


struct continente{
	char nombre [30];
	 pais paises[5];

} continentes[5];

int main(){
	
	
	for(int i=0; i<5;i++){
	cout<<"Ingrese un continente: "<<endl;
	cin.getline(continentes[i].nombre,30,'\n');
	
	}
	
	for(int i=0;i<5;i++){
		cout<<"Ingrese un pais de "<<continentes[i].nombre<<endl;
	cin.getline(paises[0].nombre,30,'\n');
	
	cout<<"Ingrese su capital: "<<endl;
	cin.getline(paises[0].capital,30,'\n');
	
	cout<<"Ingrese la cantidad de habitantes: "<<endl;
	cin>>paises[0].habitantes;
	
	
		cout<<"Ingrese un pais de "<<continentes[i].nombre<<endl;
	cin.getline(paises[1].nombre,30,'\n');
	
	cout<<"Ingrese su capital: "<<endl;
	cin.getline(paises[1].capital,30,'\n');
	
	cout<<"Ingrese la cantidad de habitantes: "<<endl;
	cin>>paises[1].habitantes;
	
	
		cout<<"Ingrese un pais de "<<continentes[i].nombre<<endl;
	cin.getline(paises[2].nombre,30,'\n');
	
	cout<<"Ingrese su capital: "<<endl;
	cin.getline(paises[2].capital,30,'\n');
	
	cout<<"Ingrese la cantidad de habitantes: "<<endl;
	cin>>paises[2].habitantes;
	
		cout<<"Ingrese un pais de "<<continentes[i].nombre<<endl;
	cin.getline(paises[3].nombre,30,'\n');
	
	cout<<"Ingrese su capital: "<<endl;
	cin.getline(paises[3].capital,30,'\n');
	
	cout<<"Ingrese la cantidad de habitantes: "<<endl;
	cin>>paises[3].habitantes;
	
	
		cout<<"Ingrese un pais de "<<continentes[i].nombre<<endl;
	cin.getline(paises[4].nombre,30,'\n');
	
	cout<<"Ingrese su capital: "<<endl;
	cin.getline(paises[4].capital,30,'\n');
	
	cout<<"Ingrese la cantidad de habitantes: "<<endl;
	cin>>paises[4].habitantes;
	
	
	
	}






	/*
	continentes[0].nombre={};
	continentes[0].pais=paises[0];
	
	continentes[1].nombre={};
	
	continentes[1].pais=paises[1];
	
	continentes[2].nombre={};
	continentes[2].pais=paises[2];

	continentes[3].nombre={};
	continentes[3].pais=paises[3];
	
	continentes[4].nombre={};
	continentes[4].pais=paises[4];
	
	
	paises[0].habitantes = 0;
	paises[0].nombre={};
	paises[0].capital={};
	
	paises[1].habitantes = 0;
	paises[1].nombre={};
	paises[1].nombre={};
	
	paises[2].nombre={};
	paises[2].capital={};
	paises[2].habitantes = 0;
	
	paises[3].nombre={};
	paises[3].capital={};
	paises[3].habitantes = 0;
	
	paises[4].nombre={};
	paises[4].capital={};
	paises[4].habitantes=0;
*/	
	
	
return 0;	
}
