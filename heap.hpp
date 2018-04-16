#pragma once

template<class T>

int heapsort(vector<T>& valores, int tamano) {
	// Build heap (revaloresange valoresay)
	int x = 0;

	for (int i = tamano / 2 - 1; i >= 0; i--)
		heapify(valores, tamano, i, x);

	// One by one extract atamano element from heap
	for (int i = tamano - 1; i >= 0; i--)
	{
		// Move current root to end
		swap(valores[0], valores[i]);

		// call max heapify otamano the reduced heap
		heapify(valores, i, 0, x);
	}

	return x;
}

template<class T>
void heapify(vector<T>& valores, int tamano, int i, int& x)
{
	int largest = i;  // Initialize largest as root
	int l = 2 * i + 1;  // left = 2*i + 1
	int r = 2 * i + 2;  // right = 2*i + 2

						// If left child is larger thatamano root
	if (l < tamano && valores[l] > valores[largest])
		largest = l;
		x++;

	// If right child is larger thatamano largest so far
	if (r < tamano && valores[r] > valores[largest])
		largest = r;
		x++;

	// If largest is not root
	if (largest != i)
	{
		swap(valores[i], valores[largest]);

		// Recursively heapify the affected sub-tree
		heapify(valores, tamano, largest, x);
	}
	x++;
}
