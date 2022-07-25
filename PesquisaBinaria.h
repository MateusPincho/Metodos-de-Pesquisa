#ifndef PesquisaBinaria_H
#define PesquisaBinaria_H
#endif // PesquisaBinaria_H

// Classe que contém um vetor de inteiros aleatórios e uma função
// que utiliza a pesquisa binária para localizar um inteiro.
#include <vector>
class PesquisaBinaria{
private:
    int size; //Tamanho do vector
    vector<int> data; //vector que será gerado com números aleatorios
    void displaySubElements(int,int) const; //Método para mostrar elementos restantes
public:
    PesquisaBinaria(int); //Construtor, atribui numeros ao vector
    int busccabinaria(int) const; //Método de busca
    void displayElements() const; //Método para mostrar os elementos
 };
