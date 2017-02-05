/*
    Id.Programa: Factorial
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: Calcula factorial de un numero, curso de verano 2017
*/

#include <iostream>

using namespace std;

long int factorial(int);

int main()
{   
	int n;
    cout << "Introduzca el numero: ";
    cin >> n;
    cout << endl << "El factorial es: " << factorial(n) << endl;
    return 0;
}

long int factorial(int n)
{
    long int fact;
    if (n==0)
        return 1;
    else
         return n*factorial(n-1);
} 
