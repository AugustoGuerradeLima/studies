//783706-Augusto Guerra de Lima_AED1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( )
{
//dados
double l1= 0.0;//lado 1
double l2= 0.0;//lado 2
double l3= 0.0;//lado 3
double V=0.0;//Volume

//identificar
printf ( "783706_AED1\n");

//ações
printf("insira tres valores para o lado de um paralelepipedo:\n");
scanf("%lf", &l1);
scanf("%lf", &l2);
scanf("%lf", &l3);

l1= l1*6;
l2= l2*6;
l3= l3*6;//aumentando os valores em seis vezes

V= l1*l2*l3;//formula do volume

printf("O Volume para os lados 6 vezes maiores e:\n");
printf("Volume: %lf \n", V);

//finalizar
printf("clique ENTER para finalizar");
getchar( );


return 0;

}