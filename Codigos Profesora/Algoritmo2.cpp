// Autores: Edna Martha Miranda Chávez
//          Sergio Fuenlabrada Velázquez
//
//                       EJERCICIO 2
//
// Los datos de entrada los toma de un archivo guardado en el mismo directorio que el programa,
// esto se realizo con el objetivo de que en las pruebas no se tecleen todas las veces
// los datos de entrada
//

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <string>

using namespace std;
struct Entrada {
		int valor;
} entrada;

int i=0, j=0;
int a[10000];
int n=0;
int c;
int inf, sup;
int temp;
int si;
int LeeArchivo();
int Algoritmo2();
clock_t t_ini, t_fin;
double secs;

string nombrearchivo;

int LeeArchivo(){
	FILE *archivo1;
    string valorInt;

    printf("\n Teclea el nombre del archivo:   ");
	cin >> nombrearchivo;
	nombrearchivo+= ".txt";						 		// le agregarmos la extension ".txt"

	archivo1 = fopen(nombrearchivo.c_str(), "r");		        // Abrimos archivo

	if(archivo1== NULL ){
		printf(" No se puede abrir el archivo ");
		exit(1);
	}
	else{
		printf(" Se abrio el archivo correctamente %s\n ", nombrearchivo.c_str() );
    }
    n=0;
    for (int i=0; !feof(archivo1); i++) {
        fscanf (archivo1, "%i", &entrada.valor);
        a[i]=entrada.valor;
        n++;
	}

	printf("valor de n es:  %i\n",n);
	fclose(archivo1);
	return (0);
}


Algoritmo2(){
    inf=1; sup=n;

    while (sup >= inf){
        i=(inf+sup) / 2;
        if (a[i] == c){
            printf("encontre valor en i %i y c %i \n", i,c);
            return i;
        }
        else
            if (c < a[i]){
                sup = i-1;
            }
            else{
                inf =i+1;
            }
    }

    return (0);
}


main(){
    si=1;
    LeeArchivo();
    do{
	printf("Valor a buscar: ");
	cin >> c;
// Inicia area de medicion de tiempo
        t_ini = clock();                        // almacena tiempo inicial

        Algoritmo2();

        t_fin = clock();						// almacena tiempo final
// Termina area de medicion de tiempo
        secs = (double)(t_fin - t_ini) / (double)CLOCKS_PER_SEC; // determina los milisegundo utilizados
        printf("%.16g milisegundos\n", secs * 1000.0);   // muestra el tiempo utilizado
        if (a[i]==c){
            printf("Encontre valor a buscar %i en la localidad  %i\n", c, i);
        }
        else {
            printf("No encontre valor a buscar %i\n", c, i);
        }
        system("pause");
        printf("Deseas buscar otro dato (Si=1, NO=0) ");
        cin >> si;
    }while(si==1);
    return(0);
}



