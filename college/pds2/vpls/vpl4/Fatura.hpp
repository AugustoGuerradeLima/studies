#ifndef FATURA_HPP
#define FATURA_HPP
#include <iostream>
struct fatura{
    int _id;
    double _valor;
    fatura(int id , double valor);
    void imprimir_dados();
    double getValor();
};
typedef fatura* ref_fatura;
#endif