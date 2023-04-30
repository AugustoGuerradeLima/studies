#ifndef OLD_HPP
#define OLD_HPP

#include <iostream>

class Estoque {

public:

// Define quantos eletrodomesticos podem ser armazenados 
// simultaneamente no galpao da loja:
#define qtde_maxima_galpao 100

struct Geladeira {
  int capacidade_em_litros;
  int numero_de_portas;
};

struct Fogao {
  int numero_de_queimadores;
  int capacidade_forno;
};

Geladeira geladeiras[qtde_maxima_galpao];
Fogao fogoes[qtde_maxima_galpao];
int indice_geladeira;
int indice_fogao;

Estoque();

void armazena_geladeira(int capacidade, int portas);

void vende_geladeira(int capacidade, int portas);

void armazena_fogao(int queimadores, int capacidade);

void vende_fogao(int queimadores, int capacidade);

void exibe_geladeiras();

void exibe_fogoes();

int quantidade_geladeiras();

int quantidade_fogoes();

};

#endif
