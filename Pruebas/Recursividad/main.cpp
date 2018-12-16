#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

//Funcion prototipada
	int numero = 0;
	int funSuma(int dato);
	int funSuma(int dato){
		if (dato<100000){
			dato++, numero++;
			cout<<"Dato:"<<dato<<" ";
			funSuma(dato);
			cout<<"Dato Despues:"<<dato<<" ";
		}
			return (numero);
	}

//Funcion Principal
int main() {
	//Inicio de programa
		int datoini = 0, resultado = 0;
		resultado = funSuma(datoini);
		cout<<"\nNumero de repeticiones "<<resultado;

	//Salida
		cout<<"\n\n\nIsmael Flores Melendez\nRecursividad\n";
		system("pause");
		return 0;
}

