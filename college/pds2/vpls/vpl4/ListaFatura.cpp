#include <iostream>
#include "ListaFatura.hpp"
#include "Fatura.hpp"
using namespace std;
Celula::Celula(ref_Fatura dado):_dado(dado),_proximo(nullptr),_anterior(nullptr){};
ListaFatura::ListaFatura():_inicio(nullptr),_fim(nullptr){};
void ListaFatura::insere_Fatura(ref_Fatura dado){
    ref_Celula nova_Celula = new Celula(dado);//construtor da nova Celula
    if(_inicio==nullptr){//verifica se a lista esta vazia
        _inicio = nova_Celula; 
        _fim = nova_Celula;
    }
    else if(nova_Celula->_dado->getValor() > _inicio->_dado->getValor()){//verifica se a Celula sera o inicio
        nova_Celula->_proximo = _inicio;
        _inicio->_anterior = nova_Celula;
        _inicio = nova_Celula;
    }
    else{
        ref_Celula i = _inicio;//cria uma Celula para iterar pela lista
        while(nova_Celula->_dado->getValor() < i->_dado->getValor()){
            i = i->_proximo;
            if(i == nullptr){//verifica se chegou no final da lista
                _fim->_proximo = nova_Celula;
                nova_Celula->_anterior = _fim;
                _fim = nova_Celula;
                return;//sai da funcao para nao executar o codigo apos a iteracao
            }
        }
        nova_Celula->_anterior = i->_anterior;//insere a nova Fatura na posicao
        nova_Celula->_proximo = i;
        i->_anterior = nova_Celula;
    }
}
ref_Fatura ListaFatura::proxima_Fatura(){
    if(_inicio==nullptr)return nullptr;
    ref_Celula resultado = _inicio;
    _inicio->_proximo->_anterior = nullptr;
    _inicio = _inicio->_proximo;
    return resultado->_dado;
}
void ListaFatura::imprimir_lista(){
    ref_Celula i = _inicio;
    while(i->_proximo!=nullptr){
        i->_dado->imprimir_dados();
        i = i->_proximo;
    }
}
