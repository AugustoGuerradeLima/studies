#include <stdio.h>

// Exercício 1
void LeVetor(char* nomeDoArquivo, int* dados){
    int i = 0;
    FILE* f = fopen(nomeDoArquivo, "r");
    if(f != NULL){
        while(!feof(f)){
            fscanf(f, "%d", &dados[i]);
            i++;
        }
        fclose(f);
    }
}

/* ERRATA: Para conseguir captar a quandidade de elementos que serão de fato
 * utilizados modificaremos o exercício 1 para ele retornar um int com a
 * quantidade de elementos lidos no arquivo.
 */
// Exercício 1 modificado
int LeVetorModificado(char* nomeDoArquivo, int* dados){
    int i = 0;
    FILE* f = fopen(nomeDoArquivo, "r");
    if(f != NULL){
        while(!feof(f)){
            fscanf(f, "%d", &dados[i]);
            i++;
        }
        fclose(f);
    }
    return i;
}

// Exercício 2
void CopiaVetor(int* v, int* w, int n){
    for(int i = 0; i < n; i++){
        w[i] = v[i];
    }
}

// Exercício 3
void TrocaPosicao(int* dados, int n, int m){
    int aux = dados[n];
    dados[n] = dados[m];
    dados[m] = aux;
}

// Exercício 4
int PosicaoMenorElemento(int* dados, int n, int k){
    int posicao_menor = k;
    for(int i = k+1; i < n; i++){
        if(dados[i] < dados[posicao_menor]){
            posicao_menor = i;
        }
    }
    return posicao_menor;
}

// Exercício 5
void OrdenaCrescenteVetor(int* v, int n){
    for(int i = 0; i < n; i++){
        int posicao_menor = PosicaoMenorElemento(v, n, i);
        TrocaPosicao(v, posicao_menor, i);
    }
}

int main(void) {
    int dados[1000], copia_dados[1000];
    int n = LeVetorModificado("dados.txt", dados);

    if(n > 0){
        CopiaVetor(dados, copia_dados, n);

        for(int i = 0; i < n; i++){
            printf("%d ", dados[i]);
        }
        printf("\n");
    
        OrdenaCrescenteVetor(dados, n);
        
        for(int i = 0; i < n; i++){
            printf("%d ", dados[i]);
        }
        printf("\n");
    }
}
