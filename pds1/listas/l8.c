//Augusto Guerra de Lima 2022101086
#include <stdio.h>
//----------------------------------------------------------------------questao1
void readMatrix(){
    int r,c;
    scanf("%d%d",&r,&c);
    int matrix[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}//end readmatrix
void printMatrix(int m[][],int row, int column){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            printf("%d\t"m[i][j]);
        }
        printf("\n");
    }
}//end printmatrix
//----------------------------------------------------------------------questao2
float mediaMatrix(int n, float mat[][100]){
    float soma = 0.0;
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<n;j++){
            soma += mat[i][j];
        }
    }
    return(soma/(float)(n*n));
}
//----------------------------------------------------------------------questao3
void identidade(int n, float A[][100]){
    for(int i= 0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i){
                A[i][j]=1.0;
            }
            else{
                A[i][j]=0.0;
            }
        }
    }
}
//----------------------------------------------------------------------questao4
void transposta(int n, float A[][100], float T[][100]){
    for(int i = 0; i<n;i++){
        for(int j = 0;j<n;j++){
            T[i][j]=A[j][i];
        }
    }
}
//----------------------------------------------------------------------questao5
bool simetrica(int n, float A[][100]){
    float mat[n][n];
    transposta(n, A ,mat);
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n;j++){
            if(A[i][j]==mat[i][j]){
                //ok
            }
            else{return(false);}
        }
    }
    return(true);
}
//----------------------------------------------------------------------questao6
void somaMatrix(int n, float A[][100],float B[][100], float S[][100]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            S[i][j]==A[i][j]+B[i][j];
        }
    }
}
//----------------------------------------------------------------------questao7
void multMatrix(int n, float A[][100], float B[][100], float P[][100]){
    for(int i=0; i<n;i++){
        for(int j = 0; j<n;j++){
            for(int k = 0;k<n;k++){
                P[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}
//----------------------------------------------------------------------main
int main(){

    return(0);
}
