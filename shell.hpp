#pragma once

template<class T>

int shellsort(vector<T>& valores, int tamano, float a) {
	int x = 0;
	for (int gap = (tamano / 2); gap > 0; gap /= 2)
	{
		for (int i = gap; i < tamano; i += 1)
		{
			T temp = valores[i];
			int j;
			for (j = i; j >= gap && valores[j - gap] > temp; j -= gap) {
				valores[j] = valores[j - gap];
				x++;
			}
			valores[j] = temp;
		}
	}
	return x;
}