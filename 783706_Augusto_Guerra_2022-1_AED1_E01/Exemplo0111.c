// 783706_Augusto Guerra de Lima_AED1
#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
 // dados/resultados
        int x =0; //valor inicial
        int y;//valor do cálculo
 
 // identificar
    printf ( "783706_AED1\n");
    
 // acoes
        printf("Entre com um valor inteiro:");
        scanf("%d", &x);

        y=x*x/4;

        printf("\nO valor de um quarto da area do quadrado e: %d \n", y);
    
 // encerrar
    printf ( "\nApertar ENTER para terminar.\n" );
    getchar( );   
    return (0);
}
