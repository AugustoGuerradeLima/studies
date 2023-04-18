#ifndef FATURA_HPP
#define FATURA_HPP
#include <iostream>
struct Fatura{
    int _id;
    double _valor;
    Fatura(int id , double valor);
    void imprimir_dados();
    double getValor();
};
typedef Fatura* ref_Fatura;
#endif