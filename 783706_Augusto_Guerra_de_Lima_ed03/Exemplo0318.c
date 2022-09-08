/*
783706_Augusto_Guerra_de_Lima
*/

//dependencias
#include <stdio.h>
#include "io.h"

int main()
{
    //dados
    int min = 0;
    int max = 0;
    int p = 0;
    int n = 0;
    int mul = 0;

    //identificar
    printf("Exemplo0318 - 783706_Augusto\n");

    //acoes
    /*
    definindo os intervalos
    */
    min = IO_readint("Escolha o numero inteiro minimo do intervalo ");

    max = IO_readint("Escolha o numero inteiro maximo do intervalo ");

    /*
    definindo o passo
    */
     p = IO_readint("Escolha o passo ");

    /*
    definindo o valor numerico
    */
    n = IO_readint("Escolha o valor inicial ");

    //acoes
   while (min<=n && n<=max)
   {
       printf("%d\n", n);
       n = n + p;

        if((n%5 == 0)&&(n%3!=0))
        {
            mul++;
        }

   }

        IO_printf("A quantidade de multiplos de cinco e que nao sao de tres e igual a %d\n", mul);

    //finalizar
    printf("Clique ENTER para finalizar");
    getchar( );
    return (0);    
}//fim do main
/*
Exercicio 1 ( OK )
Exercicio 2 ( OK )
Exercicio 3 ( OK )
Exercicio 4 ( OK )
Exercicio 5 ( OK )
Exercicio 6 ( OK )
Exercicio 7 ( OK )
Exercicio 8 ( OK )

Observacao: Ao usar a biblioteca normal o programa estava com mal funcionamento (Algoritmo nao eficiente)
*/