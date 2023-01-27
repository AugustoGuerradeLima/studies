#include <stdio.h>
//struct
struct Aluno{
    char nome[30];
    int matricula;
    float notas[4];
};
//aprovados
int aprovados(struct Aluno*alunos,int n){
    int quantidade = 0; 
    float media;
    for(int i=0; i<n ;i++){
        media =0.0;
        for(int j=0;j<4;j++){
            media+=alunos[i].notas[j];
        }
        if(media/4.0>=60){
            quantidade++;
        }
    }
    return(quantidade);
}
//multiplicacao de matrizes
void multiplica_matrizes(int , float A[n][n], float B[n][n], float C[n][n]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            for(int k = 0; k<n;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
}
//inversa
int eh_inversa(int n, float A[n][n], float B[n][n]){
    float C[n][n];
    preenche_zero(n,C);
    multiplica_matrizes(n,A,B,C);
    for(int i= 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(((i==j)&&(C[i][j]!=1))||((i!=j)&&(C[i][j]!=0))){
                return(0);
            }
        }
    }
    return(1);
}
int main(){
    return(0);
}
