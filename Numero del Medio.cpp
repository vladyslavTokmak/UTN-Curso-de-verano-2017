/*
    Id.Programa: Numero del medio
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: Programa para saber el numero del medio de un numero entero, curso de verano 2017
*/

#include <iostream>

using namespace std;

int main() {
	char num[20];
	int i;
	int contCantidad=0;
	int numeroMostrar=0;
	
	cout<< "Ingrese un numero entero: ";
	cin>> num;
	
	for(i=0;i<20;i++){
		if(num[i] > 47 && num[i] < 58)
				contCantidad++;
	}
	
	if((contCantidad%2) != 0){
		numeroMostrar = (contCantidad / 2);
		cout<<"El numero medio es: "<<num[numeroMostrar]<<endl;
	}
	else
		cout<<"El numero es par por lo cual no tiene un numero del medio"<< endl;
	
	return 0;
}
