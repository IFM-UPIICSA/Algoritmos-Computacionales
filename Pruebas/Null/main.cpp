#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;
	
//Funcion Principal
	int i=0, j=0;
int main() {

	int Numeros [5] = {1,2,1,3,1};
	
	//Busqueda de 1
	for(i=0; i<5;i++){
		if(Numeros[i]==1){
			Numeros[i]=NULL;
		}
	}
	
	for(i=0; i<5;i++){
		if(Numeros[i]==NULL){
			Numeros[i]=9;
		}
	}
	
	
	//Impresion
	for(i=0; i<5; i++){
		cout<<Numeros[i]<<" ";
	}
	
	system("pause");
	return 0;
}
