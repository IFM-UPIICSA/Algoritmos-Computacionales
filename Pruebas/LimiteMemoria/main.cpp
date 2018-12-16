#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;
	
int main() {
	int numero=0;
	double Numeros [1000000] = {NULL};
	
	cout<<"Ingrese un numero ";
	cin>>numero;
	cout<<numero;
	cout<<"\n";
	system("pause");
	
	//Impresion
	for(int i=0; i<1000000; i++){
		cout<<Numeros[0]<<" ";
	}
	cout<<"\n\n\n";
	
	system("pause");
	return 0;
}
