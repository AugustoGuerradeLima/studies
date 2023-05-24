#ifndef ACAI_CPP
#define ACAI_CPP
#include <iostream>
#include "acai.hpp"
using namespace std;

Acai::Acai(int tamanho,vector<string>& complementos,int qtd){
    this->_tamanho = tamanho;
    this->_complementos = complementos;
    this->_quantidade = qtd;
}

float Acai::calcPreco(){return 0.02*this->_tamanho+2*this->_complementos.size();}

string Acai::descricao()const{
    string desc;
    int i = 0;

    desc = to_string(this->_quantidade) + "X açai " + to_string(this->_tamanho) + "ml com ";

    for(string s: this->_complementos){
        desc += s;
        if(i == this->_complementos.size()-1){
            desc+=".";
            return desc;
        }
        desc+=", ";
        i++;
    }
    return desc;
}

#endif