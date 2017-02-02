/*
    Id.Programa: Multiploz al azar
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: Muestra al azar uno de los primeros 10 multiplos del 7, curso de verano 2017
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void randomNum(int);

int main() {
	randomNum(7);
	return 0;
}

void randomNum(int x){
	int a;
	a = rand() % 9 + 0;
	a *= x;
	cout<<a<<endl;
}

/*
Aclaracion: cuando lo compiles siempre te saldra el mismo numero
ya que solo invoca una sola vez la funcion rand. Si la invocaras
varias veces saldran distintos numeros.
Ejemplo para ver que funciona la parte del random:

int main() {
	randomNum(7);
	randomNum(7);
	randomNum(7);
	randomNum(7);
	return 0;
}
*/
