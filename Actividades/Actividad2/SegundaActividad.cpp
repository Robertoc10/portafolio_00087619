#include<iostream>
using namespace std;

float mediana( float a[], int tamanio )
{   
    int half = tamanio / 2 ;
    int sit = tamanio % 2 ;
    int posicion;
    float b;
    
    if( sit == 1 )
    {
        posicion = half ; 
        b = a[ posicion ] ;    
    }
    
    else if( sit == 0 )
    {
     int auxiliar1 = half ;
     int auxiliar2 = half - 1 ;
     b = ( a[auxiliar1] + a[auxiliar2] ) / 2;  
	 }
	 return b;
}


int main()
{
	int sizeP = 12, sizeI = 11 ;
	float arreglo1[12] = { 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 , 10, 11, 12 } ; 
	float arreglo2[11] = { 1 ,2 ,3 ,4, 5, 6 ,7 ,8 ,9, 10, 11 } ;
	
	float medianaPar = mediana( arreglo1, sizeP ) ;
	float medianaImpar = mediana( arreglo2, sizeI ) ;
	

	cout << endl << "Mediana conjunto par : " << medianaPar << endl;

	
	
	cout << endl << "Mediana conjunto impar : " << medianaImpar ;
	
	
	return 0;
}
