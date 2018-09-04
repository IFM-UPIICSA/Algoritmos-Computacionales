#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

//Ismael Flores Meléndez

int main() {
		//Declaracion de variables
	//Entradas
	char texto[20], i=0;
	//Vaciar char
	for(i=0;i<20;i++){
		texto[i]=' ';
	}
	//Entrada de texto
	cout<<"Teclee un texto\n";
	fflush(stdin);
	gets(texto);
	fflush(stdin);
	//Imprimir cadena espaciada
	for(i=0;i<20;i++){
		cout<<texto[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;
}
