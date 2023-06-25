#include <iostream>
using namespace std;

class Lampada{
    public://apenas para testes
    int _watts;
    float _preco;
    
    Lampada();
    Lampada(int watts);
    Lampada (int watts , float preco);
    float operator + (Lampada const &lp);
    float operator + (float a);
};

//construtores
Lampada::Lampada(){cout<<"a"<<endl;}

Lampada::Lampada(int watts){
    this->_watts=watts;
    cout<<"b"<<endl;
}

Lampada::Lampada(int watts, float preco){
    this->_watts=watts;
    this->_preco=preco;
    cout<<"c"<<endl;
}

//Sobrecarga de operadores
float Lampada::operator + (Lampada const &lp){
    return this->_preco + lp._preco;
}

float Lampada::operator + (float a){
    return this->_preco + a;
}

int main(){

    int x = 60;
    float soma_precos = 0.0;
    float novo_preco = 0.0;

    Lampada lp_1;//construtor a
    Lampada* lp_2;//aponta para uma lampada nao chama construtor
    Lampada lp_3();//the most vexing parse in C++
    Lampada lp_4(30);//b
    Lampada lp_5(13.50);//b
    Lampada lp_6(30, 13.50);//c
    Lampada lp_7(x);//b

    lp_2 = &lp_6;

    soma_precos = *lp_2 + lp_6;

    novo_preco = lp_6 + 40;

    cout<<lp_2->_watts<<" "<<lp_2->_preco<<endl;

    cout<<soma_precos<<endl;

    cout<<novo_preco<<endl;

    return(0); 
}