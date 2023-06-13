#pragma once

#include <exception>
#include <string>
#include <vector>

// Implementa o Jogo da Vida de John Conway.
// https://pt.wikipedia.org/wiki/Jogo_da_vida
class JogoDaVida {
 public:
  // Cria um jogo cujo torus tem l linhas e c colunas.
  // Todas as células são inicializadas como mortas.
  JogoDaVida(int l, int c);

  // Retorna o número de linhas do torus.
  int linhas() const;

  // Retorna o número de colunas do torus.
  int colunas() const;

  // Retorna o estado da célula [i, j].
  bool viva(int i, int j) const;

  // Altera o estado da célula [i, j].
  void Matar(int i, int j);
  void Reviver(int i, int j);

  // Executa a próxima iteração do jogo da vida.
  void ExecutarProximaIteracao();

  // Executa n iterações do jogo da vida.
  void Executar(int n);

 private:
  // Conta o número de vizinhas vivas da célula [x, y].
  int NumeroDeVizinhasVivas(int x, int y) const;

  // Armazena o estado das células.
  std::vector<std::vector<bool>> vivas_;
};

class ExcecaoCelulaInvalida : public std::exception {
 public:
  ExcecaoCelulaInvalida(int linha, int coluna);

  const char* what() const noexcept override;

 private:
  int linha;
  int coluna;
  std::string mensagemErro;
};
