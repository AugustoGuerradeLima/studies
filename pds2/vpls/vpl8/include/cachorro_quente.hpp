#ifndef CACHORRO_QUENTE_H
#define CACHORRO_QUENTE_H

#include <iostream>
#include <vector>
#include "produto.hpp"
using namespace std;

class CachorroQuente : public Produto {
 public:
  CachorroQuente(int num_salsichas,vector<string>& complementos,bool prensado,int qtd);

  float calcPreco() override;

  string descricao() const override;

 private:
  int _num_salsichas;
  vector<string>_complementos;
  bool _prensado;
};
#endif