#include <iostream>
#include "Fatura.hpp"
using namespace std;
Fatura::Fatura(int id , double valor) : _id(id),_valor(valor){}
void Fatura::imprimir_dados(){cout<<_id<<" "<<_valor<<endl;}
double Fatura::getValor(){return _valor;}
