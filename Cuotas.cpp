/*
  Id.Programa: Cuotas
  Autor......: Vladyslav Tokmak
  Fecha......: Febrero-2017
  Comentario.: Cuotas
*/

#include <iostream>

using namespace std;

int main() {
	 
	int opcion;
	float pago,cuotaSin,cuotaCon,sumaTotal;
	cout << "Ingrese el monto a pagar: ";
	cin >> pago;
	while(pago <= 0){
		cout << "El valor no puede ser negativo\nIgrese nuevamente: ";
		cin >> pago;
	}
	cout << endl << "Lo va a pagar en:\n1- 3 cuotas\n2- 6 cuotas\n3- 9 cuotas\n4- 12 cuotas\nIngrese la opcion: ";
	cin >> opcion;
	
	switch(opcion){
		case 1:
			cuotaSin = pago / 3;
			cuotaCon = cuotaSin * 1.21;
			sumaTotal = pago * 1.21;
			cout << "La cuota sin recargo es de: " << cuotaSin << endl;
			cout << "La cuota con recargo es de: " << cuotaCon << endl;
			cout << "El pago original es de: " << pago << endl;
			cout << "El pago con recarga es de: " << sumaTotal << endl;
			break;
		case 2:
			cuotaSin = pago / 6;
			cuotaCon = cuotaSin * 1.29;
			sumaTotal = pago * 1.29;
			cout << "La cuota sin recargo es de: " << cuotaSin << endl;
			cout << "La cuota con recargo es de: " << cuotaCon << endl;
			cout << "El pago original es de: " << pago << endl;
			cout << "El pago con recarga es de: " << sumaTotal << endl;
			break;
		case 3:
			cuotaSin = pago / 9;
			cuotaCon = cuotaSin * 1.49;
			sumaTotal = pago * 1.49;
			cout << "La cuota sin recargo es de: " << cuotaSin << endl;
			cout << "La cuota con recargo es de: " << cuotaCon << endl;
			cout << "El pago original es de: " << pago << endl;
			cout << "El pago con recarga es de: " << sumaTotal << endl;
			break;
		case 4:
			cuotaSin = pago / 12;
			cuotaCon = cuotaSin * 1.53;
			sumaTotal = pago * 1.53;
			cout << "La cuota sin recargo es de: " << cuotaSin << endl;
			cout << "La cuota con recargo es de: " << cuotaCon << endl;
			cout << "El pago original es de: " << pago << endl;
			cout << "El pago con recarga es de: " << sumaTotal << endl;
			break;
		default:
			break;
	}
	
	return 0;
}
