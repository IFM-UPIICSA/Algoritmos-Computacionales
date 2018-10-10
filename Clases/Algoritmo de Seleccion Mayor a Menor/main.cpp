#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;

//Declaracion de variables
	//Arreglos
		//numero[]  Para el almacenaje, no se define tamano ni valores
		//impNum Para impresiones, no se define tamano ni valores
	//Temporales
		int tamArr = 0;
		int comparar = 0;
		int apcomparar = 0;
		int bandera = 0;
	//Fors
		int i = 0;
		int j = 0;
		int iimp = 0;
//Metodo de impresion
int imprimir(int impNum[]){ for(iimp=0;iimp<tamArr;iimp++)	cout<<impNum[iimp]<<" "; }

//Metodo principal
int main() {
	//Inicio
		//Ingreso de informacion
		cout<<"Ingrese el largo del arreglo a introducir: ";
		cin>>tamArr;
		int numero[tamArr]={0};  //Declarar el arreglo
		cout<<"Ingrese los valores del arreglo separados por un espacio: ";
		for(i=0;i<tamArr;i++) cin>>numero[i];	
		
		//Impresi?n de informaci?n
		cout<<"\nArreglo ingresado \n";
		imprimir(numero);
		
	//Desarrollo 
		//Recorrimiento del arreglo
		for(i=0;i<tamArr;i++){
			bandera=0;
			//Compracion
			comparar = numero[i];
			apcomparar = i;
			for(j=i;j<tamArr-1;j++){
				if(numero[j+1]>comparar){
					comparar = numero[j+1];
					apcomparar = j+1;
					bandera=1;
				}
			}
			if(bandera==1){
				numero[apcomparar]=numero[i];
				numero[i]=comparar;
			}
		}
		
	//Salida
		//Impresion del arreglo
			cout<<"\n\nArreglo final\n";
			imprimir(numero);
		//Copyrigth
		cout<<"\n\n\nIsmael Flores Melendez\nAlgortimo de Seleccion de Mayor a Menor\n\n";
		//Default
		system("pause");
		return 0;
}

