#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

int main(int argc, char** argv) {
		//Declaracion de variables
	//Arreglos
	int arreglo[10]={11,14,15,25,30,35,40,52,54,98};
	//Guias
	int n=10, buscar=0, mitad=0, inicio=0, tamano=0, bandera=0;
	//fors
	int i=0/*Ingreso datos*/, j=0/*Buscar*/;
	
		//Inicio del programa
	/*	
	//captura de datos
	for(i;i<n;i++){
		cout<<"Ingrese un numero a teclear: \n";
		cin>>arreglo[i];
	}	*/
	
	//Ingreso del numero a buscar
	cout<<"\nIngrese el numero a buscar \n";
	cin>>buscar;
	//Ciclo de busqueda
	for(i;i<n;i++){
		if(arreglo[mitad]==buscar){
			cout<<"Encontro "<<buscar<<" en la posicion "<<mitad<<".";
			n=-1;
			bandera=1;
		}else{
			if(arreglo[mitad]>buscar){
				n=mitad;
				mitad=n/2;
			}else if(arreglo[mitad]<buscar){
				inicio=mitad;
				tamano=n-inicio;
				mitad=inicio+(tamano/2);
			}		
		}
	}
	if (bandera==0){
		cout<<"No se encontro el numero "<<buscar<<" en ninguna posicion.";
	}
	return 0;
}
