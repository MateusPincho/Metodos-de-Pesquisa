#include "Pesquisaalfabetica.h"


bool Pesquisaalfabetica::ordenar_nome(string A, string B){
    if(A < B){
        return true;
    }
    return false;
}
void Pesquisaalfabetica::display(int low,int high){
    for(int i=low;i<=high;i++){
        cout<<" "<<lista[i];
    }
}
int Pesquisaalfabetica::pesquisa(string chave){
    sort(lista.begin(),lista.end(),ordenar_nome);

    int low = 0; // extremidade baixa da �rea de pesquisa
    int high = lista.size() - 1; // extremidade alta da �rea de pesquisa
    int middle = ( low + high + 1 ) / 2; // elemento intermedi�rio
    int location = -1; // valor de retorno; -1 se n�o localizado
    do{
        display(low,high);
        cout<<endl;
        if(chave==lista[middle])
            location = middle;
        else if(chave<lista[middle])
            high = middle -1;
        else
            low = middle +1;
        middle = (low+high+1)/2;
    }while((location==-1)&&(low<=high));
    return location;
}
