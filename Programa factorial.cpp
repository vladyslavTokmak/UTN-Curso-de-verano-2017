/*
    Id.Programa: Factorial
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: Calcula factorial de un numero, curso de verano 2017
*/

#include <iostream>

using namespace std;

int factorial(int);
int verificacion(char);

int main() {
	int num;
	int fact;
	
	cout<< "Ingrese un numero entero: ";
	cin>> num;
	while(num <= 0){
		cout <<"El valor ingresado no puede ser negativo, solo positivo" << endl;
		cout << "Ingrese nuevamente el valor: ";
		cin >> num;
	}
	cout<<endl<<"El factorial del numero medio es: "<<factorial(num);
	
	return 0;
}

int factorial(int x)
{
    if(x > 1)
        return x * factorial(x - 1);
    else
        return 1;
}
