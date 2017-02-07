/*
    Id.Programa: Arreglo
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: Suam los valores de un arreglo, curso de verano 2017
*/

#include <iostream>

using namespace std;

int main() {
	
	int array[4];
	int i;
	int suma=0;
	
	for(i=0;i<5;i++){
		cout << "Ingrese el valor "<< i + 1 << ": ";
		cin >> array[i];
		while(array[i] <= 0){
			cout << "El valor ingresado no es valido"<<endl;
			cout << "Igrese nuevamente: ";
			cin >> array[i];
		}
		suma += array[i];
	}	
	cout << "La suma total es: " << suma;	
	return 0;
}
