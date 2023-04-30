#ifndef ESTOQUE_CPP
#define ESTOQUE_CPP
#include "fogao.hpp"
#include "geladeira.hpp"
#include "estoque.hpp"
 Estoque::Estoque(){
  geladeiras;
  fogoes;
};

void Estoque::armazena_geladeira(int capacidade, int portas){
    Geladeira* nova_geladeira = new Geladeira(capacidade,portas);
    this->geladeiras.push_back(*nova_geladeira);
}

void Estoque::vende_geladeira(int capacidade, int portas){
  for(int i = 0; i < this->geladeiras.size(); i++){
    if (this->geladeiras[i].getCapacidade()==capacidade && this->geladeiras[i].getPortas()==portas){
      geladeiras.erase(geladeiras.begin()+i);
      return;
    }
  }
}

void Estoque::armazena_fogao(int queimadores, int capacidade){
    Fogao* novo_fogao = new Fogao(queimadores,capacidade);
    this->fogoes.push_back(*novo_fogao);
}

void Estoque::vende_fogao(int queimadores, int capacidade){
  for(int i = 0; i < this->fogoes.size();i++){
    if(this->fogoes[i].getQueimadores()==queimadores && this->fogoes[i].getCapacidade()==capacidade){
      fogoes.erase(fogoes.begin()+i);
      return;
    }
  }
}

void Estoque::exibe_geladeiras(){
    for (int i = 0, ie = this->geladeiras.size(); i < ie; i++) {
    std::cout << "G " << this->geladeiras[i].getCapacidade() << " ";
    std::cout << this->geladeiras[i].getPortas() << std::endl;
  }
}

void Estoque::exibe_fogoes(){
    for (int i = 0, ie = this->fogoes.size(); i < ie; i++) {
    std::cout << "F " << this->fogoes[i].getQueimadores() << " ";
    std::cout << this->fogoes[i].getCapacidade() << std::endl;
  }
}

int Estoque::quantidade_geladeiras(){return this->geladeiras.size();}

int Estoque::quantidade_fogoes(){return this->fogoes.size();}

#endif
