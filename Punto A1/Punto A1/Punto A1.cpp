#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	const int constanteTamano = 5;


	int vector1[constanteTamano];
	int vector2[constanteTamano];
	int vector3[constanteTamano];

	for (int i = 0; i < constanteTamano; i++) {
	
		cout << "ingrese numeros para el vector 1" << endl;
		cin >> vector1[i];

	
	}

	for (int i = 0; i < constanteTamano; i++) {

		cout << "ingrese numeros para el vector 2" << endl;
		cin >> vector2[i];


	}

	cout << "vector 1: ";

	for (int i = 0; i < constanteTamano; i++) {

		
		cout << vector1[i];
	}

	cout << endl << "vector 2: ";

	for (int i = 0; i < constanteTamano; i++) {


		cout << vector2[i];
	}

	for (int i = 0; i < constanteTamano; i++) {

		

		if (i % 2 == 0) {
		
			vector3[i] = vector2[i];

		}
		else 
		{
			vector3[i] = vector1[i];
		}



	}
	
	cout << endl << "vector 3: ";

	for (int i = 0; i < constanteTamano; i++) {


		cout << vector3[i] << ",";
	}


}
