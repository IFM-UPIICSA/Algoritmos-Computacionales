#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <fstream>
#include <time.h>
using namespace std;

//Esctructura 'Entrada' para almacenar temporalmente los datos del archivo
struct Entrada {
		int valor;  //Cada elemento almacenado
} entrada;

//Declaracion de variables
	//temporales
		int temp = 0;  //Ayudara al momento de mover los elementos
		
	//fors
		int i=0, j=0;   //Recorrimiento del arreglo
		
	//archivo
		int elementosArchivo=0;  //Cuenta los elementos del archivo
				
	//arreglo
		int numeros[10000];  //Almacenamiento de los numeros
		string nombrearchivo;  //proporciona un nombre para el archivo
		clock_t t_ini, t_fin;  //Contadores de tiempo
		double secs;  //Salida de tiempos
	
int LeeArchivo();   //Declara el metodo
int Algoritmo2();   //Declara el metodo

int LeeArchivo(){
	FILE *archivo1;
    string valorInt;

    printf("\n Teclea el nombre del archivo:   ");
	cin >> nombrearchivo;
	nombrearchivo+= ".txt";	// le agregarmos la extension ".txt"

	archivo1 = fopen(nombrearchivo.c_str(), "r"); // Abrimos archivo

	if(archivo1== NULL ){
		printf(" No se puede abrir el archivo ");
		exit(1);
	}
	else{
		printf(" Se abrio el archivo correctamente %s\n ", nombrearchivo.c_str() );
    }
    elementosArchivo=0;
    for (int i=0; !feof(archivo1); i++) {
        fscanf (archivo1, "%i", &entrada.valor);
        numeros[i]=entrada.valor;
        elementosArchivo++;
	}

	printf("El numero de elementos es:  %i\n",elementosArchivo);
	fclose(archivo1);
	return (0);
}

Burbuja(){
   //Corridas
		for(i=0;i<elementosArchivo-1;i++){
			//Corrimiento de cada corrida sobre todos los numeros
			for(j=1;j<elementosArchivo;j++){
				//Posibles casos
				if(numeros[j-1]>numeros[j]){
					temp=numeros[j-1];
					numeros[j-1]=numeros[j];
					numeros[j]=temp;
				}	
			}
		}
}

main(){
	//Lectura del archivo
    LeeArchivo();

	// Inicia area de medicion de tiempo
        t_ini = clock();  // almacena tiempo inicial

	//Llmar a metodo 'Burbuja'
        Burbuja();

	// Termina area de medicion de tiempo
        t_fin = clock(); // almacena tiempo final
        
    system("pause");
	
	//Conversion de diferencia de tiempos	
        secs = (double)(t_fin - t_ini) / (double)CLOCKS_PER_SEC; // determina los milisegundo utilizados
        printf("%.16g milisegundos\n", secs * 1000.0);   // muestra el tiempo utilizado
        
	system("pause");
	
	//Mostrar Ordenamiento
		cout<<"\nResultado del Ordenamiento\n";
		for(i = 0; i < elementosArchivo; i++){
			cout<<i<<" "<<numeros[i]<<"\n";
		}    
	
	system("pause");
	
	//Salida
	cout<<"\n\n\nAutor Original: Edna Martha Miranda Chavez\nEditor: Ismael Flores Melendez\nMetodo Burbuja por Archivo\n\n";
	system("pause");
	return 0;
}




