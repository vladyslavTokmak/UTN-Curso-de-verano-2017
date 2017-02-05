/*
    Id.Programa: Matriz transpuesta
    Autor......: Tokmak Vladyslav
    Fecha......: Fedrero - 2017
    Comentario.: Matriz transpuesta, curso de verano 2017
*/

#include <iostream>

using namespace std;



int main() {
	int x=99,y=99;
	char matriz [x][y];
	char matrizTranspuesta[y][x];
	int f1,f2;
	int i,j;
	
	cout <<"Introduce las filas de la matriz: ";
	cin >> x;
	cout <<"Introduce las columnas de la matriz: ";
	cin >> y;
	cout <<"Introdusca la martiz: " << endl<<endl;
	
	for(f1=0;f1<x;f1++){
		for(f2=0;f2<y;f2++){
			cout << "Matriz [" << f1+1 << "][" << f2+1 << "]:";
			cin >> matriz[f1][f2];
			matrizTranspuesta[f2][f1] = matriz[f1][f2];
		}
		cout<<endl;
	}
	cout<<"Matriz original"<<endl;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cout << matriz[i][j];
			cout<<" "; 
		}
		cout<<endl;
	}
	cout<<endl<<"Matriz transpuesta"<<endl;
	for(i=0;i<y;i++){
		for(j=0;j<x;j++){
			cout << matrizTranspuesta[i][j];
			cout<<" "; 
		}
		cout<<endl;
	}

	
	return 0;
}

