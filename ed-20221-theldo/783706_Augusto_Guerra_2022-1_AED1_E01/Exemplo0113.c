// 783706_Augusto Guerra de Lima_AED1
#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
 // dados/resultados
        double l1=0.0;
        double l2=0.0;
        double A=0.0;
 // identificar
    printf ( "783706_AED1\n");

 // acoes
        printf("Insira o valor inteiro do lado de um retangulo\n");
        scanf("%lf", &l1);

        printf("Insira outro valor inteiro como outro lado\n");
        scanf("%lf", &l2);

        A= l1*l2;

        printf("O valor de um terço da area e %lf", (A/3));




    
 // encerrar
    printf ( "\nApertar ENTER para terminar.\n" );
    getchar( );   
    return (0);
}