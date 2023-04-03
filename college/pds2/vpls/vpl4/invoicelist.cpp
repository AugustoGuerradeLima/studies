#include <iostream>
#include "invoice.hpp"
#include "invoicelist.hpp"
using namespace std;

cell::cell(ref_invoice data){
    _data = data;
    _previous = nullptr;
    _next = nullptr;
}//implementacao do construtor

invoice_list::invoice_list(){
    _head = nullptr;
    _tail = nullptr;
}//implementacao do construtor

void invoice_list::_insert_invoice(ref_invoice data){
    ref_cell new_invoice = new cell(data);//aloca nova celula usando o construtor data e a fatura alocada
    
    if(_head==nullptr){
        _head = new_invoice;
        _tail = new_invoice;
    }

    else{
        if(data->_value >= _head->_data->_value){
            new_invoice->_next = _head->_next;
            _head->_next = new_invoice;
        }
    }
}//implementacao para inserir uma nova fatura a lista