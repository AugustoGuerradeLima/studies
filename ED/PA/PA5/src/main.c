#include <stdio.h>
#include <stdlib.h>
#include "../include/Set.h"

StringSet* LeConjunto(){
    int n;
    char* k = (char*)malloc(MAXSTRINGSIZE*sizeof(char));
    scanf("%d\n", &n);
    StringSet* S = NovoStringSet(n);
    for(int i = 0; i < n; i++){
        scanf("%s\n", k);
        Inserir(S, k, strlen(k));
    }
    free(k);
    return S;
}

int main(int argc, char** argv){
    int n;
    char c;
    char t[MAXSTRINGSIZE];

    scanf("%d\n", &n);
    StringSet* S = NovoStringSet(2);

    for(int i = 0; i < n; i++){
        scanf("%c ", &c);
        switch (c)
        {
            case 'i':
                scanf("%s\n", t);
                Inserir(S, t, strlen(t));
                break;
            case 'r':
                scanf("%s\n", t);
                Remover(S, t, strlen(t));
                break;
            case 'n':
                scanf("%s\n", t);
                if(Pertence(S, t, strlen(t)))
                    printf("O elemento %s pertence ao conjunto!\n", t);
                else
                    printf("O elemento %s nao pertence ao conjunto!\n", t);
                break;
            case 'u':{
                printf("A uniao dos conjuntos e: ");
                StringSet* T = LeConjunto();
                StringSet* U = Uniao(S, T);
                Imprimir(U);
                DestroiStringSet(T);
                DestroiStringSet(U);
                break;
            }
            case 't':{
                printf("A intersecao dos conjuntos e: ");
                StringSet* T = LeConjunto();
                StringSet* U = Intersecao(S, T);
                Imprimir(U);
                DestroiStringSet(T);
                DestroiStringSet(U);
                break;
            }
            case 'd':{
                printf("A diferenca simetrica dos conjuntos e: ");
                StringSet* T = LeConjunto();
                StringSet* U = DiferencaSimetrica(S, T);
                Imprimir(U);
                DestroiStringSet(T);
                DestroiStringSet(U);
                break;
            }
            case 'p':
                Imprimir(S);
            default:
                break;
        }
    }

    DestroiStringSet(S);
    return 0;
}
