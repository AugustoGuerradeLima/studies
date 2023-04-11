#ifndef LISTAFATURA_HPP
#define LISTAFATURA_HPP
#include <iostream>
#include "Fatura.hpp"
struct celula{
    ref_fatura _dado;
    ref_celula _proximo;
    ref_celula _anterior;
    celula(ref_fatura dado);
};
typedef celula* ref_celula;
struct lista_fatura{
    ref_celula _inicio;
    ref_celula _fim;
    lista_fatura();
    void insere_fatura(ref_fatura fatura);
    ref_fatura proxima_fatura();
    void imprimir_lista();
};
typedef lista_fatura* ref_lista_fatura;
#endif