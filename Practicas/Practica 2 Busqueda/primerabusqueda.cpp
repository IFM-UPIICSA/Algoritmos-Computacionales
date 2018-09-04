#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

//Ismael Flores Meléndez

int main() {
	//Declaracion de array
	int numerosRandom[10];
	//Generacion de numeros aleatorios dentro del array
	for (int i=0;i<10;i++){
		numerosRandom[i] = rand()%101;
		cout<<numerosRandom[i]<<"\n";
	}
	
	return 0;
}
