#include <string>
#include <iostream>
#include <stdlib.h>     /* atof, atoi */
#include <vector>
#include "dni.hpp"

#include "bubble.hpp"
#include "heap.hpp"
#include "insertion.hpp"
#include "quick.hpp"
#include "shell.hpp"
/////////////////////////////////////////////////////////////////////////////////////////////////////////



int main() {

	

	int nvalores;
	int npruebas;
	float a;

	cout << "Introduzca el número de valores que desea: ";
	cin >> nvalores;

	cout << "Introduzca el número de pruebas que desea: ";
	cin >> npruebas;

	cout << "Introduzca la constante de reduccion alfa (shellsort): ";
	cin >> a;

	srand(time(NULL));
	vector<dni> banco;
	banco.resize(nvalores);

	int bubble_min = 1000000;
	int bubble_max = 1;
	int bubble_avg = 0;

	int heap_min = 1000000;
	int heap_max = 1;
	int heap_avg = 0;

	int insertion_min = 1000000;
	int insertion_max = 1;
	int insertion_avg = 0;

	int quick_min = 1000000;
	int quick_max = 1;
	int quick_avg = 0;

	int shell_min = 1000000;
	int shell_max = 1;
	int shell_avg = 0;

	int val = 0;
	int avg = 0;

	for (int i = 0; i < npruebas; i++) {
		banco.resize(0);
		banco.resize(nvalores);
		val = bubblesort<dni>(banco, nvalores);
		if (val <= bubble_min) {
			bubble_min = val;
		}
		else if (val >= bubble_max) {
			bubble_max = val;
		}

		avg += val;

	}

	bubble_avg = avg / npruebas;
	val = 0;
	avg = 0;

	for (int i = 0; i < npruebas; i++) {
		banco.resize(0);
		banco.resize(nvalores);
		val = heapsort<dni>(banco, nvalores);
		if (val <= heap_min) {
			heap_min = val;
		}
		else if (val >= heap_max) {
			heap_max = val;
		}

		avg += val;

	}

	heap_avg = avg / npruebas;
	val = 0;
	avg = 0;

	for (int i = 0; i < npruebas; i++) {
		banco.resize(0);
		banco.resize(nvalores);
		val = insertionsort<dni>(banco, nvalores);
		if (val <= insertion_min) {
			insertion_min = val;
		}
		else if (val >= insertion_max) {
			insertion_max = val;
		}

		avg += val;

	}

	insertion_avg = avg / npruebas;
	val = 0;
	avg = 0;

	for (int i = 0; i < npruebas; i++) {
		banco.resize(0);
		banco.resize(nvalores);
		val = 0;
		quicksort<dni>(banco, 0, banco.size() - 1, val);
		if (val <= quick_min) {
			quick_min = val;
		}
		else if (val >= quick_max) {
			quick_max = val;
		}

		avg += val;

	}
	
	quick_avg = avg / npruebas;
	val = 0;
	avg = 0;

	for (int i = 0; i < npruebas; i++) {
		banco.resize(0);
		banco.resize(nvalores);
		val = 0;
		val = shellsort<dni>(banco, banco.size() - 1, a);
		if (val <= shell_min) {
			shell_min = val;
		}
		else if (val >= shell_max) {
			shell_max = val;
		}

		avg += val;

	}

	shell_avg = avg / npruebas;


	cout << "########### INFORME ###########" << endl << endl;
	cout << "		min	avg	max	complejidad" << endl;
	cout << "bubble:		" << bubble_min << "	" << bubble_avg << "	" << bubble_max << "	" << "O(n^2)" << endl;
	cout << "heap:		" << heap_min << "	" << heap_avg << "	" << heap_max << "	" << "O(nlogn)" << endl;
	cout << "insertion:	" << insertion_min << "	" << insertion_avg << "	" << insertion_max << "	" << "O(n^2)" << endl;
	cout << "quick:		" << quick_min << "	" << quick_avg << "	" << quick_max << "	" << "O(nlogn)" << endl;
	cout << "shell:		" << shell_min << "	" << shell_avg << "	" << shell_max << "	" << "O(n^2)" << endl;


}

