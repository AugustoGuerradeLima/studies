#ifndef GELADEIRA_HPP
#define GELADEIRA_HPP
#include <iostream>
class Geladeira {
    private:
    int _capacidade_em_litros;
    int _numero_de_portas;
    public:
    Geladeira (int capacidade_em_litros, int numero_de_portas);
    int getCapacidade();
    int getPortas();
};
#endif