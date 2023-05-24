/**
 * Este arquivo contem testes para o VPL. Ele nao deve ser modificado em
 * hipotese alguma. Voce pode usa-lo para testar seu VPL localmente.
 */

#include "util.hpp"

#include <iostream>
#include <sstream>

void readAddress(Pedido* pedido) {
  std::string endereco;
  std::getline(std::cin,endereco); //descarte
  
  std::getline(std::cin, endereco);
  pedido->setEndereco(endereco);
}

void readPizza(Pedido* pedido) {
  std::string sabor;
  int pedacos;
  bool borda_recheada;
  int qtd;
  float valor;

  std::string line, tmp;
  std::getline(std::cin, line);
  std::istringstream iss(line);

  std::getline(iss, sabor, ',');
  sabor.erase(sabor.begin());

  std::getline(iss, tmp, ',');
  std::istringstream(tmp) >> pedacos;

  std::getline(iss, tmp, ',');
  std::istringstream(tmp) >> borda_recheada;

  std::getline(iss, tmp, ',');
  std::istringstream(tmp) >> qtd;

  std::getline(iss, tmp, ',');
  std::istringstream(tmp) >> valor;

  Produto* produto = new Pizza(sabor, pedacos, borda_recheada, qtd);
  pedido->adicionaProduto(produto);
}

void readCachorroQuente(Pedido* pedido) {
  std::vector<std::string> complementos;
  int num_salsichas;
  bool prensado;
  int qtd;

  std::string line, tmp;
  std::getline(std::cin, line);
  std::istringstream iss(line);

  std::getline(iss, tmp, ',');
  std::istringstream(tmp) >> num_salsichas;

  std::getline(iss, tmp, ',');
  while(!std::isdigit(tmp[0])){
    complementos.push_back(tmp);
    std::getline(iss, tmp, ',');
  } 

  std::istringstream(tmp) >> prensado;

  std::getline(iss, tmp, ',');
  std::istringstream(tmp) >> qtd;

  Produto* produto = new CachorroQuente(num_salsichas, complementos, prensado, qtd);
  pedido->adicionaProduto(produto);
}

void readAcai(Pedido* pedido) {
  int tam;
  std::vector<std::string> complementos;
  int qtd;

  std::string line, tmp;
  std::getline(std::cin, line);
  std::istringstream iss(line);

  std::getline(iss, tmp, ',');
  std::istringstream(tmp) >> tam;

  std::getline(iss, tmp, ',');
  while(!std::isdigit(tmp[0])){
    complementos.push_back(tmp);
    std::getline(iss, tmp, ',');
  } 

  std::istringstream(tmp) >> qtd;

  Produto* produto = new Acai(tam, complementos, qtd);
  pedido->adicionaProduto(produto);
}