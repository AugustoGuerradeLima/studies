/**
 * Este arquivo contem testes para o VPL. Ele nao deve ser modificado em
 * hipotese alguma. Voce pode usa-lo para testar seu VPL localmente.
 */

#include <iostream>

#include "util.hpp"
#include "venda.hpp"

int main() {

  Venda vendas;
  std::string command;
  std::getline(std::cin, command);
  while (command == "pedido") {
    Pedido* pedido = new Pedido();
    while (std::cin >> command ) {
      if (command == "pizza") {
        readPizza(pedido);
      } else if (command == "acai") {
        readAcai(pedido);
      } else if (command == "cachorro-quente") {
        readCachorroQuente(pedido);
      } else if (command == "endereco") {
        readAddress(pedido);
      } else {
        break;
      }
    }
    vendas.adicionaPedido(pedido);
  }
  vendas.imprimeRelatorio();
  return 0;
}