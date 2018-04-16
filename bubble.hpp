#pragma once

template<class T>

int bubblesort(vector<T>& valores, int tamano) {
	int x=0;
	int i, j;
	for (i = 0; i < tamano - 1; i++) {
		for (j = 0; j < tamano - i - 1; j++) {
			
			if (valores[j] > valores[j + 1]) {
				swap(valores[j], valores[j + 1]);
				x++;
			}
		}
	}

	return x;
}
