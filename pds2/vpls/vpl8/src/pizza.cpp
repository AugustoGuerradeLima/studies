#ifndef PIZZA_CPP
#define PIZZA_CPP

#include <iostream>
#include "pizza.hpp"
using namespace std;

Pizza::Pizza(const string& sabor,int pedacos,bool borda_recheada,int qtd){
    this->_sabor=sabor;
    this->_num_pedacos=pedacos;
    this->_borda_recheada=borda_recheada;
    this->_quantidade=qtd;
}

float Pizza::calcPreco(){
    float valor_especial = 0.0;
    if(this->_sabor.find("especial")!=string::npos)valor_especial=8.0;
    return (5.0*this->_num_pedacos+10*this->_borda_recheada+valor_especial);
}

string Pizza::descricao()const{
    string desc;
    desc = to_string(this->_quantidade)+"X pizza "+this->_sabor+", "+to_string(this->_num_pedacos)+" pedaços";
    if(this->_borda_recheada){desc+=" e borda recheada.";}
    else{desc+=" sem borda recheada.";}
    return desc;
}

#endif