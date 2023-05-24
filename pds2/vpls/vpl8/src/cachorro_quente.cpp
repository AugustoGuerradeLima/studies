#ifndef CACHORRO_QUENTE_CPP
#define CACHORRO_QUENTE_CPP
    #include<iostream>
    #include "cachorro_quente.hpp"
    using namespace std;

    CachorroQuente::CachorroQuente(int num_salsichas,vector<string>& complementos,bool prensado,int qtd){
        this->_num_salsichas=num_salsichas;
        this->_complementos=complementos;
        this->_prensado=prensado;
        this->_quantidade=qtd;
    }

    float CachorroQuente::calcPreco(){return (5.0 + 1.5*this->_num_salsichas + this->_complementos.size() + this->_prensado*0.5);}

    string CachorroQuente::descricao()const{
        string desc;
        int i = 0;
        desc = to_string(this->_quantidade) + "X cachorro-quente ";
        if(this->_prensado)desc+="prensado ";
        desc+="com " + to_string(this->_num_salsichas) + " salsicha(s)";
        if(this->_complementos.size())desc+=", ";

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