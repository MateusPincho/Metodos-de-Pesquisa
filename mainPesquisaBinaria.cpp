#include <iostream>
#include <iomanip>
#include <locale>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
#include "PesquisaBinaria.cpp"
int main(){
    setlocale(LC_ALL,"Portuguese");
    int chave ;
    int posicao;
    PesquisaBinaria vetor_busca(15);
    vetor_busca.displayElements();

    cout<<"Insira um inteiro qualquer para ser pesquisado, -1 para sair"<<endl;
    cin>>chave;
   while(chave!=-1){
        posicao = vetor_busca.busccabinaria(chave);
        if (posicao == -1)
            cout<<("Elemento n�o encontrado")<<endl;
        else
            cout<<"A posi��o do elemento �: "<<posicao<<endl;
        cout<<"Insira um inteiro qualquer para ser pesquisado, -1 para sair"<<endl;
        cin>>chave;
    }
    return (0);
}
