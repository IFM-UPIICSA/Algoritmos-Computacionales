#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <stdio.h>
using namespace std;

	//Declaracion de variables
		//Variables
		int temp=0;
		//arreglos
		int numeros[5]={0};  //Arreglo del manejo de informacion
		int numerosOriginal[5]={0};  //Copia de numeros
		//fors
		int i=0, j=0; //Imprimir y entrada de datos
		int v1=0, v2=0;  //Corrimiento de los arreglos
		

int imprimir(int numImp[]){
	for(i=0;i<5;i++){
		cout<<numImp[i]<<" ";
	}
}


int main() {
	//Inicio
		//Introduccion de numeros
		cout<<"Ingrese 5 numeros aleatorios ";
		for(i=0;i<5;i++)  cin>>numeros[i];
		cout<<"\nTu entrada fue: ";  
		imprimir(numeros);  //Imprimir entrada
		for(i=0;i<5;i++) numerosOriginal[i] = numeros[i];  //Copiar arreglo
	
	//Desarrollo	
		//Corridas		
		for(v1=0;v1<4;v1++){
			for(v2=1;v2<5;v2++){
				if(numeros[v2-1]<numeros[v2]){
					temp=numeros[v2-1];
					numeros[v2-1]=numeros[v2];
					numeros[v2]=temp;
				}
			}
		}
	
	//Salida
		//Impresiones
		cout<<"\n\n\nTu entrada\n";
		imprimir(numerosOriginal);
		cout<<"\n\Tus numeros ordenados de mayor a menor\n";
		imprimir(numeros);
	
	//Copyrigth
	cout<<"\n\nIsmael Flores Melendez\nBurbuja Invertida\n";
	system("pause");
	return 0;
}
