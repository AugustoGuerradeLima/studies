#ifndef OLD_CPP
#define OLD_CPP

#include <iostream>
#include "old.hpp"

Estoque::Estoque() {
  indice_geladeira = 0;
  indice_fogao = 0;
}

void Estoque::armazena_geladeira(int capacidade, int portas) {
  geladeiras[indice_geladeira].capacidade_em_litros = capacidade;
  geladeiras[indice_geladeira].numero_de_portas = portas;
  indice_geladeira++;
}

void Estoque::vende_geladeira(int capacidade, int portas) {
  if (indice_geladeira > 0) { 
    indice_geladeira--;
  }
}

void Estoque::armazena_fogao(int queimadores, int capacidade) {
  fogoes[indice_fogao].numero_de_queimadores = queimadores;
  fogoes[indice_fogao].capacidade_forno = capacidade;
  indice_fogao++;
}

void Estoque::vende_fogao(int queimadores, int capacidade) {
  if (indice_fogao > 0) { 
    indice_fogao--;
  }
}

void Estoque::exibe_geladeiras() {
  for (int i = 0, ie = indice_geladeira; i < ie; i++) {
    std::cout << "G " << geladeiras[i].capacidade_em_litros << " ";
    std::cout << geladeiras[i].numero_de_portas << std::endl;
  }
}

void Estoque::exibe_fogoes() {
  for (int i = 0, ie = indice_fogao; i < ie; i++) {
    std::cout << "F " << fogoes[i].numero_de_queimadores << " ";
    std::cout << fogoes[i].capacidade_forno << std::endl;
  }
}

int Estoque::quantidade_geladeiras() {
  return indice_geladeira;
}

int Estoque::quantidade_fogoes() {
  return indice_fogao;
}

#endif
