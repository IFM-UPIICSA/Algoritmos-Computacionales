#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

	//Declaracion de variables
		//entradas
			int alumnoBuscar = 0;
		//banderas
			bool numList =true;
			int posicion = 0;
			bool buscar = true;
			int otro = 0;
			bool repetirBusqueda = true;
		//arreglos
			int tabla[9][6]={0};
		//fors
			int i=0, j=0;  //Uso de captura e impresion de numeros
			
//Imprimir salidas	
int imprimir(int imprimir[9][6], int pos){  
	for(j=0;j<6;j++){
		switch(j){
			case 0: cout<<"Numero de lista: "; break;
			case 1: cout<<"Asistencias: "; break;
			case 2: cout<<"Calificacion 1° Departamental: "; break;
			case 3: cout<<"Calificacion 2° Departamental: "; break;
			case 4: cout<<"Calificacion 3° Departamental: "; break;
			case 5: cout<<"Promedio: "; break;
		}
		cout<<tabla[posicion][j]<<" \n"; 
	}
}

//Funcion Principal
int main() {
	//Inicio de programa
		//Ingresar datos
		cout<<"Ingrese los datos de 9 alumnos\n";
		for(i=0;i<9;i++){
			cout<<"\n\nAlumno "<<(i+1)<<"\n";
			for(j = 0; j < 5; j ++){
				numList = true;
				while (numList == true){					
					switch(j){
						case 0: cout<<"Numero de lista: "; break;
						case 1: cout<<"Asistencias: "; break;
						case 2: cout<<"Calificacion 1° Departamental: "; break;
						case 3: cout<<"Calificacion 2° Departamental: "; break;
						case 4: cout<<"Calificacion 3° Departamental: "; break;
					}
					cin>>tabla[i][j]; 
					if (j == 0){
						if( (tabla[i][j] > 0 ) && ( tabla[i][j] < 41)){
							numList = false;
						}else{
							cout<<"El numero de lista debe ser estar entre 1 - 40\n";
						}
					}else{
						numList = false;
					}
					if(j == 4){
						tabla[i][j+1] = (int) ((tabla[i][j] + tabla[i][j-1] + tabla[i][j-2] )/3);
					} 
				}
			}
		}
		
		//Desarrollo
			//Ciclo de Busqueda
			while ( buscar == true ){
				//Regresar banderas
				repetirBusqueda = true;
				buscar = true;
				//Ingreso dell numero a buscar
				cout<<"\n\nIngrese el numero de lista a buscar: ";
				cin>>alumnoBuscar;
				
				//Busqueda
				for(i = 0; i < 9; i ++){
					if( tabla[i][0] == alumnoBuscar){
						posicion = i;
						buscar = false;
					}			
				}
				if (buscar  == false){
					//Imprimir datos
						cout<<"\n\nLa informacion del alumno es: \n";
						imprimir(tabla, posicion);
				}
				if(buscar == true){
					"\nNo se encontro al alumno";
				}
				
				while( repetirBusqueda == true ){
					cout<<"\nDesea buscar otro  1.Si  2.No :";
						cin>>otro;
						switch(otro){
							case 1:
								buscar = true;
								repetirBusqueda = false;
								break;
							case 2:
								buscar = false;
								repetirBusqueda = false;
								break;
								default:
									cout<<"Ingrese una opcion valida";
									repetirBusqueda = true;
						}
					}					
				}
						
		//Final
		

	//Salida
	cout<<"\n\n\nIsmael Flores Melendez\nMetodo Busqueda de una Tabla\n";
	system("pause");
	return 0;
}

