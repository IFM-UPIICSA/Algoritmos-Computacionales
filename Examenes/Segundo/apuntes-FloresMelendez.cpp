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
			char letras[16]={0};
		//fors
			int i=0, j=0;  //Uso de recorrimiento
			int v1 = 0, v2=0;  //Uso de impresion
			
//Imprimir salidas	
char imprimir(char imprimir[]){  for(j=0;j<16;j++)cout<<imprimir[j]<<" "; }

//Funcion Principal
int main() {
	//Datos del Programa
	cout<<"Flores Melendez Ismael\nExamen Segundo Parcial\nProblema F:\n\n";
	system("pause");
	
	//Inicio de programa
		//Ingresar datos
		cout<<"\nIngrese 8 caracteres: ";
		for(i=0;i<8;i++){
			cin>>letras[i];
		}

		//Imprimir datos
		cout<<"\nTus letras ingresadas fueron fueron\n";
		imprimir(letras);		
		
		//Ordenamiento de Burbuja
		cout<<"\n\nOrdenamiento por metodo burbuja\n\n";
		
		system("pause");
		cout<<"\n\n";
		
		for(i=0;i<7;i++){
			//Corrimiento de cada corrida sobre todos los numeros
			for(j=1;j<8;j++){
				//Posibles casos
				if(letras[j-1]>letras[j]){
					temp=letras[j-1];
					letras[j-1]=letras[j];
					letras[j]=temp;
				}	
			//Imprimir la salida de cada iteracion
			cout<<"\nResultado de la iteracion "<<j<<"\n";
			for(v1=0;v1<16;v1++)cout<<letras[v1]<<" ";
			}
			//Imprimir la salida de cada corrida
			cout<<"\n\nResultado de la corrida "<<(i)<<"\n";
			imprimir(letras);
			cout<<"\n\n";
		}
		cout<<"\n\n\nEl ordenamiento de burbuja resulta\n";
		imprimir(letras);
		cout<<"\n\n";
		system("pause");
		
		//Insercion de 1 despues de vocales
		cout<<"\n\n\Agregar un '1' despues de una vocal por metodo de insercion\n\n";
		system("pause");
		cout<<"\n\n";
		for(i=0; i<16; i++){
			if( (letras[i] == 'a') || (letras[i] == 'e' ) || (letras[i] == 'i') || (letras[i] == 'o') || (letras[i] == 'u')){
				for(j = 14; j>i; j--){
					letras[j+1] = letras[j]; 
					//Imprimir la salida de cada iteracion
					cout<<"\nResultado de la iteracion "<<j<<"\n";
					for(v1=0;v1<16;v1++)cout<<letras[v1]<<" ";	
				}
				letras[i+1]='1';
			}
			//Imprimir la salida de cada corrida
			cout<<"\n\nResultado de la corrida "<<(i)<<"\n";
			imprimir(letras);
			cout<<"\n\n";
		}
		
		//Final
		cout<<"\n\n\nEl arreglo final resulta\n";
		imprimir(letras);
		cout<<"\n\n";

	//Salida
	system("pause");
	return 0;
}
