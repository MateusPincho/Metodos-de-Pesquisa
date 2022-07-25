#include "PesquisaBinaria.h"
//Construtor inicia vector sorteado
PesquisaBinaria::PesquisaBinaria(int vectorsize){
    size = (vectorsize>0 ? vectorsize : 10);
    srand (time (0)); // semeia utilizando a hora atual
    for (int i = 0; i < size; i++){   //Sorteia valores entre 10 a 99 para o vector
        data.push_back(10 + rand() % 90);
    }
    sort(data.begin(), data.end()); //Classifica os dados em ordem crescente
}
//Usa o metodo binario para retornar a posi��o do elemento
int PesquisaBinaria::busccabinaria(int chave) const {
    int low = 0; // extremidade baixa da �rea de pesquisa
    int high = size -1; //extremidade alta da �rea de pesquisa
    int middle = (low + high +1) /2; //elemento intermedi�rio

    int location = -1; //Retorna -1 se o elemento n�o for localizado
    do{
        displaySubElements(low,high); //Mostra os elementos no conjunto da pesquisa
        //Gera espa�o para alinhamento
        for(int i = 0; i< middle; i++){
            cout << "   ";
        }
        cout<<" * "<<endl; //Indica o meio atual
        if(chave == data[middle])
            location = middle; //A localiza��o � o meio atual
        else if(chave< data[middle]) // A chave � menor que o elemento do meio
            high = middle -1; //Elimina a metade mais baixa
        else //A chave � maior que o elemento do meio
            low = middle +1; //Elimina a metade mais baixa
        middle =(low+high+1)/2; //Recalcula o meio
    }while((low<=high)&& (location ==-1));
    return location; //Retorna a localiza��o da chave
    }
void PesquisaBinaria::displayElements() const {
    displaySubElements(0,size-1);
}
void PesquisaBinaria::displaySubElements(int low, int high) const{
    for (int i=0;i<low;i++){
        cout<<"   ";
    }
    for (int i= low; i<=high;i++){
        cout << data[ i ] << " ";
    }
    cout<<endl;
}
