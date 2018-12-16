//Ismael Flores Melendez
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

//Declaracion de variables
	//Bandera
		bool insert=true;
		bool con=true;
	//Variables
		char entrada=0; //Numero a ingresar
		int entradaAux = 0; //Validacion de continuacion
		int tamArr=0;  //Tama?o del arreglo
		int tamArrAct=0;  //Buscar el tama?o del arreglo
	//Arreglos
		//int numeros[tamArr];
	//Fors
		int iimp=0;
		int i=0; //Corrimiento de arreglo
		int tamArrAux=0;  //Auxiliar para el ciclo
	
//Impresiones
int imprimir(char impNum[]){  for(iimp=0;iimp<6;iimp++)  cout<<impNum[iimp]<<" "; }

//Principal
int main() {
	//Inicio
		//Inserccion de datos
			cout<<"Ingrese la cantidad de numeros a ingresar ";
			cin>>tamArr;
			tamArr=tamArr*2;
			char numeros[tamArr]={0};	
			cout<<"Ingrese los datos separados por un espacio ";
			for(i=0;i<tamArr/2;i++)	cin>>numeros[i];
	//Ciclo de insercciones
	do{
		//Regresamiento de variables
		con=true;
		entrada=0;
		tamArrAct=0;
		//Ingresar el numero a insertar
			cout<<"\nIngrese el numero a insertar ";
			cin>>entrada;
		//Corrimiento del arreglo en busqueda de posicion
			for(i=0;i<tamArr;i++){
				//Verificar si la entrada es validad
				if((numeros[i]>entrada)||(numeros[i]==entrada) ){  
					//Recorrer los datos a la derecha
					for(tamArrAux=tamArr;tamArrAux>i;tamArrAux--){  
						numeros[tamArrAux] = numeros[tamArrAux-1];
					}
					numeros[i]=entrada;  //Asignar el valor en su posicion
					i=tamArr; //Forzar el termino del ciclo
				}
				
			}
			
		//Imrpesion de salida
			cout<<"\n\nSu arreglo actual es: \n";
			imprimir(numeros);
		//Validaci?n de continuacion
			while (con==true){
				cout<<"\n\n?Desea agregar otro numero?  1.Si  2.No ";
				cin>>entradaAux;
				switch (entradaAux){
					case 1:
						for(i=0;i<tamArr;i++){
							if((numeros[i]==0)){
								tamArrAct=i;
								i=tamArr;
							}
						}
						if(tamArrAct==0){
							cout<<"\nLlenaste el arreglo, no puedes agregar mas\n";
							insert=false;
							con=false;
							cout<<"\n\nArreglo Final  ";
							imprimir(numeros);	
						}else{
							insert=true;
							con=false;
						}
						break;
					case 2:
						insert=false;
						con=false;	
						cout<<"\n\nArreglo Final  ";
						imprimir(numeros);	
						break;
					default:
						cout<<"\nIngrese un valor valido\n";
				}
			}
			
	}while(insert==true);
	
	//Salida
	cout<<"\n\n\nIsmael Flores Melendez\nAlgoritmo de Inserccion\n\n";
	system("pause");
	return 0;
}

