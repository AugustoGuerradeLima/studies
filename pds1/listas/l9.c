//Augusto Guerra de Lima 2022101086
#include <stdio.h>
#include <math.h>
//q1
struct Ponto {
	float x;
	float y;
	float distancia(Ponto& p);
	void atribuir(float a, float b);
};
typedef Ponto* ref_Ponto;
//q2
float Ponto::distancia(Ponto& p)
{
	return(sqrt((this->x - p.x)*(this->x - p.x) + (this->y - p.y)*(this->y - p.y)));
}
//q3
void Ponto::atribuir(float a, float b)
{
	this->x=a;
	this->y=b;
}
//q4
struct Triangulo {
	Ponto p1,p2,p3;
	float perimetro();
};
typedef Triangulo ref_Triangulo;
//q5
float Triangulo::perimetro()
{
	return(this->p1.distancia(this->p2)+this->p2.distancia(this->p3)+this->p3.distancia(this->p1));
}
//q6
//q7
//q8
//q9
//q10
//q11
//q12
//q13
struct Ciriculo {
	Ponto centro;
	float raio;
	float perimetro();
};
typedef Ciriculo* ref_Ciriculo;
//q14
float Ciriculo::perimetro(){
	return(2*M_PI*this->raio);
}
//q15
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
