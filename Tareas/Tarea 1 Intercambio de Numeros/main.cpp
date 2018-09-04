#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

//Ismael Flores Melendez 
//Cambio de Posiciones

//Declaración de variables
	//Arreglos
		int numerosO[10] ={25,30,14,18,23,27,11,17,17,26};
		int cambNum[10];
		
	//For
	 	int i=0,j=0;
	 	
	//Variables temporales
		int temp1=0, temp2=0;

//Metodo Imprimir para reutilizar codigo
int imprimir(int cadena[]){
	for(i=0; i<10;i++){
		cout<<cadena[i]<<" ";
	}
	cout<<"\n";
}

int asignarNumToCamb(){
	for(i=0;i<10;i++){
		cambNum[i]=numerosO[i];
	}
}

//Metodo para solicitar datos
int solicitar(){
	cout<<"Ingrese 10 valores separados por un espacio ";
	for(i=0;i<10;i++){
		cin>>numerosO[i];
	}
}

int main() {
	//Recibir datos
		//solicitar();
	
	//Imprimir en pantalla
		imprimir(numerosO);
	
	//Primer Cambio
		/*
		5 ->  7
		6 ->  8
		7 ->  9
		*/
		asignarNumToCamb();
		//For de recorrimiento
			for(i=4;i<7;i++){
				temp1 = cambNum[i];
				temp2= cambNum[i+2];
				cambNum[i] = temp2;
				cambNum[i+2] = temp1;
			}
		//Imprimir
		imprimir(cambNum);
		
		
	//Segundo cambio
		/*
			2 -> 9
			4 -> 7
			6 -> 5
		*/
		cout<<"\n";	
		asignarNumToCamb();
		imprimir(cambNum);
		//Cambio de posiciones
			//Primer movimiento
				temp1 = cambNum[8];
				temp2 = cambNum[1];
				cambNum[1] = temp1;
				cambNum[8] = temp2;
			//Segundo movimiento
				temp1 = cambNum[6];
				temp2 = cambNum[3];
				cambNum[3] = temp1;
				cambNum[6] = temp2;
			//Tercero movimiento
				temp1 = cambNum[4];
				temp2 = cambNum[5];
				cambNum[5] = temp1;
				cambNum[4] = temp2;
		//Imprimir
		imprimir(cambNum);
	return 0;
}
