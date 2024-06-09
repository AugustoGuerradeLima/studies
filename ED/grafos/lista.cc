#include <bits/stdc++.h>
using namespace std;

class no {
public:
    int item;
    double peso;
    no* prox;

    no(int _item) : item(_item), peso(1.0),  prox(nullptr) {}

    no(int _item, double _peso) : item(_item), peso(_peso), prox(nullptr) {}
};

class lista {
public:
    no* cabeca;
    int tamanho;
    lista() : cabeca(nullptr), tamanho(0) {}
    ~lista();
    void insert(int _item, double _peso=1.0);
    int dequeue();
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

void lista::insert(int _item, double _peso) 
{
    no* novo = new no(_item, _peso);
    novo->prox = this->cabeca;
    cabeca = novo;
    tamanho++;
}

int lista::dequeue()
{
	no* p = this->cabeca;
	int _item = p->item;
	this->cabeca = this->cabeca->prox;
	delete p;
	tamanho--;
	return(_item);
}

void lista::print() const 
{
    no* atual = this->cabeca;
    while (atual != nullptr) {
        cout <<"("<< atual->item<<", "<< atual->peso << ") -> ";
        atual = atual->prox;
    }
    cout << "NULL" << endl;
}
