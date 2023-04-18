#ifndef AVALIACAO_H
#define AVALIACAO_H

#include <iostream>
#include "ListaFatura.hpp"

using namespace std;

void avaliacao_basica() {
    
    ListaFatura lista;

    lista.insere_fatura(new Fatura(1, 2.31));
    lista.insere_fatura(new Fatura(2, 2.29));
    lista.insere_fatura(new Fatura(3, 2.33));
    lista.insere_fatura(new Fatura(4, 1.00));
    lista.insere_fatura(new Fatura(5, 30.00));

    lista.imprimir_lista();
    cout << "----------" << endl;

    Fatura *fatura_um = lista.proxima_fatura();
    fatura_um->imprimir_dados();
    cout << "----------" << endl;

    cout << fatura_um->getValor() << endl;
    cout << "----------" << endl;


    Fatura *fatura_dois = lista.proxima_fatura();
    fatura_dois->imprimir_dados();
    cout << "----------" << endl;

    lista.proxima_fatura();
    Fatura *fatura_quatro = lista.proxima_fatura();
    fatura_quatro->imprimir_dados();

    cout << "----------" << endl;

    lista.imprimir_lista();
}

#endif