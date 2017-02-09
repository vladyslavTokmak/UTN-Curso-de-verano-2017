/*
  Id.Programa: De menor a mayor
  Autor......: Vladyslav Tokmak
  Fecha......: Febrero-2017
  Comentario.: Ordena 3 numeros de menor a mayor
*/

#include <iostream> 

using namespace std; 

int main(int argc, char *argv[]) 
{ 
	int vector[3],aux,i,j; 

	cout<<"Ingrese los tres numeros enteros :"<<endl; 
	cout<<"Numero 1 : "; 
	cin>> vector[0]; 
	cout<<"Numero 2 : "; 
	cin>> vector[1]; 
	cout<<"Numero 3 : "; 
	cin>> vector[2]; 
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (vector[j-1] > vector[j]){
				aux = vector[j];
				vector[j] = vector[j-1];
				vector[j-1] = aux;
			}
		}
	}
	
	cout<<"Los numeros ordenados son : "; 
	for (i=0;i<3;i++){
		cout << vector[i] << " ";
	}

	return 0; 

} 

