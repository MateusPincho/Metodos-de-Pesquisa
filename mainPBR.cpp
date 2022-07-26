#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

#include "PBR.cpp"
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // Declaração do vetor
	int chave;
	int n = sizeof(data) / sizeof(data[0]);

	for (int i=0; i<10; i++){
	cout << data[i] << "  " ; //Exibição dos elementos do vetor
	}
	
	cout << endl;
	cout << "Insira o valor a ser pesquisado: ";
	cin >> chave;

	int result = binarySearch(data, 0, n - 1, chave);

	(result == -1)
	? cout << "Elemento não está no vetor"
		   : cout << "Elemento está presente no índice: " << result;


	return 0;
}