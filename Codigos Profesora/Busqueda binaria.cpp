
// Busqueda binaria 23/08/18

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main (){

// Declaración de variables

	int buscar=0, n=10, inicio=0, ini = 0, mitad=0, i=0, bandera=0, final=9;
	int arreglo[10] = {0};
	int j=0, respuesta = 0;

// Verificar la version que esta corriendo
	cout<<"version 2\n";

// Captura de datos en el arreglo

	for(i=0; i<10; i++){
		cout<<"Teclee un numero a almacenar en el arreglo \n";
		cin>>arreglo[i];
	}

// Imprimir datos contenidos en el arreglo
	for(i=0; i<10; i++){
		cout<<arreglo[i]<<"\t";
	}

// For infinito
	for (; j == 0 ;){

// Captura del numero a buscar en el arreglo
		cout<<"\n\nTeclee un numero a buscar.\n";
		cin>>buscar;
	    cout << buscar;
// Metodo de busqueda binaria
		inicio = 0;
		ini = 0;
		final = 9;
		bandera = 0;
		n=10;
		respuesta = 0;
		mitad=n/2;
	// Validación que el numero se encuentre dentro del arreglo
		if (arreglo [ini] <= buscar && buscar <= arreglo [final] ){
    		// Busqueda
    		cout<<"\nel numero esta en el rango*****\n";
    		system ("pause");
    //		n != mitad
			for(i=0; inicio!=mitad; i++){
				if(arreglo[mitad] == buscar){
					cout<<"Numero  "<<arreglo[mitad]<<" se encontro, en la posicion  "<<mitad<<"\n";
					cout<<"inicio = "<<inicio<<"  mitad ="<<mitad << " n es "<< n<<endl;
					inicio= n = mitad;
					bandera=1;
					cout<<"\n***estoy en igual***\n";
					cout<<"inicio = "<<inicio<<"  mitad ="<<mitad << " n es "<< n<<endl;
					system("pause");
				}
	    		else{
					if(arreglo[mitad] > buscar){
						n = mitad;
						mitad = n/2;
						cout<<"\n***estoy en la izquierda***\n";
                        cout<<"inicio = "<<inicio<<"  mitad ="<<mitad << " n es "<< n<<endl;
						system ("pause");
					}
					else{
						inicio = mitad;
						mitad = inicio + ((n-mitad)/2);
						cout<<"\n***estoy en la derecha***\n";
						cout<<"inicio = "<<inicio<<"  mitad ="<<mitad<< " n es "<< n<<endl;
						system ("pause");
	    			}
				}
			}
			if (inicio==mitad){
                if (arreglo[mitad]==buscar){
                    bandera=1;
					cout<<"\n***estoy en igual***\n";
                }
			}
			if(bandera == 0){
			   cout<<"No se encontro el numero buscado en el arreglo \n";
			}
		}

		else
		{
			cout<<"Numero fuera del rango de datos capturados \n";
		}
		cout<< "Para continuar la busqueda teclee cualquier numero.\n Para terminar teclee un 1 : ";
		cin>> respuesta;
		if (respuesta == 1){
			j = 1;
		}
	}
    system("pause");
	return(0);
}

