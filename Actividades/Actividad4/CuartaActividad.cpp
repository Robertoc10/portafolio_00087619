//Roberto Carlos Cabezas Moreno 00087619
//Diego Antonio Bonilla Rivera
//Lo hicimos en pareja
#include<iostream>
using namespace std;

string Continente ; 
string pais1 , pais2 , pais3 , pais4 , pais5 ;
string Capital1 , Capital2, Capital3, Capital4, Capital5;
int Poblacion1, Poblacion2, Poblacion3, Poblacion4, Poblacion5;

struct continentes{
	string continente ;
	//paises
	string nombre1;
	string capital1 ;
	int poblacion1 ;
	string nombre2 ;
	string capital2 ;
	int poblacion2 ;
	string nombre3 ;
	string capital3 ;
	int poblacion3 ;
	string nombre4 ;
	string capital4 ;
	int poblacion4 ;
	string nombre5 ;
	string capital5 ;
	int poblacion5 ;
};

struct continentes crearContinente( string C, string N1, string N2, string N3, string N4, string N5, string F1, string F2, string F3, string F4, string F5, int P1, int P2, int P3, int P4, int P5);
struct continentes inDatos(string C, string N1, string N2, string N3, string N4, string N5, string F1, string F2, string F3, string F4, string F5, int P1, int P2, int P3, int P4, int P5);
void outDatos(struct continentes random);
int main(){	
	/*
	struct continentes america ;
	america.continente = "." ;
	america.nombre1 = "." ;
	america.nombre2 = "." ;
	america.nombre3 = "." ;
	america.nombre4 = "/." ;
	america.nombre5 = "." ;
	america.capital1 = "." ;
	america.capital2 = "." ;
	america.capital3 = "." ;
	america.capital4 = "." ;
	america.capital5 = "." ;
	america.poblacion1 = 3 	;
	america.poblacion2 = 4 	;
	america.poblacion3 = 5 	;
	america.poblacion4 = 6 	;
	america.poblacion5 = 7 	;
	
	struct continentes europa ;
	europa.continente = ".." ;
	europa.nombre1 = ".." ;
	europa.nombre2 = ".." ;
	europa.nombre3 = ".." ;
	europa.nombre4 = ".." ;
	europa.nombre5 = ".." ;
	europa.capital1 = ".." ;
	europa.capital2 = ".." ;
	europa.capital3 = ".." ;
	europa.capital4 = ".." ;
	europa.capital5 = ".." ;
	europa.poblacion1 = 1 	;
	europa.poblacion2 = 6 	;
	europa.poblacion3 = 11	;
	europa.poblacion4 = 11	;
	europa.poblacion5 = 45	;
	
	struct continentes asia ;
	asia.continente = "..." ;
	asia.nombre1 = "..." ;
	asia.nombre2 = "..." ;
	asia.nombre3 = "..." ;
	asia.nombre4 = ">.." ;
	asia.nombre5 = "..." ;
	asia.capital1 = "..." ;
	asia.capital2 = "..." ;
	asia.capital3 = "..." ;
	asia.capital4 = "..." ;
	asia.capital5 = "..." ;
	asia.poblacion1 = 5 ;
	asia.poblacion2 = 90 ;
	asia.poblacion1 = 3 ;
	asia.poblacion1 = 4 ;
	asia.poblacion1 = 5 ;
	
	struct continentes oceania ;
	oceania.continente = "../.";
	oceania.nombre1 = ".../";
	oceania.nombre2 = "././";
	oceania.nombre3 = "/./.";
	oceania.nombre4 = "..//";
	oceania.nombre5 = "/...";
	oceania.capital1 = ".../" ;
	oceania.capital2 = "./.." ;
	oceania.capital3 = "//.." ;
	oceania.capital4 = ".//." ;
	oceania.capital5 = "////" ;
	oceania.poblacion1 = 75 ;
	oceania.poblacion2 = 3 ;
	oceania.poblacion3 = 3 ;
	oceania.poblacion4 = 43 ;
	oceania.poblacion5 = 5 ;
	
	struct continentes africa ;
	africa.continente = "=-=-";
	africa.nombre1 = ":;::";
	africa.nombre2 = ":::::";
	africa.nombre3 = "x?/";
	africa.nombre4 = "'''''";
	africa.nombre5 = "][]";
	africa.capital1 = "][]";
	africa.capital2 = "=-0";
	africa.capital3 = "/'/;'";
	africa.capital4 = "=-0[]";
	africa.capital5 = ":'/'";
	africa.poblacion1 = 345 	;
	africa.poblacion2 = 345	;
	africa.poblacion3 = 12		;
	africa.poblacion4 = 11 	;
	africa.poblacion5 = 12 	;
	*/
	struct continentes user1 = inDatos (Continente, pais1, pais2, pais3, pais4, pais5, Capital1, Capital2, Capital3, Capital4, Capital5, Poblacion1, Poblacion2, Poblacion3, Poblacion4 , Poblacion5 );	
	struct continentes user2 = inDatos (Continente, pais1, pais2, pais3, pais4, pais5, Capital1, Capital2, Capital3, Capital4, Capital5, Poblacion1, Poblacion2, Poblacion3, Poblacion4 , Poblacion5 );	
	struct continentes user3 = inDatos (Continente, pais1, pais2, pais3, pais4, pais5, Capital1, Capital2, Capital3, Capital4, Capital5, Poblacion1, Poblacion2, Poblacion3, Poblacion4 , Poblacion5 );	
	struct continentes user4 = inDatos (Continente, pais1, pais2, pais3, pais4, pais5, Capital1, Capital2, Capital3, Capital4, Capital5, Poblacion1, Poblacion2, Poblacion3, Poblacion4 , Poblacion5 );	
	struct continentes user5 = inDatos (Continente, pais1, pais2, pais3, pais4, pais5, Capital1, Capital2, Capital3, Capital4, Capital5, Poblacion1, Poblacion2, Poblacion3, Poblacion4 , Poblacion5 );
	
	outDatos(user1);
	outDatos(user2);
	outDatos(user3);
	outDatos(user4);
	outDatos(user5);
	
	return 0;
}


