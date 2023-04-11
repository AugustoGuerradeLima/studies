#include <iostream>
#include "ListaFatura.hpp"
#include "Fatura.hpp"
using namespace std;
celula::celula(ref_fatura dado):_dado(dado),_proximo(nullptr),_anterior(nullptr){};
lista_fatura::lista_fatura():_inicio(nullptr),_fim(nullptr){};
void lista_fatura::insere_fatura(ref_fatura dado){
    ref_celula nova_celula = new celula(dado);//construtor da nova celula
    if(_inicio==nullptr){//verifica se a lista esta vazia
        _inicio = nova_celula; 
        _fim = nova_celula;
    }
    else if(nova_celula->_dado->getValor() > _inicio->_dado->getValor()){//verifica se a celula sera o inicio
        nova_celula->_proximo = _inicio;
        _inicio->_anterior = nova_celula;
        _inicio = nova_celula;
    }
    else{
        ref_celula i = _inicio;//cria uma celula para iterar pela lista
        while(nova_celula->_dado->getValor() < i->_dado->getValor()){
            i = i->_proximo;
            if(i == nullptr){//verifica se chegou no final da lista
                _fim->_proximo = nova_celula;
                nova_celula->_anterior = _fim;
                _fim = nova_celula;
                return;//sai da funcao para nao executar o codigo apos a iteracao
            }
        }
        nova_celula->_anterior = i->_anterior;//insere a nova fatura na posicao
        nova_celula->_proximo = i;
        i->_anterior = nova_celula;
    }
}
ref_fatura lista_fatura::proxima_fatura(){
    if(_inicio==nullptr)return nullptr;
    ref_celula resultado = _inicio;
    _inicio->_proximo->_anterior = nullptr;
    _inicio = _inicio->_proximo;
    return resultado->_dado;
}
void lista_fatura::imprimir_lista(){
    ref_celula i = _inicio;
    while(i->_proximo!=nullptr){
        i->_dado->imprimir_dados();
        i = i->_proximo;
    }
}