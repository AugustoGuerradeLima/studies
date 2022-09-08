//783706-Augusto Guerra de Lima_AED1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( )
{
//dados
double l= 0.0;//lado
double l6= 0.0;//um sexto do lado
double V=0.0;//Volume

//identificar
printf ( "783706_AED1\n");

//ações
printf("insira o valor real do lado de um cubo\n");
scanf("%lf", &l);

l6= (l)/1.0/6.0;//formula do lado
V= l6*3;//formula do volume

printf("O valor do volume caso o lado fosse um sexto do inserido sera:\n");
printf("Volume: %lf \n", V);

//finalizar
printf("clique ENTER para finalizar");
getchar( );


return 0;

}