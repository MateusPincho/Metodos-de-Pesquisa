#ifndef PesquisaBinaria_H
#define PesquisaBinaria_H
#endif // PesquisaBinaria_H

// Classe que cont�m um vetor de inteiros aleat�rios e uma fun��o
// que utiliza a pesquisa bin�ria para localizar um inteiro.
#include <vector>
class PesquisaBinaria{
private:
    int size; //Tamanho do vector
    vector<int> data; //vector que ser� gerado com n�meros aleatorios
    void displaySubElements(int,int) const; //M�todo para mostrar elementos restantes
public:
    PesquisaBinaria(int); //Construtor, atribui numeros ao vector
    int busccabinaria(int) const; //M�todo de busca
    void displayElements() const; //M�todo para mostrar os elementos
 };
