/*
    Id.Programa: Multiplicacion
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: Multiplica usando recursividad, curso de verano 2017
*/

#include <iostream>

using namespace std;

int multiplicar(int,int);


int main() {
	
	int a, b, producto;
	cout <<"Introduce a: ";
	cin >> a;
	cout <<"Introduce b: ";
	cin >> b;
	producto=multiplicar(a,b);

cout << "El producto de ambos es: " << producto << endl << endl;
	
	
	return 0;
}

int multiplicar(int a, int b){
 	
 	if (b==0) 
		return 0;
	else 
		return (a+multiplicar(a,b-1));
}


