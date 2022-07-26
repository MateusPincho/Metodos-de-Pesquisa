#include "PBR.h"


int binarySearch(int data[], int low, int high, int chave)
{
	if (high >= low)
	{
		// Definição do meio do vetor
		int mid = low + (high - low) / 2;

		// Caso o elemento esteja presente no meio do vetor
		if (data[mid] == chave)
			return mid;

		// Caso o elemento seja menor do que o elemento do meio
		// Ele só pode estar presente no subvetor da esquerda
		if (data[mid] > chave)
			return binarySearch(data, low, mid - 1, chave);

		// Caso ele seja maior do que o elemento do meio
		// Ele só pode estar presente no subvetor da direita
		return binarySearch(data, mid + 1, high, chave);
	}

	// Caso o elemento não esteja presente no vetor
	// Ele irá retornar -1
	return -1;
}