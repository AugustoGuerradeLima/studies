//783706-Augusto Guerra de Lima_AED1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( )
{
//dados
double A=0.0;//area
double r;//raio

//identificar
printf ( "783706_AED1\n");

//ações
printf("insira o valor da area da circunferencia\n");
scanf("%lf", &A);

A= A*2;//dobro da area
r= pow((A/ M_PI), (1.0/2.0));//formula do raio

printf("O raio para o dobro dessa area e de %lf\n", r);

//finalizar
printf("clique ENTER para finalizar");
getchar( );


return 0;

}