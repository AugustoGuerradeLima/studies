//783706-Augusto Guerra de Lima_AED1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( )
{
//dados
double r=0.0;//raio da esfera
double V;//Volume da esfera
//identificar
printf ( "783706_AED1\n");

//ações
printf("insira o valor de uma esfera\n");
scanf("%lf", &r);

r= r/(3.0/8.0);//raio agora assume tres oitavos do raio inserido pelo usuario
V=(4.0/3.0)*M_PI*pow(r,3);//formula do volume da esfera

printf("O volume para tres oitavos do raio inserido e %lf\n", V);

//finalizar
printf("clique ENTER para finalizar");
getchar( );


return 0;

}