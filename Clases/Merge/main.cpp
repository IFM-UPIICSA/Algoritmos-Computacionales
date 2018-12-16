#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

	//Declaracion de variables
		//temporales
			int BuscarA1, BuscarA2 = 0;
			int ApuntadorA1, ApuntadorA2 = 0;
		//arreglos
			int A1[8]={0}, A2[8]={0}, A3[8]={0};
		//fors
			int i=0, j=0;  //Uso de captura e impresion de numeros
		//Banderas
			bool Ban1 = true, Ban2 = true;
			
//Imprimir salidas	
int imprimir(int imprimir[]){  for(j=0;j<8;j++)cout<<imprimir[j]<<" "; }

//Funcion Principal
int main() {
	//Inicio de programa
		//Ingresar datos
			cout<<"Ingrese los números del primer arreglo ";
			for(i=0;i<8;i++)
				cin>>A1[i];
			
			cout<<"Ingrese los números del segundo arreglo ";
			for(i=0;i<8;i++)
				cin>>A2[i];
			
		//Imprimir datos
			cout<<"\nEl primer arreglo es:\n";
			imprimir(A1);
			cout<<"\n";
	
			cout<<"\nEl segundo arreglo es:\n";
			imprimir(A2);
			cout<<"\n";
			
	//Procesamiento
		//Inicializar varibles
			BuscarA1 = A1[0];
			BuscarA2 = A2[0];
		//Llenado del arreglo 3
		for (i=0; i<16; i++){
			
			//Busqueda del menor del arreglo A1
			if(Ban1 = true){	
				for(j=1; j<8; j++){
					if(BuscarA1>A1[j]){
						ApuntadorA1 = j;
						BuscarA1 = A1[j];
					}
				}		
			}
			
			//Busqueda del menor del arreglo A2
			if(Ban2 = true){
				for(j=1; j<8; j++){
					if(BuscarA2>A2[j]){
						ApuntadorA2 = j;
						BuscarA2 = A2[j];
					}
				}	
			}
			cout<<"Paso las busquedas B1:"<<BuscarA1<<" B2:"<<BuscarA2<<" A1:"<<ApuntadorA1<<" A2:"<<ApuntadorA2;
			system("pause");
			if(BuscarA1<BuscarA2){
				A3[i] = BuscarA1;
				A1[ApuntadorA1] = 9999;
				Ban2 = false;
				BuscarA1 = A1[0];
				Ban1 = true;
				cout<<"Entro a if";
			}else{
				A3[i] = BuscarA2;
				A2[ApuntadorA2] = 9999;
				Ban1 = false;
				BuscarA2 = A2[0];
				Ban2= true;
				cout<<"Entro a else";
			}
		}
		
	//Impresion Final
	cout<<"\n\n\nTercer Arreglo\n";
	for(j=0;j<16;j++)cout<<A3[j]<<" ";	

	//Salida
	cout<<"\n\n\nIsmael Flores Melendez\nMetodo Merge\n";
	system("pause");
	return 0;
}


