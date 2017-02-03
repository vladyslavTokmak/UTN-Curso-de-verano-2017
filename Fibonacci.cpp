/*
    Id.Programa: Fibonacci
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: Realiza la secuencia de Fibonacci, curso de verano 2017
*/

#include<iostream>

using namespace std;

int fibonacci(int);

int main()
{
    long int numero;
    int i;
    do
    {
        cout<<"Ingrese un numero entero: ";
        cin>>numero;
        cout<<endl;
        
    } while(numero < 0);
    
    for(i=0; i<=numero; i++)
    {
       if(fibonacci(i) != 0){
       		cout<< "[ "; 
        cout<< fibonacci(i); 
		      cout<< " ]"; 
	   }
    }
    cout<<endl;
    
    return 0;
}

int fibonacci(int n)
{
    if(n == 0 || n == 1)
       return n;
    else
       return fibonacci(n - 2) + fibonacci(n - 1);
}
