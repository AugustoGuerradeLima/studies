#include <iostream>
#include <sstream>
#include "Fatura.cpp"
#include "Fatura.hpp"
#include "ListaFatura.cpp"
#include "ListaFatura.hpp"
#include "avaliacao.hpp"

using namespace std;
int main(){
    ListaFatura lista;
    string entrada, s1, s2, s3;
    int condicao=1;
    while(condicao){
        getline(cin,entrada);
        stringstream transmicao(entrada);
        transmicao>>s1>>s2>>s3;
        if(entrada.empty())condicao=0;
        switch(entrada[0]){
            case 'a':{avaliacao_basica();}break;
            case 'f':{int id=stoi(s2); double valor=atof(s3.c_str());
            lista.insere_fatura(new Fatura(id, valor));}break;
            case 'p':{lista.imprimir_lista();}break;
            case 'r':{ref_Fatura primeira_fatura = lista.proxima_fatura();
            if(primeira_fatura)primeira_fatura->imprimir_dados();}break;
            default:break;
        }
    }
return(0);
}