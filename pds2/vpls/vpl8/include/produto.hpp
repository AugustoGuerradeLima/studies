#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Produto {
 public:

  int getQtd() const;

  float getValor() const;

  virtual std::string descricao() const = 0;

  virtual float calcPreco() = 0;

  virtual ~Produto() = default;

 protected:
  int _quantidade{0};

  float _valor_unitario{0};
};
#endif