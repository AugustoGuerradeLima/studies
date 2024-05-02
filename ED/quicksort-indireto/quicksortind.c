#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Primeiro passo: desmembrar a estrutura em duas

typedef struct{
    int chave;
    int indice;
} chave_item;

typedef struct{
    int conteudo[1000000];
} conteudo_item;

// Segundo passo: fazer uma ordenação que movimente apenas a menor estrutura

void partition(int Esq, int Dir, int* i, int* j, chave_item* k, conteudo_item* a)
{
    chave_item pivo;
    chave_item aux;

    *i = Esq;
    *j = Dir;

    pivo = k[(*i + *j) / 2];

    do{
        while(pivo.chave > k[*i].chave) (*i)++;
        while(pivo.chave < k[*j].chave) (*j)--;

        if(*i <= *j)
        {
            // Swap
            aux = k[*i];
            k[*i] = k[*j];
            k[*j] = aux;
            (*i)++;
            (*j)--;
        }

    } while(*i <= *j);
}

void sort(int Esq, int Dir, chave_item* k, conteudo_item* a)
{
    int i, j;

    partition(Esq, Dir, &i, &j, k, a);
    if(Esq < j) sort(Esq, j, k, a);
    if(i < Dir) sort(i, Dir, k, a);
}

void quick_sort(chave_item* k, int n, conteudo_item* a)
{
    sort(0, n - 1, k, a);
}

int main()
{
    int n = 10;

    chave_item chaves[n];
    conteudo_item conteudos[n];

    srand(time(NULL));

    for(int i = 0; i < n; i++)
    {
        chaves[i].chave = rand() % 1000;
        chaves[i].indice = i;
    }

    quick_sort(chaves, n, conteudos);

    for(int i = 0; i < n; i++)
    {
        printf("Chave: %d\n", chaves[i].chave);
    }

    return 0;
}
