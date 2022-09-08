//783706-Augusto Guerra de Lima_AED1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( )
{
//dados
double r=0.0;//raio do circulo
double A;//Area do circulo

//identificar
printf ( "783706_AED1\n");

//ações
printf("insira o valor da area de um circulo\n");
scanf("%lf", &r);

r= r/2;//raio pela metade
A= M_PI*pow(r,2);//formula da area do circulo

printf("A area do circulo caso o raio estivesse pela metade e de %lf\n", A);

//finalizar
printf("clique ENTER para finalizar");
getchar( );


return 0;

}