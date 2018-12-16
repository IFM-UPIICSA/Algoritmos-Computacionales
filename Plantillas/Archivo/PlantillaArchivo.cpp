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
			
	//fors
		int i=0, j=0;  //Recorrimiento del arreglo
		
	//archivo
		int numElementos=0;  //Cuenta los elementos del archivo

	//arreglo
		int numeros[10000]; //Almacenamiento de los numeros
		int numerosCopia[10000]; //Copia para almacenar el arreglo incicial por si se desea imprimir
		string nombrearchivo;  //proporciona un nombre para el archivo
		clock_t t_ini, t_fin;  //Contadores de tiempo
		double secs;  //Salida de tiempos

	//banderas
		int si;  //Continuacion de busqueda
	
int LeeArchivo();   //Declara el metodo
int Algoritmo();   //Declara el metodo

int LeeArchivo(){
	FILE *archivo1;

    printf("\n Teclea el nombre del archivo:   ");
	cin >> nombrearchivo;
	nombrearchivo+= ".txt";						 		// le agregarmos la extension ".txt"

	archivo1 = fopen(nombrearchivo.c_str(), "r");		        // Abrimos archivo

	if(archivo1== NULL ){
		printf(" No se puede abrir el archivo ");
		exit(1);
	} else{
		printf(" Se abrio el archivo correctamente %s\n ", nombrearchivo.c_str() );
    }
    numElementos=0;
    for (int i=0; !feof(archivo1); i++) {
        fscanf (archivo1, "%i", &entrada.valor);
        numeros[i]=entrada.valor;
        numElementos++;
	}
	printf("El numero de elementos son:  %i\n",numElementos);
	fclose(archivo1);
	return (0);
}

Algoritmo(){

    return (0);
}

main(){
    si=1;  //Regresar bandera
    LeeArchivo();  //Lectura del archivo
    do{ //Inicio del do while

    //Impresion y copia del arreglo original
    for(i = 0; i < numElementos; i ++){
    	numerosCopia[i] = numeros[i];
    	cout<<i<<" "<<numeros[i]<<"\n";
    }

	// Inicia area de medicion de tiempo
        t_ini = clock();  // almacena tiempo inicial

	//Llmar a metodo 'Algortmo'
        Algoritmo();

	// Termina area de medicion de tiempo
        t_fin = clock(); // almacena tiempo final
        
         system("pause"); //Pausa para posible salida del algoritmo

	//Conversion de diferencia de tiempos	
         // Determina los milisegundo utilizados
        secs = (double)(t_fin - t_ini) / (double)CLOCKS_PER_SEC; 
        printf("%.16g milisegundos\n", secs * 1000.0);   // muestra el tiempo utilizado
       
        system("pause");  //Para para posible salida o impresion de datos
       	
       	//Salida de arreglo original
        cout<<"\n\nArreglo Orignal:\n";
        for(i = 0; i < numElementos; i ++){
    		cout<<i<<" "<<numerosCopia[i]<<"\n";
    	}

    	system("pause");  //Para la diferenciación entre ambos

		//Salida de arreglo ordenado
        cout<<"\n\nArreglo Ordenado:\n";
        for(i = 0; i < numElementos; i ++){
    		cout<<i<<" "<<numeros[i]<<"\n";
    	}    	

		system("pause");  //Para la captura de entrada interrumpida

        printf("\nDeseas buscar otro dato (Si=1, NO=0): ");
        cin >> si;
    }while(si==1);
    
	//Salida
	cout<<"\n\n\nAutor Original: Edna Martha Miranda Chavez\n
	      Editor: Ismael Flores Melendez\nMetodo Burbuja por Archivo\n";
	system("pause");
	return 0;
}