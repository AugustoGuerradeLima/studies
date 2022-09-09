//783706-Augusto Guerra de Lima_AED1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( )
{
//dados
double l= 0.0;
double h= 0.0;
double A= 0.0;
double P= 0.0;

//identificar
printf ( "783706_AED1\n");

//ações
printf("insira o valor real do lado de um triangulo equilatero\n");
scanf("%lf", &l);

h= (l*pow(3, 1.0/2.0))/2; //formula da altura

A= l*h/2;

P= l*3;

printf("O valor dos dados do triangulo equilatero sao:\n");
printf("Altura: %lf \n", h);
printf("Area: %lf \n", A);
printf("Perimetro: %lf \n", P);

//finalizar
printf("clique ENTER para finalizar");
getchar( );


return 0;

}