#ifndef PEDIDO_H
#define PEDIDO_H

#include <list>

#include "cachorro_quente.hpp"
#include "acai.hpp"
#include "pizza.hpp"
#include "produto.hpp"

class Pedido {
 public:
  ~Pedido();

  void adicionaProduto(Produto* p);

  float calculaTotal() const;

  string resumo() const;

  void setEndereco(const string& endereco);

 private:
  list<Produto*> _produtos;

  string _endereco;
};
#endif