#ifndef VENDA_CPP
#define VENDA_CPP

#include <iostream>
#include "venda.hpp"
using namespace std;

    void Venda::adicionaPedido(Pedido* p){
        this->_pedidos.push_back(p);
    }

    void Venda::imprimeRelatorio()const{
        float total_de_vendas=0.0;
        int j = 1;

        for(Pedido* i : this->_pedidos){
            total_de_vendas+=i->calculaTotal();
        }

        for(Pedido* i : this->_pedidos){
            cout<<"Pedido "<<j<<endl;
            cout<<i->resumo()<<endl;
            j++;
        }
        cout<<"Relatorio de Vendas"<<endl;
        cout<<"Total de vendas: R$"<<fixed<<setprecision(2)<<total_de_vendas<<endl;
        cout<<"Total de pedidos: "<<this->_pedidos.size();
    }

    Venda::~Venda(){
        for(Pedido* i : this->_pedidos){delete(i);}
    }

#endif