struct continentes inDatos(string C, string N1, string N2, string N3, string N4, string N5, string F1, string F2, string F3, string F4, string F5, int P1, int P2, int P3, int P4, int P5){
	cout << "Continente: " ; cin >> C ;
	cout << "	1.Pais: " ; cin >> N1 ;
	cout << "		capital: " ; cin >> F1 ;
	cout << "		poblacion: " ; cin >> P1 ;
	
	cout << "	2.Pais: " ; cin >> N2 ;
	cout << "		capital: " ; cin >> F2 ;
	cout << "		poblacion: " ; cin >> P2 ;
	
	cout << "	3.Pais: " ; cin >> N3 ;
	cout << "		capital: " ; cin >> F3 ;
	cout << "		poblacion: " ; cin >> P3 ;
	
	cout << "	4.Pais: " ; cin >> N4 ;
	cout << "		capital: " ; cin >> F4 ;
	cout << "		poblacion: " ; cin >> P4 ;
	
	cout << "	5.Pais: " ; cin >> N5 ;
	cout << "		capital: " ; cin >> F5 ;
	cout << "		poblacion: " ; cin >> P5 ;
	
	int total = P1 + P2 + P3 + P4 + P5 ;
	cout << total ;
	
	struct continentes temp;
	temp.continente = C ;
	temp.nombre1 = N1 ;
	temp.nombre2 = N2 ;
	temp.nombre3 = N3 ;
	temp.nombre4 = N4 ;
	temp.nombre5 = N5 ;
	temp.capital1 = F1 ;
	temp.capital2 = F2 ;
	temp.capital3 = F3 ;
	temp.capital4 = F4 ;
	temp.capital5 = F5 ;
	temp.poblacion1 = P1 ;
	temp.poblacion2 = P2 ;
	temp.poblacion3 = P3 ;
	temp.poblacion4 = P4 ;
	temp.poblacion5 = P5 ;
	
	return temp ;
}



void outDatos( struct continentes unContinente ){
	cout << endl << "		" <<unContinente.continente << endl ;
	cout << "	PAIS:		" << unContinente.nombre1 << endl ;
	cout << "	CAPITAL:	" 	<< unContinente.capital1 << endl ;
	cout << "	POBLACION: 	" << unContinente.poblacion1 << endl << endl ;	
	
	cout << "	PAIS:		" << unContinente.nombre2 << endl ;
	cout << "	CAPITAL:	" << unContinente.capital2 << endl ;
	cout << "	POBLACION:	" << unContinente.poblacion2 << endl << endl ;

	cout << "	PAIS:		" << unContinente.nombre3 << endl ;
	cout << "	CAPITAL:	" << unContinente.capital3 << endl ;
	cout << "	POBLACION:	" << unContinente.poblacion3 << endl << endl ;
	
	cout << "	PAIS:		" << unContinente.nombre4 << endl ;
	cout << "	CAPITAL:	" << unContinente.capital4 << endl ;
	cout << "	POBLACION:	" << unContinente.poblacion4 << endl << endl ;
	
	cout << "	PAIS:		" << unContinente.nombre5 << endl ;
	cout << "	CAPITAL:	" << unContinente.capital5 << endl ;
	cout << "	POBLACION:	" << unContinente.poblacion5 << endl << endl;
	
	int p1 = unContinente.poblacion1 ;
	int p2 = unContinente.poblacion2 ;
	int p3 = unContinente.poblacion3 ;
	int p4 = unContinente.poblacion4 ;
	int p5 = unContinente.poblacion5 ;
		
	int total = ( p1 + p2 + p3 + p4 + p5 ) ;
	cout << "Poblacion total del continente: " << total << endl << endl << endl ;
}

