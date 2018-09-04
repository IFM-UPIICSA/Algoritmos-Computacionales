#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
	//Declaracion de variables
		//Captura de datos
			int numero=0, digitoEliminar=0, digitoAgregar=0;
		//Valores dijos
			int n=15, divisor=100000000, digito=0, sustraendo=0;
		//Arreglos
			int arreglo[15];
		//for
			int i=0,j=0;
		//Valores de prueba
			/*
			numero=459812073;
			digitoEliminar=8;
			*/
	
	//Limpiar el arreglo
		for(i=0;i<n;i++){
			arreglo[i]=0;
		}
	
	//Captura de un numero
		cout<<"Ingrese un numero ";
		cin>>numero;
		
	//Obtener digitos
		for(i=0;i<9;i++){
			digito=numero/divisor;
			arreglo[i]=digito;
			sustraendo = digito * divisor;
			numero = numero-sustraendo;
			divisor = divisor/10;
		}
			
	//Imprimir arreglo
		for(i=0;i<n;i++){
			cout<<arreglo[i]<<" ";
		} cout<<endl;
			
	//Eliminacion de un digito
		//Paso 1:Solicitar un digito a eliminar
			cout<<"Teclee un digito a eliminar ";
			cin>>digitoEliminar;
		//Paso 2:Buscar si se encuentra el digito en el teclado
			for(i=0;i<15;i++){
				if(arreglo[i]==digitoEliminar){
					//Corrimiento
						for(j=i;j<13;j++){
							arreglo[j]=arreglo[j+1];
						}	
				}
			}
	
	//Imprimir arreglo
		for(i=0;i<n;i++){
			cout<<arreglo[i]<<" ";
		} cout<<endl;	
	
	//Agregar un digito al inicio 
		cout<<"Ingrese un numero a agregar ";
		cin>>digitoAgregar;
		
		for(i=13;i>-1;i--){
			arreglo[i+1]=arreglo[i];
		}
		arreglo[0]=digitoAgregar;
		
	//Imprimir arreglo
		for(i=0;i<n;i++){
			cout<<arreglo[i]<<" ";
		} cout<<endl;	
	
	
	//Default
	return (0);
}
