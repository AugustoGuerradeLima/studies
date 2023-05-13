#ifndef FOGAO_CPP
#define FOGAO_CPP
#include "fogao.hpp"
Fogao::Fogao(int numero_de_queimadores, int capacidade_forno):_numero_de_queimadores(numero_de_queimadores),_capacidade_forno(capacidade_forno){};
int Fogao::getCapacidade(){return _capacidade_forno;}
int Fogao::getQueimadores(){return _numero_de_queimadores;}
#endif
