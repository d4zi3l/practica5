#pragma once

template <class T>

void quicksort(vector<T>& valores, int low, int high, int& x) {

	if (low < high)
	{	
		
		/* pi is partitioning index, valores[p] is now
		at right place */
		int pi = partition(valores, low, high, x);

		// Separately sort elements before
		// partition and after partition
		quicksort(valores, low, pi - 1, x);
		quicksort(valores, pi + 1, high, x);
	}
}

template<class T>
int partition(vector<T>& valores, int low, int high, int& x)
{
	T pivot = valores[high];    // pivot
	int i = (low - 1);  // Index of smaller element

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (valores[j] <= pivot)
		{
			x++;
			i++;    // increment index of smaller element
			swap(valores[i], valores[j]);
		}
	}
	swap(valores[i + 1], valores[high]);
	return (i + 1);
}