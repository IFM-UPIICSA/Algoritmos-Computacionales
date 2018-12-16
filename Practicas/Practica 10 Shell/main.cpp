#include <iostream>
using namespace std;

void shell(int array[], int size)
{
 int i, j, intervalo, temp;
 intervalo = size/2;
 while (intervalo > 0) {
 for (i=intervalo; i < size; i++) {
 j = i;
 temp = array[i];
 while ((j >= intervalo) && (array[j - intervalo] > temp)) {
 array[j] = array[j - intervalo];
 j = j - intervalo;
 }
 array[j] = temp;
 }
 intervalo /= 2;
 }
}

int main (int argc, char * const argv[]) {
 int numeros[] = {504,88,513,62,908,171,898,277,654,427,150,510,612,675,750,704};
 /* Se muestra el arreglo original */
 for (int i = 0; i < 16; ++i) {
 cout << numeros[i] << " ";
 }
 cout << endl;
 shell(numeros, 16);
 /* Se muestra el arreglo ordenado */
 for (int i = 0; i < 16; ++i){
 cout << numeros[i] << " ";
 }
 cout << endl;
}
/*Autores
	Arvizu Vilchis Jesús Ulises
	Daniel de Jesús Valverde Quijano
	Carlos García Ponce
	Ismael FLores Melendez
*/