#ifndef Pesquisaalfabetica_H
#define Pesquisa
class Pesquisaalfabetica {
private:
    vector<string> lista={"artista", "achado", "avisado","musico", "busca","chave","origem","horrivel","bonito","feio","feito"};
public:
    static bool ordenar_nome(string,string);
    int pesquisa(string);
    void display(int,int);
};
#endif // Pesquisaalfabetica_H
