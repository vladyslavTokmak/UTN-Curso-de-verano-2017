/*
    Id.Programa: Funcion factorial
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: Calcula factorial del numero medio., curso de verano 2017
*/

#include <iostream>

using namespace std;

int factorial(int);
int verificacion(char);

int main() {
	char cadena[5];
	int contCantidad = 0;
	int numFactorial=0;
	int i;
	int numeroMostrar=0;
	int fact;
	
	cout<< "Ingrese un numero entero: ";
	cin>> cadena;
	
	for(i=0;i<5;i++){
		if(cadena[i] > 47 && cadena[i] < 58)
				contCantidad++;
	}
	while(contCantidad != 5){
		contCantidad = 0;
		cout<< "Se ingresaron menos de 5 digitos. Ingrese nuevamente: ";
		cin>> cadena;
		for(i=0;i<5;i++){
		if(cadena[i] > 47 && cadena[i] < 58)
				contCantidad++;
		}
	}
	
	int n = (int) (cadena[2] - 48);
	cout<<"El numero medio es: "<<n;
	
	fact = factorial(n);
	cout<<endl<<"El factorial del numero medio es: "<<fact;
	
	return 0;
}

int factorial(int x)
{
    if(x > 1)
        return x * factorial(x - 1);
    else
        return 1;
}

