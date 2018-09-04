#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

/*
	Ismael Flores Meléndez
	Busqueda Secuencial

*/

//Declaración de variables
	//Arreglos
		int numeros[100]= {
		8940, 7646, 4297, 4875, 1601, 9166, 9740, 6988, 907, 8589, 
		8448, 8656, 7923, 8293, 686, 5092, 2719, 5281, 2460, 4020, 
		2592, 8699, 6206, 7649, 375, 9312, 15, 1057, 4138, 6609, 
		3521, 2113, 1522, 2318, 1347, 3020, 7039, 4516, 6067, 9238, 
		3722, 3278, 3178, 335, 7218, 2327, 8043, 462, 2906, 2756, 
		8437, 7444, 4315, 9587, 9190, 2705, 8612, 5522, 6645, 1599, 
		4481, 6443, 178, 6758, 12, 1142, 4745, 8759, 7449, 5592, 
		9332, 6172, 7171, 9834, 5660, 7846, 9149, 2275, 8843, 2424, 
		1740, 4724, 3684, 5517, 4366, 4269, 2049, 8641, 9127, 2008, 
		2097, 1191, 59, 9247, 9534, 4679, 3532, 3842, 7376, 4302};
	//For
	 	int i=0;
	//Numero a buscar
		int buscar=0;
	//Bandera
		bool encontro=false;

//Metodo Imprimir para reutilizar codigo
int imprimir(int cadena[]){
	for(i=0; i<100;i++){
		cout<<cadena[i]<<" ";
		if(((i%10)==0)&&(i!=0)){
			cout<<"\n";
		}
	}
	cout<<"\n";
}


int main() {
	//Imprimir cadena
	imprimir(numeros);
	//Recibir dato a buscar
	cout<<"\nIngrese el numero que desea buscar ";
	cin>>buscar;
	//Algortimo de busqueda secuencial
	
	for(i=0; i<100;i++){
		if( numeros[i]==buscar ){
			cout<<"Numero "<<buscar<<" encontrado en la posicion "<<(i+1);
			cout<<"\nEl numero de ciclos fueron "<<(i+1);
			i=100;
			encontro=true;
		}else{
			encontro=false;
		}	
	}
	
	if(encontro==false)
		cout<<"El numero "<<buscar<<" no se encontro en el arreglo";
	
	return 0;
}
