#include <exception>
#include <string>
#pragma once

#include <vector>

class JogoDaVida {
 public:
  JogoDaVida(int l, int c);
  int linhas() {return vivas_.size();};
  int colunas() {return vivas_[0].size();};
  bool viva(int i, int j);
  void Matar(int i, int j);
  void Reviver(int i, int j);
  void ExecutarProximaIteracao();
  void Executar(int n);
 private:
  int NumeroDeVizinhasVivas(int x, int y);
  std::vector<std::vector<bool>> vivas_;  
};

class ExcecaoCelulaInvalida : public std::exception {
public:
    ExcecaoCelulaInvalida(int linha, int coluna)
        : linha(linha), coluna(coluna) {
        mensagemErro = "Célula (" + std::to_string(linha) +
                       ", " + std::to_string(coluna) + ") não é válida. Deseja continuar e ignorá-la? (s/n)?\n";
    }

    const char* what() const noexcept override {
        return mensagemErro.c_str();
    }

private:
    int linha;
    int coluna;
    std::string mensagemErro;
};