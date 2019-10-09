#include <iostream>
#include <vector>
using namespace std;

struct Opupusas{
	int queso;
	int revueltas;
	int frijolyqueso;
	bool arroz;
};

typedef struct Opupusas pupusas;

pupusas solicitarpupusas(){
	pupusas p;
	int opcion=0;
	char eleccion;
	char desicion;
	do{ 
	cout<<"1. Queso"<<endl;
	cout<<"2. Frijol con Queso"<<endl;
	cout<<"3. Revueltas"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Seleccone el tipo de pupusas que va a ordenar"<<endl;
	cin>>opcion;
	switch(opcion){
	 case 1:
	 cout<<"Cuantas pupusas de queso desea ordenar?"<<endl;
	 cin>>p.queso;
	 break;
	 case 2:
	 cout<<"Cuantas pupusas de Frijol con Queso desea ordenar?"<<endl;
	 cin>>p.frijolyqueso;
	 break;
	 case 3:
	cout<<"Cuantas pupusas revuetas desea ordenar?"<<endl;
	 cin>>p.revueltas;
	 break;
	 case 4:
	 	break;
	 }


cout<<"Desea ordenar mas pupusas?(s/n)"<<endl;
cin>>desicion;}

while(desicion=='s');
cout<<"Sus pupusas seran de arroz?(s/n)"<<endl;
cin>>eleccion;
if (eleccion=='s'){
	p.arroz=true;
}else
p.arroz=false;

return p;

}


void mostrarOrden(pupusas p){
	cout<<"Pupusas de queso ordenadas: "<<p.queso<<endl;
	cout<<"Pupusas de Frijol con queso ordenadas: "<<p.frijolyqueso<<endl;
	cout<<"Pupusas revueltas ordenadas: "<<p.revueltas<<endl;
	
	if(p.arroz==true){
		cout<<"Las pupusas ordenadas seran de arroz"<<endl;
	}else
	cout<<"Las pupusas ordenadas seran de maiz"<<endl;
}

vector<pupusas> lista;

void agregarOrden(){
 pupusas p = solicitarpupusas();
  bool continuar = true; 
  do{ int opcion = 0; cout << "\t1) Al principio\n\t2) Al final" << "\n\tOpcion elegida: ";
   cin >> opcion;
    switch(opcion){ 
	case 1: lista.insert(lista.begin(), p); continuar = false; break; 
	case 2: lista.push_back(p); continuar = false; break; default: cout << "Opcion erronea!" << endl; break; } 
	}while(continuar);}
	void mostrarLista()
	 { for (int i = 0; i < lista.size(); i++) mostrarOrden(lista[i]);
	 }int main()
	 { cout << "Inicializando..." << endl;
	  bool continuar = true;
	   do{ int opcion = 0; cout << "Menu: \n\t1) Agregar Orden de pupusas\n\t2) Ver Ordenes de pupusas" << "\n\t3) Salir\n\tOpcion elegida: ";
	    cin >> opcion;
		 switch(opcion){
		  case 1: cout << "Agregando..." << endl; 
		  agregarOrden();
		   break; 
		   case 2: cout << "Listando..." << endl; mostrarLista(); break; 
		   case 3: continuar = false; break; default: cout << "Opcion erronea!" << endl; break; } }
		   while(continuar);
		    return 0;}




