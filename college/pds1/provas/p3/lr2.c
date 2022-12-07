#include <stdio.h>

//Exercício 1
void multiplica_matrizes(int n, float A[n][n], float B[n][n],
                         float C[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      C[i][j] = 0;
      for (int k = 0; k < n; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}//ok

//Exercício 2
int eh_inversa(int n, float A[n][n], float B[n][n]) {
  float AB[n][n];
  multiplica_matrizes(n, A, B, AB);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        if (AB[i][j] != 1) {
          return 0;
        }
      } else if (AB[i][j] != 0) {
        return 0;
      }
    }
  }
  return 1;
}//ok

//Exercício 3
float maior_atuovalor(int n, float P_i[n][n], float A[n][n], float P[n][n]) {
  float P_iA[n][n], D[n][n];
  multiplica_matrizes(n, P_i, A, P_iA);
  multiplica_matrizes(n, P_iA, P, D);
  float resposta = D[0][0];
  for (int i = 0; i < n; i++) {
    if (D[i][i] > resposta) {
      resposta = D[i][i];
    }
  }//ok
  return resposta;
}

//Exercício 4
struct Aluno {
  char nome[30];
  int matricula;
  float notas[4];
};//ok

//Exercício 5
int aluno_maior_media(struct Aluno *alunos, int n) {
  int resposta = 0;
  float maior_media = -1;
  for (int i = 0; i < n; i++) {
    float media = 0;
    for (int j = 0; j < 4; j++) {
      media += alunos[i].notas[j];
    }
    media = media / 4.0;
    if (media > maior_media) {
      maior_media = media;
      resposta = i;
    }
  }
  return resposta;
}//ok

int main(void) {
  int n = 3;
  float A[n][n];
  float P[n][n];
  float P_i[n][n];

  //Lendo matrizes para os exercicios 1 a 3.
  FILE *f = fopen("matrizes.txt", "r");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      fscanf(f, "%f", &A[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      fscanf(f, "%f", &P[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      fscanf(f, "%f", &P_i[i][j]);
    }
  }
  fclose(f);

  //Testando os exercicios 1 a 3.

  /* Multiplicar uma matriz por sua inversa é um dos raros
   * casos em que a multiplicação de matrizes é comutativa
   */
  printf("%d\n", eh_inversa(n, P, P_i));
  printf("%d\n", eh_inversa(n, P_i, P));
  //Os autovalores da A que está no arquivo são -3, -3, e 1  
  printf("%.2f\n", maior_atuovalor(n, P_i, A, P));

  // Testes para o exercício 5
  f = fopen("alunos.txt", "r");
  fscanf(f, "%d", &n);
  struct Aluno a[n];
  for (int i = 0; i < n; i++) {
    fscanf(f, "%s", a[i].nome);
    fscanf(f, "%d", &a[i].matricula);
    for (int j = 0; j < 4; j++) {
      fscanf(f, "%f", &a[i].notas[j]);
    }
  }
  fclose(f);

  int x = aluno_maior_media(a, n);
  printf("%s, matricula %d\n", a[x].nome, a[x].matricula);
}//ok
