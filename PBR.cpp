#include "PBR.h"


int binarySearch(int data[], int low, int high, int chave)
{
	if (high >= low)
	{
		// Defini��o do meio do vetor
		int mid = low + (high - low) / 2;

		// Caso o elemento esteja presente no meio do vetor
		if (data[mid] == chave)
			return mid;

		// Caso o elemento seja menor do que o elemento do meio
		// Ele s� pode estar presente no subvetor da esquerda
		if (data[mid] > chave)
			return binarySearch(data, low, mid - 1, chave);

		// Caso ele seja maior do que o elemento do meio
		// Ele s� pode estar presente no subvetor da direita
		return binarySearch(data, mid + 1, high, chave);
	}

	// Caso o elemento n�o esteja presente no vetor
	// Ele ir� retornar -1
	return -1;
}