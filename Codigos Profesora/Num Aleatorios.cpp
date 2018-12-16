//  Se agrega la libreria <time.h> 
//  para usar la función para utilzar
// la hora de la computadora 

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
 
int main(){
	
	int aleatorioEntero=0;
	int i=0;
	float aleatorioDecimal= 0.0;
    // La instruccion srand establece el uso
	// del reloj de la computadora para generar
	// diferentes numeros aletorios 
	srand(time(NULL));
    
	
	/**************************************************/
	//GENERACION NUMEROS ALEATORIOS ENTEROS 
	/*************************************************/
	
	//
    // Problema 1:   Generar 10 numeros 
	//aleatorios que se encuentre entre los valores de 3 a 7
   	//      aleatorio = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    cout<<"\n\nRango 3 y 7 \n";	
    for(i = 0; i < 10; i++){
		    aleatorioEntero = 3+rand() % (7+1-3);
	        cout<<aleatorioEntero <<"  ";
    }
	
    // Problema 2:   Generar 10 numeros aleatorios que se encuentre entre los valores de 150 a 780
   	//     aleatorio = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
   	cout<<"\n\nRango 150 a 780 \n";	
    for(i = 0; i < 10; i++) {
		    aleatorioEntero = 150 + rand() % (780+1 - 150);
	        cout << aleatorioEntero << "  ";
    }
    
		
    // Problema 3:   Generar 10 numeros aleatorios que se encuentre entre los valores de 0 a 780
    //     aleatorio = rand() % (limite_superior +1 - limite_inferior) ;
    cout<<"\n\nRango 0 a 780 \n";	
    for(i = 0; i < 10; i++){
		    aleatorioEntero = rand()%(780);
        	cout << aleatorioEntero << "  ";
    }
 
 
 	/**************************************************/
	//GENERACION NUMEROS ALEATORIOS DECIMALES
	/*************************************************/
    // Problema 4:   Generar 10 numeros aleatorios que se encuentre entre 0 Y 0.780
    //     aleatorio = (rand() % (limite_superior +1 - limite_inferior))/100 ; 
    cout<<"\n\nRango 0 a 0.780 \n";	
    for(i = 0; i < 10; i++){
		    aleatorioDecimal = rand()%(780);
		    aleatorioDecimal = aleatorioDecimal /1000;
        	cout << aleatorioDecimal << "  ";
    }
 
 
     // Problema 5:   Generar 10 numeros aleatorios que se encuentre entre 0 Y 0.9
    //     aleatorio = (rand() % (limite_superior +1 - limite_inferior))/100 ; 
    cout<<"\n\nRango 0 a 0.9 \n";	
    for(i = 0; i < 10; i++){
		    aleatorioDecimal = rand()%(10);
		    aleatorioDecimal = aleatorioDecimal /10;
        	cout << aleatorioDecimal << "  ";
    }
    
	// Problema 6:   Generar 10 numeros aleatorios que se encuentre entre 0 Y 0.99999
    //     aleatorio = (rand() % (limite_superior +1 - limite_inferior))/100000 ; 
    cout<<"\n\nRango 0 a 0.009 \n";	
    for(i = 0; i < 10; i++){
		    aleatorioDecimal = rand()%(9999999);
		    aleatorioDecimal = aleatorioDecimal /10000000;
        	cout << aleatorioDecimal << "  ";
    }
 
    cout<<endl;
    system ("PAUSE");
}
