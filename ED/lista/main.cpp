#include <iostream>
#include"lista.hpp"
using namespace std;

int main() {
    ListaEncadeada lista;

    // Inserindo elementos na lista
    lista.InsereFinal(10);
    lista.InsereFinal(20);
    lista.InsereFinal(30);
    lista.InsereInicio(40);
    lista.InserePosicao(370,2);

    // Imprimindo a lista
    cout << "Lista:" << endl;
    lista.Imprime();

    // Removendo elementos da lista
    cout << "Removendo o primeiro elemento: " << lista.RemoveInicio() << endl;
    cout << "Removendo o último elemento: " << lista.RemoveFinal() << endl;

    // Imprimindo a lista após remoção
    cout << "Lista após remoção:" << endl;
    lista.Imprime();

    return 0;
}

