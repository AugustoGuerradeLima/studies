#ifndef LISTAFATURA_HPP
#define LISTAFATURA_HPP
#include <iostream>
#include "Fatura.hpp"
struct Celula{
    ref_Fatura _dado;
    Celula* _proximo;
    Celula* _anterior;
    Celula(ref_Fatura dado);
};
typedef Celula* ref_Celula;
struct ListaFatura{
    ref_Celula _inicio;
    ref_Celula _fim;
    ListaFatura();
    void insere_fatura(ref_Fatura Fatura);
    ref_Fatura proxima_fatura();
    void imprimir_lista();
};
typedef ListaFatura* ref_ListaFatura;
#endif