#include <iostream>
#include <iomanip>
#include <locale>
#include <vector>
#include <algorithm>

using  namespace std;
#include "Pesquisaalfabetica.cpp"
int main(){
    setlocale(LC_ALL,"Portuguese");
    string chave;
    int retorno;
    Pesquisaalfabetica teste;
    cout<<"Chave para ser pesquisada"<<endl;
    cin>>chave;
    retorno = teste.pesquisa(chave);
    cout<<"A posicao é "<<retorno<<endl;
}
