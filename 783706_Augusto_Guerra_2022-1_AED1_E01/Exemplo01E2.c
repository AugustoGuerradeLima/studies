//783706-Augusto Guerra de Lima_AED1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( )
{
//dados
double V=0.0;//Volume
double A;//area da superficie
double r;//raio

//identificar
printf ( "783706_AED1\n");

//ações
printf("insira o valor do volume da esfera\n");
scanf("%lf", &V);

V= V/2;//metade do volume
r= pow((V/(4/3*M_PI)), (1.0/3.0));//formula do raio
A= M_PI*pow(r,2);

printf("Para a metade do volume temos que:\n");
printf("Raio: %lf \n", r);
printf("Area da superficie: %lf \n", A);

//finalizar
printf("clique ENTER para finalizar");
getchar( );


return 0;

}