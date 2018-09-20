#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

	//Declaración de variables
		//temporales
			int temp=0;
		//arreglos
			int numeros[5]={0}, serieOriginal[5]={0};
		//fors
			int i=0, j=0;  //Uso de captura e impresion de numeros
			int v1=0, v2=0;  //Uso de recorrimiento de arreglo bidimencional para el ordenamiento
			
//Imprimir salidas	
int imprimir(int imprimir[]){  for(j=0;j<5;j++)cout<<imprimir[j]<<" "; }

//Funcion Principal
int main() {
	//Inicio de programa
		//Ingresar datos
		cout<<"Ingrese 5 numeros aleatorios ";
		for(i=0;i<5;i++)
			cin>>numeros[i];
			
		//Asignar a serieOriginal
		for(i=0;i<5;i++){
			serieOriginal[i]=numeros[i];
		}
		
		//Imprimir datos
		cout<<"\nTus numeros fueron\n";
		imprimir(numeros);
		cout<<"\n";
		
		//Corridas
		for(v1=0;v1<4;v1++){
			//Corrimiento de cada corrida sobre todos los numeros
			for(v2=1;v2<5;v2++){
				//Posibles casos
				if(numeros[v2-1]>numeros[v2]){
					temp=numeros[v2-1];
					numeros[v2-1]=numeros[v2];
					numeros[v2]=temp;
				}	
			}
			cout<<"\nResultado de la corrida\n";
			imprimir(numeros);
		}
		
		//Final
		cout<<"\n\n\nSerie Original\n";
		imprimir(serieOriginal);
		cout<<"\nEl ordenamiento resulta\n";
		imprimir(numeros);
		

	//Salida
	cout<<"\n\n\nIsmael Flores Melendez\nMetodo Burbuja\n";
	system("pause");
	return 0;
}
