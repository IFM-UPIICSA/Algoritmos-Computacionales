#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
		//Declaracion de variables
	int arreglo[10]={0};
		//Captura de datos del arreglo
	for (int i=0;i<10;i++){
	cout<<"Introdusca un numero:  ";
		cin>>arreglo[i];
	}
		//Mostrar los numeros actuales
	cout<<"\n";
	for (int i=0;i<10;i++)
		cout<<"0"<<i<<" ";
	cout<<"\n";
	for(int i=0;i<10;i++){
		cout<<arreglo[i]<<" ";
	}
		//Reordenar los numeros
	for (int i=0;i<4;i++){
		int temp1;
		temp1=arreglo[i];
		arreglo[i]=arreglo[i+6];
		arreglo[i+6]=temp1;
	}
		//Mostrar los datos
	cout<<"\n\n";
	for (int i=0;i<10;i++)
		cout<<"0"<<i<<" ";
	cout<<"\n";
	for(int i=0;i<10;i++){
		cout<<arreglo[i]<<" ";
	}
    system("pause");
	return 0;
}
