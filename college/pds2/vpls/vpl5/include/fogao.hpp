#ifndef FOGAO_HPP
#define FOGAO_HPP
#include <iostream>
class Fogao {
    private:
    int _numero_de_queimadores;
    int _capacidade_forno;
    public:
    Fogao(int numero_de_queimadores, int capacidade_forno);
    int getQueimadores();
    int getCapacidade();
};
#endif