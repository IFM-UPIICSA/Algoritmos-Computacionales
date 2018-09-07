#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

// Flores Melendez Ismael

//Declaracion de variables
	//Mensaje
		char menOri[20] = {0};
		//char menOri[20]={'s','o','s','p','e','c','h','o','s','o',' ','u','b','i','c','a','d','o'};
		char menCif[20]={0};
	//For
		int i=0,j=0,k=0;
		
	//temporales
		char temp1, temp2;
		
	//tamano
		int n=0, lugar=0;
	
char imprimir(char mensaje[20]){
	for(k=0;k<n;k++){
		cout<<mensaje[k]<<" ";
	} cout<<"\n";
	return 0;
}	

char buscarBlanco(char mensaje[20]){
	for(i=lugar;i<20;i++){
		if(mensaje[i]==0){
			n=i;
			i=20;
		}
	}
}

int main() {
	
	//Ingresar texto
		cout<<"Ingrese el mensaje a cifrar: ";
	//Almacenar texto en arreglo
		fflush(stdin);
		gets(menOri);
		fflush(stdin);
	//Definir el tamaño del la entrada
		buscarBlanco(menOri);
	//Imprimir entrada
		cout<<"\nMensaje de entrada separado por caracteres: ";
		imprimir(menOri);
	//Copiar mensaje orignal
		for(i=0;i<n;i++){
			if(menOri[i]!=0){
				menCif[i]=menOri[i];
			}
		}
		
	//Corrimiento a la izquierda
		cout<<"\nEliminacion de vocales\n";
		//Ciclo for para recorr el arreglo
			for(i=0;i<n;i++){
				//Verificar la existencia de vocales
				if( (menCif[i]=='a') || (menCif[i]=='e') || (menCif[i]=='i') || (menCif[i]=='o') || (menCif[i]=='u') ){
					//Imprimir salida
						imprimir(menCif);
					for(j=i;j<n;j++){
						menCif[j]=menCif[j+1];
					}
				}	
			}
		//Imprimir menesaje cifrado
			imprimir(menCif);
		
	//Cambiar la primera letra con la ultima
		//Buscar el largo del arreglo
			buscarBlanco(menCif);
		cout<<"\nCambio de primer y ultimo caracter\n";
		//Realizar el cambio de letras utilizando variables temporales 
			temp1 = menCif[0];
			menCif[0] = menCif[n-1];
			menCif[n-1] = temp1;
		//Imprimir menesaje cifrado
			imprimir(menCif);
	
	//Intercambiar las letras de enmedio
		cout<<"\nCambio de caracteres de enmedio \n";
		//Realizar el cambio de letras utilizando variables temporales
			temp1 = menCif[n/2];
			menCif[n/2] = menCif[ (n/2)+1 ];
			menCif[ (n/2)+1 ] = temp1;
		//Imprimir menesaje cifrado
			imprimir(menCif);
		
	//Ultimas Salidas
		//Mensaje Original
			cout<<"\n\nMensaje Original: ";
			cout<<menOri;
		//Mensaje Cifrado
			cout<<"\n\nMensaje Cifrado: ";
			cout<<menCif;
		//Derechos de autor	
			cout<<"\n\nDerechos de Copyrigth UPIICSA  "<<"ISMAEL FLORES MELENDEZ";
	return 0;
}
