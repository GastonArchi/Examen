#include "pch.h"
#include <iostream>
#include <sstream>
using namespace std;


int factorial(int numero) {

	int resultado = 1;
	int mult = 1;
	int contador = 0;

  do {
	  resultado = resultado * mult;

	  mult++;
	  contador++;
	
  }
  while (contador != numero);

  contador = 0;

  return resultado;
}

int main() {
	int numero;
	do {
		cout << "ingrese el numero del cual quiere sacar el factorial, o ingrese un numero negativo para terminar el programa." << endl;
		cin >> numero;

		if (numero > 0) {

			int resultado = factorial(numero);

			cout << "el factorial del numero ingresado es : " << resultado << endl;			

		}
	} while (numero > 0);
}

