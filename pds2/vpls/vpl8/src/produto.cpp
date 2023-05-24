#ifndef PRODUTO_CPP
#define PRODUTO_CPP
    #include <iostream>
    #include "produto.hpp"
    using namespace std;

    int Produto::getQtd() const{return this->_quantidade;}
    float Produto::getValor() const{return this->_valor_unitario;}
#endif