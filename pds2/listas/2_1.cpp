#include <iostream>
using namespace std;

class Data{
private:
int dia, mes, ano;

public:
Data(int d, int m, int a):
dia(d), mes(m), ano(a){};
string imprime(){
return
to_string(dia)+"/"+
to_string(mes)+"/"+
to_string(ano);
}
};

class Hora{
int hora, min, seg;
public:
Hora(int h, int m, int s):
hora(h), min(m), seg(s){};
string imprime(){
return
to_string(hora)+":"+
to_string(min) +":"+
to_string(seg);
}
};

class Calendario{
    private:
    Data _data;
    Hora _hora;

    public:
    Calendario(Data data, Hora hora):_data(data),_hora(hora){};
    void imprime(){
        string data = this->_data.imprime();
        string hora = this->_hora.imprime();
        cout<<data<<" "<<hora<<endl;
    }
};

int main(){

    Data data(12,12,12);
    Hora hora(12,12,12);
    Calendario calendario(data,hora);

    calendario.imprime();

    return(0);
}


