/*
    Id.Programa: Numeros coprimos
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: Muestra MCD enre 2 numeros y indica si son coprimos, curso de verano 2017
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int a, b, x, z, y=1, i=2;
	
	cout<<"Ingrese primer numero: ";
    cin>>a;
    cout<<endl<<"Ingrese segundo numero: ";
    cin>>b;
    if (a<b){
		x=a; 
		z=b;
	}
	else{
		x=b;
		z=a;
	} 
    do {
        if (x%i==0 && z%i==0){
        	y=y*i;
        	x=x/i; 
			z=z/i;
        	i=2;
    	}
        else 
			i++;
    }while(i<=x);
 
    cout<<endl<<"El MCD es: "<<y<<endl;
    if(y == 1)
    	cout<<"Son coprimos";
	
	return 0;
}

