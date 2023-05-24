#ifndef VENDA_H
#define VENDA_H

#include <list>
#include <iomanip> 
#include "pedido.hpp"
using namespace std;

class Venda {
 public:

  void adicionaPedido(Pedido* p);

  void imprimeRelatorio() const;

  ~Venda();

 private:

  list<Pedido*> _pedidos;
};
#endif