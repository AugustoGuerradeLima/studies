#ifndef SET_H
#define SET_H

#include <string.h>

#define MAXSTRINGSIZE 50

typedef struct s_table_elem{
    char dado[MAXSTRINGSIZE];
    int strSize;
    int vazio;
    int retirada;
} ElementoTabela;

typedef struct s_string_set{
    int tamanhoOriginal;
    int tamanhoTabela;
    int tamanhoConjunto;
    ElementoTabela* tabela;
} StringSet;

StringSet* NovoStringSet(int tamanho);
void DestroiStringSet(StringSet* S);

void Inserir(StringSet* S, char* str, int n);
void Remover(StringSet* S, char* str, int n);
int Pertence(StringSet* S, char* str, int n);
        
StringSet* Intersecao(StringSet* S1, StringSet* S2);
StringSet* Uniao(StringSet* S1, StringSet* S2);
StringSet* DiferencaSimetrica(StringSet* S1, StringSet* S2);

void Imprimir(StringSet* S);

int Hash(StringSet* S, char* str, int n);
void Rehash(StringSet* S, int pos);
void Resize(StringSet* S, size_t novoTamanho);

#endif
