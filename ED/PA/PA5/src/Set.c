#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/Set.h"

#define mod %
#define and &&
#define or ||

typedef StringSet* rs;

// 1. NovoStringSet
rs NovoStringSet(int n)
{
    rs s = (rs)malloc(sizeof(StringSet));

    s->tamanhoOriginal = n;
    s->tamanhoTabela = n;
    s->tamanhoConjunto = 0;

    s->tabela = (ElementoTabela*)malloc(s->tamanhoTabela * sizeof(ElementoTabela));

    for (int i = 0; i < s->tamanhoTabela; i++)
    {
        s->tabela[i].vazio = 1;
        s->tabela[i].retirada = 0;
    }
    return s;
}

// 2. DestroiStringSet
void DestroiStringSet(rs s)
{
    free(s->tabela);
    free(s);
}

// 3. Inserir
void Inserir(rs s, char* str, int n)
{
    if (Pertence(s, str, n))
        return;

    if (s->tamanhoConjunto >= s->tamanhoTabela / 2)
        Resize(s, 2 * s->tamanhoTabela);

    int pos = Hash(s, str, n);
    Rehash(s, pos);
    s->tabela[pos].vazio = 0;
    s->tabela[pos].retirada = 0;
    strncpy(s->tabela[pos].dado, str, n);
    s->tabela[pos].dado[n] = '\0'; // Ensure null-terminated string
    s->tabela[pos].strSize = n;
    s->tamanhoConjunto++;
}

// 4. Remover
void Remover(rs s, char* str, int n)
{
    int pos = Hash(s, str, n);
    int j = 0;
    while (!s->tabela[(pos + j) mod s->tamanhoTabela].vazio)
    {
        if (!s->tabela[(pos + j) mod s->tamanhoTabela].retirada and strcmp(s->tabela[(pos + j) mod s->tamanhoTabela].dado, str) == 0)
        {
            s->tabela[(pos + j) mod s->tamanhoTabela].retirada = 1;
            s->tamanhoConjunto--;
            return;
        }
        j++;
    }
}

// 5. Pertence
int Pertence(rs s, char* str, int n)
{
    int pos = Hash(s, str, n);
    int j = 0;
    while (!s->tabela[(pos + j) mod s->tamanhoTabela].vazio)
    {
        if (!s->tabela[(pos + j) mod s->tamanhoTabela].retirada and strcmp(s->tabela[(pos + j) mod s->tamanhoTabela].dado, str) == 0)
        {
            return 1;
        }
        j++;
    }
    return 0;
}

// 6. Intersecao
rs Intersecao(rs s1, rs s2)
{
    rs s = NovoStringSet(s1->tamanhoTabela < s2->tamanhoTabela ? s1->tamanhoTabela : s2->tamanhoTabela);

    for (int i = 0; i < s1->tamanhoTabela; i++)
    {
        if (!s1->tabela[i].vazio and !s1->tabela[i].retirada and Pertence(s2, s1->tabela[i].dado, s1->tabela[i].strSize))
            Inserir(s, s1->tabela[i].dado, s1->tabela[i].strSize);
    }
    return s;
}

// 7. Uniao
rs Uniao(rs s1, rs s2)
{
    rs s = NovoStringSet(s1->tamanhoTabela + s2->tamanhoTabela);

    for (int i = 0; i < s1->tamanhoTabela; i++)
    {
        if (!s1->tabela[i].vazio and !s1->tabela[i].retirada)
            Inserir(s, s1->tabela[i].dado, s1->tabela[i].strSize);
    }
    for (int i = 0; i < s2->tamanhoTabela; i++)
    {
        if (!s2->tabela[i].vazio and !s2->tabela[i].retirada)
            Inserir(s, s2->tabela[i].dado, s2->tabela[i].strSize);
    }
    return s;
}

// 8. DiferencaSimetrica
rs DiferencaSimetrica(rs s1, rs s2)
{
    rs temp = Uniao(s1, s2);
    rs inter = Intersecao(s1, s2);

    for (int i = 0; i < inter->tamanhoTabela; i++)
    {
        if (!inter->tabela[i].vazio and !inter->tabela[i].retirada)
            Remover(temp, inter->tabela[i].dado, inter->tabela[i].strSize);
    }
    DestroiStringSet(inter);
    return temp;
}

// 9. Imprimir
void Imprimir(rs s)
{
    printf("{ ");
    for (int i = 0; i < s->tamanhoTabela; i++)
    {
        if (!s->tabela[i].vazio and !s->tabela[i].retirada)
        {
            printf("%s ", s->tabela[i].dado);
        }
    }
    printf("}\n");
}

// 10. Hash
int Hash(rs s, char* str, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += str[i];

    return sum mod s->tamanhoTabela;
}

// 11. Rehash
void Rehash(rs s, int pos)
{
    int j = 0;
    while (!s->tabela[(pos + j) mod s->tamanhoTabela].vazio and !s->tabela[(pos + j) mod s->tamanhoTabela].retirada)
    {
        j++;
    }
    pos = (pos + j) mod s->tamanhoTabela;
}

// 12. Resize
void Resize(rs s, size_t novoTamanho)
{
    ElementoTabela* novaTabela = (ElementoTabela*)malloc(novoTamanho * sizeof(ElementoTabela));
    for (int i = 0; i < novoTamanho; i++)
    {
        novaTabela[i].vazio = 1;
        novaTabela[i].retirada = 0;
    }

    for (int i = 0; i < s->tamanhoTabela; i++)
    {
        if (!s->tabela[i].vazio and !s->tabela[i].retirada)
        {
            int pos = Hash(s, s->tabela[i].dado, s->tabela[i].strSize);
            int j = 0;
            while (!novaTabela[(pos + j) mod novoTamanho].vazio)
            {
                j++;
            }
            pos = (pos + j) mod novoTamanho;
            novaTabela[pos] = s->tabela[i];
        }
    }

    free(s->tabela);
    s->tabela = novaTabela;
    s->tamanhoTabela = novoTamanho;
}
