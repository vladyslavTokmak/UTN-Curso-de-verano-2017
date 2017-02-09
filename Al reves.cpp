/*
  Id.Programa: Al reves
  Autor......: Vladyslav Tokmak
  Fecha......: Febrero-2017
  Comentario.: Muestra una palabra al reves
*/

#include <iostream> 
#include <string.h>

using namespace std; 

int main(){ 
	char palabra[20]; 
	
	cout<<"Ingrese una palabra: "; 
	cin>>palabra; 
	
	cout << endl << "La palabra al revez es: ";
	
	for(int i=strlen(palabra)-1;i>=0;i--) 
		cout<<palabra[i];  
	return 0;
}
