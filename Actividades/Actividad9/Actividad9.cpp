#include <iostream>
#include <stack>
using namespace std;

float fondoVacio(stack<float> *s){
    float ultimo=0;
    while(true){
	if(s->empty()){
		return ultimo;
                break;
        }
    ultimo = s->top();
    s->pop();
    };
     
}


int main()
{
        stack<float> s;
        s.push(5.5);
        s.push(6.4);
        s.push(3.4);
        s.push(8.8);

	
	
	float ultimo = fondoVacio(&s);
       
	cout << "El elemento que se encuentra al fondo de la pila es: " <<ultimo  << endl;
        
}
