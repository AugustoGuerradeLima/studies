// 783706_Augusto Guerra de Lima_AED1
#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
 // dados/resultados
        int l=0;//lado
        int l3=0;//lado 3X
        int A=0;//area
        int P;//perimetro
 
 // identificar
    printf ( "783706_AED1\n");

 // acoes
        printf("Entre com um valor inteiro:");
        scanf("%d", &l);

        l3=3*l;
        A=l3*l3;
        P=l3*4;

        printf("\nO valor em um triangulo 3 vezes maior e\n");
        printf("Area: %d\n", A);
        printf("Perimetro: %d\n", P);





    
 // encerrar
    printf ( "\nApertar ENTER para terminar.\n" );
    getchar( );   
    return (0);
}