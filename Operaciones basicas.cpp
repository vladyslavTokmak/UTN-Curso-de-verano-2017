/*
    Id.Programa: Operaciones basicas
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: Suma-resta-multiplicacion-division, curso de verano 2017
*/

#include <iostream>

using namespace std;

int main() {
	int x,y;
	int opcion;
	float division = 0;	

	cout<<"Ingrese el primer numero(x): ";
	cin>>x;
	cout<<endl<<"Ingrese el segundo numero(y): ";
	cin>>y;
	
	cout<<endl<<"--- Menu ---"<<endl;
	cout<<"1- Suma"<<endl;
	cout<<"2- Resta"<<endl;
	cout<<"3- Multiplicacion"<<endl;
	cout<<"4- Division"<<endl;
	cout<<"Que opcion elige?: ";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<"Resultado de la suma: "<< x+y << endl;
			break;
		
		case 2:
			cout<<"Resultado de x - y = "<< x-y << endl;
			cout<<"Resultado de y - x = "<< y-x << endl;
			break;
		
		case 3:
			cout<<"Resultado de la multiplicacion: "<< x*y << endl;
			break;
			
		case 4:
			division = float(x) / float(y);
			cout<<"Resultado de x / y = "<< division << endl;
			division = float(y) / float(x);
			cout<<"Resultado de y / x = "<< division << endl;
			break;
		
		default:
			break;
	}
	return 0;
}
