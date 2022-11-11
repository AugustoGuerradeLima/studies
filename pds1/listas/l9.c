//Augusto Guerra de Lima 2022101086
//Como C nao possui encapsulamento precisa compilar com g++
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
struct Ponto {
	float x;
	float y;
	float distancia(Ponto& p);
	void atribuir(float a, float b);
};
typedef Ponto* ref_Ponto;
struct Triangulo {
	Ponto p1,p2,p3;
	float perimetro();
    float area();
};
typedef Triangulo ref_Triangulo;
struct Retangulo{
    Ponto p1,p2,p3,p4;
    float perimetro();
    float area();
    bool quadrado();
};
typedef Retangulo* ref_Retangulo;
struct Ciriculo {
	Ponto centro;
	float raio;
	float perimetro();
    float area();
};
typedef Ciriculo* ref_Ciriculo;
//----------------------------------------------------------------------questao2
float Ponto::distancia(Ponto& p)
{
	return(sqrt((this->x - p.x)*(this->x - p.x) + (this->y - p.y)*(this->y - p.y)));
}
//----------------------------------------------------------------------questao3
void Ponto::atribuir(float a, float b)
{
	this->x=a;
	this->y=b;
}
//----------------------------------------------------------------------questao5
float Triangulo::perimetro()
{
	return(this->p1.distancia(this->p2)+this->p2.distancia(this->p3)+this->p3.distancia(this->p1));
}
//----------------------------------------------------------------------questao6
float Triangulo::area()
{
    return(sqrt((this->perimetro()/2)*(this->perimetro()/2 - this->p1.distancia(this->p2))*(this->perimetro()/2 - this->p2.distancia(this->p3))*(this->perimetro()/2 - this->p3.distancia(p1))));
}
//q7
//q8
//----------------------------------------------------------------------questao10
float Retangulo::perimetro(){
    return(this->p1.distancia(p2)+this->p2.distancia(p3)+this->p3.distancia(p4)+this->p4.distancia(p1));
}
//----------------------------------------------------------------------questao11
float Retangulo::area(){
    return(this->p1.distancia(p2)*this->p2.distancia(p3));
}
//----------------------------------------------------------------------questao12
bool Retangulo::quadrado(){
    if(this->p1.distancia(p2)==this->p2.distancia(p3)&&this->p3.distancia(p4)==this->p4.distancia(p1))return(true);
    return(false);
}
//----------------------------------------------------------------------questao14
float Ciriculo::perimetro(){
	return(2*M_PI*this->raio);
}
//----------------------------------------------------------------------questao15
float Ciriculo::area(){
    return(M_PI*this->raio*this->raio);
}
//q16
//q17
//q18
//q19
//q20
//q21
//main
int main()
{

}
