//Ejercicio 7
#include <iostream> 

using namespace std;

void calcular(int x, int z ){
   if(x<(z-1)){ 
    cout<<++x<<" ";
    calcular(x,z);}
    
    if(z<(x-1)){ 
    cout<<++z<<" ";
    calcular(x,z);}
}



int main(void){
    int x=0, z=0;

cout<<"Ingrese el primer termino(mayor)"<<endl;
cin>>x;

cout<<"Ingrese el segundo termino(menor)"<<endl;
cin>>z;

cout<<"los numeros entre "<<x<<"y"<<z<<"son: "<<endl;
calcular(x,z);

    return 0;

}
