#ifndef GELADEIRA_CPP
#define GELADEIRA_CPP
#include "geladeira.hpp"
Geladeira::Geladeira(int capacidade_em_litros, int numero_de_portas):_capacidade_em_litros(capacidade_em_litros),_numero_de_portas(numero_de_portas){};
int Geladeira::getCapacidade(){return _capacidade_em_litros;}
int Geladeira::getPortas(){return _numero_de_portas;}
#endif
