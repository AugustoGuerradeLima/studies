#include <stdio.h>
/*
preeche
coloca o valor default na matriz
*/
void preenche(int c, int r, float**M){
    for(int i = 0; i < c; i++){
        for(int j = 0 ; j < r; j++){
            M[i][j] = 0;
        }
    }
}
/*
multiplica_matrizes
so funciona para matrizes quadrada
salva na matriz C nao preenchida o produto da matriz A pela matriz B
*/
void multiplica_matrizes(int n, float**A,float**B,float**C){
    for(int i = 0; i < n ;i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}
/*
eh_inversa
verifica se uma matriz B e a inversa da A
*/
int eh_inversa(int n, float**A, float**B){
    float I[n][n];
    preenche(n,n,I);
    multiplica_matrizes(n,A,B,I);
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            if((i == j && I[i][j]!=1)||(i != j && I[i][j] != 0)){
                return(0);
            }
        }
    }
    return(1);
}
/*
maior autovalor
obtem o maior autovalor de uma matriz diagonal
*/
float maior_atuovalor(int n, float**P_i, float**A, float**P){
    float D[n][n];
    float M[n][n];
    float matv = 0.0;
    preenche(n,n,D);
    preenche(n,n,M);
    multiplica_matrizes(n,P_i,A,M);
    multiplica_matrizes(n,M,P,D);
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            if(matv < D[i][j]){
                matv = D[i][j];
            }
        }
    }
    return(matv);
}
