#include <iostream>
#include <chrono>
#include <thread>

#include "jogo_da_vida.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::ostream;  // Tipo de dado que se pode passar para um "cout".
using std::this_thread::sleep_for;  // Para a execução por x ms;
using namespace std::chrono_literals;  // Necessário para poder escrever, e.g. 100ms.

// Sobrecarrega o operador << para ele poder imprimir o estado do JogoDaVida.
ostream & operator << (ostream &out, JogoDaVida &t) {
  out << "  "; 
  for (int i = 0; i < t.colunas(); ++i) {
    out << "X "; 
  }
  out << endl;
  for (int i = 0; i < t.linhas(); ++i) {
    out << "X ";
    for (int j = 0; j < t.colunas(); ++j) {
      if (t.viva(i, j)) {
        out << "o "; 
      } else {
        out << "  ";
      }
    }
    out << "X" << endl;
  }
  out << "  "; 
  for (int i = 0; i < t.colunas(); ++i) {
    out << "X "; 
  }
  out << endl;
  return out;
}

int main() {
  // Incializa o JogoDaVida com os dados do arquivo.
  int numero_de_iteracoes;
  cin >> numero_de_iteracoes;    

  int numero_de_linhas;
  cin >> numero_de_linhas;
  int numero_de_colunas;
  cin >> numero_de_colunas;

  JogoDaVida jogo(numero_de_linhas, numero_de_colunas);
  int linha, coluna;
  while (cin >> linha >> coluna) {
      jogo.Reviver(linha, coluna);
  }
  cout << jogo << endl;
  
  // Executa o número esperado de iterações.
  for (int i = 0; i < numero_de_iteracoes; i++) {
    jogo.ExecutarProximaIteracao();
    cout << jogo << endl;
    sleep_for(200ms);
  }
  return 0;
}