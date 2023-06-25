#include <iostream>

using namespace std;

class Conta {
private:
    float saldo;

public:
    Conta() {
        saldo = 0.0;
    }

    void mostrarSaldo() {
        cout << "Saldo: " << saldo << endl;
    }

    void sacar(float valor) {
        if (valor > saldo) {
            cout << "Erro: Saldo insuficiente." << endl;
        } else {
            saldo -= valor;
            cout << "Saque de " << valor << " realizado." << endl;
        }
    }

    void depositar(float valor) {
        saldo += valor;
        cout << "Depósito de " << valor << " realizado." << endl;
    }

    float getSaldo() {
        return saldo;
    }

    void setSaldo(float valor) {
        saldo = valor;
    }
};

class Poupanca : public Conta {
private:
    float rendimento;

public:
    Poupanca(float rendimento) {
        this->rendimento = rendimento;
    }

    float getRendimento() {
        return rendimento;
    }

    void setRendimento(float valor) {
        rendimento = valor;
    }

    void calculaRendimento() {
        float saldo = getSaldo();
        float rendimentoAtual = saldo * rendimento;
        cout << "Rendimento atual: " << rendimentoAtual << endl;
    }
};

class ContaCorrente : public Conta {
private:
    float taxa;

public:
    ContaCorrente(float taxa) {
        this->taxa = taxa;
    }

    float getTaxa() {
        return taxa;
    }

    void setTaxa(float valor) {
        taxa = valor;
    }

    void sacar(float valor) {
        float taxaSaque = valor * taxa;
        if (valor + taxaSaque > getSaldo()) {
            cout << "Erro: Saldo insuficiente para saque." << endl;
        } else {
            float valorTotal = valor + taxaSaque;
            setSaldo(getSaldo() - valorTotal);
            cout << "Saque de " << valor << " realizado. Taxa de saque: " << taxaSaque << endl;
        }
    }

    void depositar(float valor) {
        float taxaDeposito = valor * taxa;
        setSaldo(getSaldo() + valor - taxaDeposito);
        cout << "Depósito de " << valor << " realizado. Taxa de depósito: " << taxaDeposito << endl;
    }
};

int main() {

    Poupanca poupanca(0.05);
    poupanca.setSaldo(2000);
    poupanca.calculaRendimento();

    ContaCorrente contaCorrente(0.02);
    contaCorrente.setSaldo(3000);
    contaCorrente.depositar(100);
    contaCorrente.mostrarSaldo();
    contaCorrente.sacar(500);
    contaCorrente.mostrarSaldo();

    return 0;
}
