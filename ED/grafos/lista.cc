#include <bits/stdc++.h>
using namespace std;

class no {
public:
    int item;
    no* prox;

    no(int _item) : item(_item), prox(nullptr) {}
};

class lista {
private:
    no* cabeca;
    int tamanho;

public:
    lista() : cabeca(nullptr), tamanho(0) {}
    ~lista();
    void insert(int _item);
    void print() const;
};

lista::~lista() 
{
    no* atual = this->cabeca;
    while (atual != nullptr) {
        no* proximo = atual->prox;
        delete atual;
        atual = proximo;
    }
}

void lista::insert(int _item) 
{
    no* novo = new no(_item);
    novo->prox = this->cabeca;
    cabeca = novo;
    tamanho++;
}

void lista::print() const 
{
    no* atual = this->cabeca;
    while (atual != nullptr) {
        cout << atual->item << " -> ";
        atual = atual->prox;
    }
    cout << "NULL" << endl;
}

