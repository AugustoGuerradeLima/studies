#include <stdio.h>
//arquivo
int le_vetor(char* nome_do_arquivo,int* v){
    FILE* file=fopen(nome_do_arquivo,"rt");
    int count = 0;
    if(file!=NULL){
        while(!feof(file)){
            fscanf(file,"%d",&v[count]);
            count++;
        }
        fclose(file);
        return(count);
    }
    fclose(file);
    return(count);
}
//copiar
void copia_vetor(int* v,int* u,int n, int m){
    if(m>n){
        for(int i=0;i<n;i++){
            *(u+i)=*(v+i);
        }
        else{
            printf("espaco insuficiente no vetor de destino!");
        }
    }
}
//selection sort
//encontrar o maior
int posicao_maior_elemento(int* v, int n, int k){
    int maior = v[k];
    int indice = 0;
    for(int i = k;i<n;i++){
        if(maior<v[i]){
            maior=v[i];
            indice = i;
        }
    }
}
//swap
void troca_posicao(int* v,int n,int p,int q){
    if(n>p&&n>q){
        int aux = *(v+p);
        *(v+p)=*(v+q);
        *(v+q)=aux;
    }
    else{
        printf("posicoes invalidas, a troca nao pode ser efetuada");
    }
}
//sort
void rdena_decrescente_vetor(int* v,int n){
    posicao=posicao_maior_elemento(v,n,i);
    troca_posicao(v,n,i,posicao);
}
//main -> pega, copia e ordena
int main(){
    return(0);
}