#include "jogo_da_vida.hpp"

JogoDaVida::JogoDaVida(int l, int c) 
    : vivas_(l, std::vector<bool>(c, false)) {
}

bool JogoDaVida::viva(int i, int j) {
  return vivas_[i][j];
}

void JogoDaVida::Matar(int i, int j) {
  vivas_[i][j] = false;
}
void JogoDaVida::Reviver(int i, int j) {

  if(i >= this->linhas() || i < 0 || j >= this->colunas() || j < 0){
    throw *new ExcecaoCelulaInvalida(i, j);
  } else{
    vivas_[i][j] = true;
  }
}

int JogoDaVida::NumeroDeVizinhasVivas(int x, int y) {
  int vizinhas_vivas = 0;
  for (int i : {x - 1, x, x + 1}) {
    for (int j : {y - 1, y, y + 1}) {
      if (i != x || j != y) {
        int i_circular = (i + linhas()) % linhas();   
        int j_circular = (j + colunas()) % colunas();
        if (viva(i_circular, j_circular)) {
          vizinhas_vivas++;
        }
      }
    }
  }
  return vizinhas_vivas;
}

void JogoDaVida::ExecutarProximaIteracao() {
  JogoDaVida novo(linhas(), colunas());
  for (int i = 0; i < linhas(); i++) {
    for (int j = 0; j < colunas(); j++) {
      int n = NumeroDeVizinhasVivas(i, j);
       if(n == 3 || (n == 2 && viva(i, j))) {
         novo.Reviver(i, j);
       } 
    }
  } 
  *this = novo;
}

void JogoDaVida::Executar(int n) {
  for (int i = 0; i < n; i++) {
    ExecutarProximaIteracao();
  }
}