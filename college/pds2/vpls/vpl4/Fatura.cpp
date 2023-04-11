#include <iostream>
#include "Fatura.hpp"
using namespace std;
fatura::fatura(int id , double valor) : _id(id),_valor(valor){}
void fatura::imprimir_dados(){cout<<_id<<" "<<_valor<<endl;}
double fatura::getValor(){return _valor;}