/*
  Id.Programa: Archivos por turnos
  Autor......: Vladyslav Tokmak
  Fecha......: Febrero-2017
  Comentario.: Genera archivos segun turnos
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <iostream>
#include<iomanip>
using namespace std;

typedef char str10[10];

struct StructDatos {
	int legajo;
	str10 	apellido,
			nombre;
};

void ObtDatos(StructDatos &);

int main() {
	//perdon por no escribir la enie ya que me empezo a andar mal la maquina
	FILE *Manana = fopen("Manana.bin","wb+");
	FILE *Tarde = fopen("Tarde.bin","wb+");
	FILE *Noche = fopen("Noche.bin","wb+");
	StructDatos sDatos;

	int contManana=0,contTarde=0,contNoche=0;

	ObtDatos(sDatos);

	while (sDatos.legajo) {
		int opcion;
		cout << "1- Manana | 2- Tarde | 3- Noche"<<endl<<"Ingrese el turno: ";
		cin >> opcion;
		
		switch(opcion){
			case 1:
				fwrite(&sDatos,sizeof(sDatos),1,Manana);
				contManana++;
				break;
			case 2:
				fwrite(&sDatos,sizeof(sDatos),1,Tarde);
				contTarde++;
				break;
			case 3:
				fwrite(&sDatos,sizeof(sDatos),1,Noche);
				contNoche++;
				break;
		}
		ObtDatos(sDatos);	
	}
	cout<< "Alumnos en turno: "<<endl;
	cout<< "Manana: "<<contManana<<endl;
	cout<< "Tarde: "<<contTarde<<endl;
	cout<< "Noche: "<<contNoche<<endl;
	
	fcloseall;
}

void ObtDatos(StructDatos &rDatos) {
	cout << "Introdusca el Legajo. Para finalizar introdusca 0 en todos los campos: ";
	cin >> rDatos.legajo;
	if(rDatos.legajo){
		cout << "Apellido : ";
		cin >> rDatos.apellido;
		cout << "Nombre : ";
		cin >> rDatos.nombre;
	}	
} 

