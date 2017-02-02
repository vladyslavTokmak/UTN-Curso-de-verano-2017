/*
    Id.Programa: Multiplos de primos
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: La sumatoria de los 20 primeros multiplos de todos los primos entre 2 y 10000, curso de verano 2017
*/

#include <iostream>

using namespace std;

int primos(int);

int main(){
	primos(2);
	return 0;
}

int primos(int i){
	int p,j,c=0,y,sumaTotal=0;
	p=i;
	while(p<= 10000){
		c=0;
		for(j=1;j<=p;j++){
			if(p%j == 0)
				c++;
		}
		if(c<=2){
			for(y=1;y<20;y++){
				sumaTotal = sumaTotal + ( p * y);
			}
		}
		p++;
	}
	cout<< endl <<"La sumatoria de los 20 primeros multiplos de todos los primos entre 2 y 10000 es: "<< sumaTotal;
	return 0;
}
