#include <iostream>
#include "invoice.hpp"
using namespace std;

invoice::invoice(int id,double value){
    _id = id;
    _value = value;
}//implementacao do construtor

void invoice::_print_data(){
    cout<<_id<<" "<<_value<<endl;
}//imprime dados no formato id valor

double invoice::_get_value(){
    return _value;
}