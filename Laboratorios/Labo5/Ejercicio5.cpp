#include <iostream>
using namespace std;
struct nodo{
int info;
struct nodo *izq;
struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;
Arbol crearArbol(int x){
Arbol p = new Nodo;
p->info = x;
p->izq = NULL;
p->der = NULL;
return p;
}
void asignarIzq(Arbol a, int unDato){
if(a == NULL)
cout << "Error: arbol vacio" << endl;
else if(a->izq != NULL)
cout << "Error: subarbol IZQ ya existe" << endl;
else
a->izq = crearArbol(unDato);
}
void asignarDer(Arbol a, int unDato){
if(a == NULL)
cout << "Error: arbol vacio" << endl;
else if(a->der != NULL)
cout << "Error: subarbol DER ya existe" << endl;
else
a->der = crearArbol(unDato);
}
void agregarNodo(Arbol a, int numero){
Arbol p = a;
while(true){
if(numero == p->info){
cout << "Error: " << numero << " ya existe" << endl;
return;
}
else if(numero < p->info){
if(p->izq == NULL)
break;
else
p = p->izq;
}
else{
if(p->der == NULL)
break;
else
p = p->der;
}
}
if(numero < p->info)
asignarIzq(p, numero);
else
asignarDer(p, numero);
}
void preorden(Arbol a){
if(a != NULL){
cout << " " << a->info;
preorden(a->izq);
preorden(a->der);
}
}
void inorden(Arbol a){
if(a != NULL){
inorden(a->izq);
cout << " " << a->info;
inorden(a->der);
}
}
void postorden(Arbol a){
if(a != NULL){
postorden(a->izq);
postorden(a->der);
cout << " " << a->info;
}
}
void recorrerArbol(Arbol a){
cout << "Recorrido PRE orden:"; preorden(a); cout << endl; 


cout << "Recorrido IN orden:"; inorden(a); cout << endl;
cout << "Recorrido POST orden:"; postorden(a); cout << endl;
}
struct TNodo{
int dato;
struct TNodo *sig;
};
typedef struct TNodo nodoL;
nodoL *pInicio;
void insertarInicio(int num) {
nodoL *nuevo = new nodoL;
nuevo->dato = num;
nuevo->sig = pInicio;
pInicio = nuevo;
}
void mostrarLista() {
nodoL *s = pInicio;
while (s != NULL) {
cout << (s->dato) << endl;
s = s->sig;
}
}
void recorrerLista(Arbol a,int y) {
nodoL *s = pInicio;
while (s != NULL) {
if (s->dato!=y){
agregarNodo(a,s->dato);
}
s = s->sig;
}
}
int main(){
int variable = 0,x,y;
bool seguir=true;
Arbol arbol;
bool continuar = true;
do{
int opcion = 0;
cout << "Menu: \n\t1) Agregar datos a la lista\n\t2) Recorrer lista y  agregar datos al  arbol\n\t3) Mostrar lista"  << "\n\t4) Recorrer Arbol\n\t5) Salir \n\tOpcion elegida: ";
cin >> opcion;
switch(opcion){
case 1:
cout<<"Si desea terminar de agregar datos, pulse 0"<<endl;
do{
if(arbol==NULL){
cin>>variable;
y=variable;
arbol = crearArbol(variable);
insertarInicio(variable);
}
else{
cin>>x;
if (x!=0) insertarInicio(x);
if (x==0) seguir=false;
}
}  while (seguir);
break;
case 2: recorrerLista(arbol,y);
cout<<"La lista ha sido recorrida y sus datos han sido agregados al arbol!"<< endl;
break;
case 3: mostrarLista();
break;
case 4: recorrerArbol(arbol);
break;
case 5: continuar = false;
break;
default: cout << "Opcion erronea!" << endl;
break;
}
}while(continuar);
return 0;
}

