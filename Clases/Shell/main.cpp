#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

	//Declaracion de variables
		//temporales
			
		//arreglos
			int numeros[5]={0};
		//fors
			int i=0, j=0;  //Uso de captura e impresion de numeros
			
//Imprimir salidas	
int imprimir(int imprimir[]){  for(j=0;j<5;j++)cout<<imprimir[j]<<" "; }

//Funcion Principal
int main() {
	//Inicio de programa
		//Ingresar datos
		cout<<"Ingrese 5 numeros aleatorios ";
		for(i=0;i<5;i++)
			cin>>numeros[i];
		
		//Imprimir datos
		cout<<"\nTus numeros fueron\n";
		imprimir(numeros);
		cout<<"\n";

	//Salida
	cout<<"\n\n\nIsmael Flores Melendez\nMetodo Shell\n";
	system("pause");
	return 0;
}


