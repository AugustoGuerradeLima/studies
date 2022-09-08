// 783706_Augusto Guerra de Lima_AED1
#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
 // dados/resultados
        double l1=0.0;
        double l2=0.0;
        double dl1;
        double dl2;
        double A;
        double P;
 
 // identificar
    printf ( "783706_AED1\n");

 // acoes
        printf("Insira dois valores como lados de um retangulo:");
        scanf("%lf", &l1);
        scanf("%lf", &l2);

        dl1=2*l1;
        dl2=2*l2;

        A=dl1*dl2;
        P=2*dl1 + 2*dl2;

        printf("Em um retangulo com lados duas vezes maiores temos que\n");
        printf("Area: %lf\n", A);
        printf("Perimetro: %lf\n", P);
            
 // encerrar
    printf ( "\nApertar ENTER para terminar.\n" );
    getchar( );   
    return (0);
}