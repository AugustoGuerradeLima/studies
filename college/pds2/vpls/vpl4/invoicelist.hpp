#ifndef INVOICE_LIST_HPP
#define INVOICE_LIST_HPP
#include "invoice.hpp"

typedef struct cell{
    ref_invoice _data;
    ref_cell _previous;
    ref_cell _next;

    cell(ref_invoice data);//construtor
}cell;//implementacao da celula da lista

typedef cell* ref_cell;

typedef struct invoice_list{
    ref_cell _head;
    ref_cell _tail;

    invoice_list();//construtor

    void _insert_invoice(ref_invoice data);//adiciona celula ordenada

    ref_invoice _remove_invoice();//remove a fatura de maior valor

    void _print_invoice_list();//imprime as faturas da lista
}invoice_list;//implementacao da lista

typedef invoice_list* ref_invoice_list;

#endif