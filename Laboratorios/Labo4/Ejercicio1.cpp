#include <iostream>
using namespace std;
int contador=0;
//------ Creacion de nodo y de arbol ------
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

//------ Agregar nodos a un arbol ------
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

void agregarNodo(Arbol a){
    //solicitar informacion (numero a agregar)
    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;
    
    Arbol p = a;
    
    //desplazarse hasta el lugar adecuado
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){//ir a la izquierda
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{//ir a la derecha
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    
    //agregar el nuevo nodo
    if(numero < p->info){
        asignarIzq(p, numero);
        contador+1;
    }else
        asignarDer(p, numero);
        contador+1;
}
void auxContador(Arbol a, int *c)
{
   (*c)++; /* Otro nodo */
   /* Continuar recorrido */
   if(a->izq) auxContador(a->izq, c);
   if(a->der) auxContador(a->der, c);
}

/* Contar el número de nodos */
int NumeroNodos(Arbol a, int *contador)
{
   *contador = 0;

   auxContador(a, contador); /* Función auxiliar */
   return *contador;
}



//------ Recorrer un arbol (in, pre y post orden) ------
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

int profundidad(Arbol a){

int Alizq=0;
int Alder=0;

if(a== NULL)
return -1;
else
{
Alizq=profundidad(a->izq);
Alder=profundidad(a->der);
if (Alizq>Alder)
return Alizq+1;
else
return Alder+1;
}
}

int calsuma(Arbol a){
    if(a==NULL){
        return 0;
    }
    if(a->izq == NULL && a->der==NULL){
        return a->info;
    }
    return calsuma(a->izq)+calsuma(a->der)+a->info;
}



int main(){
    
    int n=0;
    int variable = 0;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> variable;
    
    Arbol arbol = crearArbol(variable);
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar\n\t2) Recorrer"
            << "\n\t3)Numero de niveles \n\t 4) Numero de nodos\n\t5) Suma de los nodos\n\t6) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: agregarNodo(arbol);
            break;
            case 2: recorrerArbol(arbol);
            break;
            case 3: 
            cout<<"el numero de niveles es: "<<profundidad(arbol)+1<<endl;
            break;
            case 4: 
            cout<<"el numero de nodos es: "<<NumeroNodos(arbol, &n)<<endl;
            break;
            case 5: 
            cout<<"La suma de los nodos es: "<<calsuma(arbol)<<endl;
            break;
            case 6: continuar= false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
            
        }
    }while(continuar);
    
    return 0;
}
