#ifndef PEDIDO_CPP
#define PEDIDO_CPP
    #include <iostream>
    #include "pedido.hpp"
    using namespace std;

    void Pedido::adicionaProduto(Produto* p){this->_produtos.push_back(p);}

    float Pedido::calculaTotal()const{
        float preco_total=0.0;
        for(Produto* i : this->_produtos){
            preco_total+=i->calcPreco()*i->getQtd();
            }
        return preco_total;
    }

    void Pedido::setEndereco(const string& endereco){
        this->_endereco=endereco;
    }

    string Pedido::resumo()const{
        string res;
        for(Produto* i:this->_produtos){
            res+=i->descricao()+"\n";
        }
        res+="Endereço: "+ this->_endereco;
        return res;
    }

    Pedido::~Pedido(){
        for(Produto* i:this->_produtos){delete(i);}
    }

#endif