// 783706_Augusto Guerra de Lima_AED1
#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
 // dados/resultados
  double h=0;//altura
  double b=0;//base
  double A;//Area de 1/5 da altura
 
 // identificar
    printf ( "783706_AED1\n");
 
 // acoes
        printf("Insira a altura do triangulo\n");
        scanf("%lf", &h);
        printf("Insira a base do triangulo\n");
        scanf("%lf", &b);

        A= (b*(h/5))/2;

        printf("O valor da area caso a altura for um quinto do valor e %lf",A );
    
 // encerrar
    printf ( "\nApertar ENTER para terminar.\n" );
    getchar( );   
    return (0);
}