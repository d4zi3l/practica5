#pragma once

template<class T>

int insertionsort(vector<T>& valores, int tamano) {
	int x=0;
	int i, j;
	T key;
	for (i = 1; i < tamano; i++)
	{
		key = valores[i];
		j = i - 1;

		/* Move elements of valores[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && valores[j] > key)
		{
			valores[j + 1] = valores[j];
			j = j - 1;
			x++;
		}
		valores[j + 1] = key;
	}
	return x;
}