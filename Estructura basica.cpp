/*
    Id.Programa: Estructuras basicas
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: Muestra el mes segun su numero, curso de verano 2017
*/

#include <iostream>

using namespace std;

int main() {
	
	int num;
	
	cout<<"Ingrese un numero del 1 al 12: ";
	cin >> num;
	
	while(num <= 0 || num > 12){
		cout << "El valor ingresado no es valido"<<endl;
		cout << "Igrese nuevamente: ";
		cin >> num;
	}
	cout << "El valor ingresado coresponde a: ";
	switch(num){
		case 1:
			cout << "Enero";
			break;
		case 2:
			cout << "Febrero";
			break;
		case 3:
			cout << "Marzo";
			break;
		case 4:
			cout << "Abril";
			break;
		case 5:
			cout << "Mayo";
			break;
		case 6:
			cout << "Junio";
			break;
		case 7:
			cout << "Julio";
			break;
		case 8:
			cout << "Agosto";
			break;
		case 9:
			cout << "Septiembre";
			break;
		case 10:
			cout << "Octubre";
			break;
		case 11:
			cout << "Noviembre";
			break;
		case 12:
			cout << "Diciembre";
			break;				
	}
}
