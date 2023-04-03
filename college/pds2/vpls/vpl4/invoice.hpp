#ifndef INVOICE_HPP
#define INVOICE_HPP

typedef struct invoice{
int _id;
double _value;
invoice(int id, double value);//construtor
void _print_data();//imprime dados
double _get_value();//pega o valor
}invoice;

typedef invoice* ref_invoice;

#endif