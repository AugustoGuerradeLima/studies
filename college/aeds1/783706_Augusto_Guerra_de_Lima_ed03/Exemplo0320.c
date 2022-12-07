#include "io.h"
#include <math.h>

int main ( void )
{
 // dados/resultados
        float min = 0.0;
        float max = 0.0;
        int vallues = 0;
        int vallue = 0;
        float n = 0.0;
        float frac = 0;
        int count = 0;

 // identificar
    IO_id("Exemplo0319 v.0.0.");



 // acoes
        //definindo o intervalo
       printf("Insira o valor minimo entre 0 e 1: ");
       scanf("%f", &min);
       printf("Insira o valor maximo entre 0 e 1: ");
       scanf("%f", &max);
       printf("Insira a quantidade de valores a serem testados");
       scanf("%d", &vallues);

        if((min<max) && (0<= min && min <= 1) && (0 <= max && min <= 1))
        {
                printf("\nIntervalo aberto (%f,%f)\n", min, max );
                
                for(vallue=1; vallue<=vallues; vallue++)
                {
                        printf("\nInsira um valor a ser testado: ");
                        scanf("%f", &n);


                        frac = n - (int)n;

                        if(frac < min || frac > max)
                        {
                                printf("A parte fracional esta fora do intervalo\n");

                                count++;
                        }
                        else
                        {
                                printf("A parte fracional esta dentro do intervalo\n");
                        }
                }
        }
        else
        {

                printf("ERRO: O valor minimo deve ser menor que o maximo alem disso ambos devem estar entre 0 e 1\n");
        }

        printf("numero de partes fracionadas fora do intervalo e: %d\n", count);

 // encerrar
         printf("\nApertar ENTER para terminar.\n");
         getchar( );   
         return (0);
}
/*
Exercicio 1 ( OK )
Exercicio 2 ( OK )
Exercicio 3 ( OK )
Exercicio 4 ( OK )
Exercicio 5 ( OK )
Exercicio 6 ( OK )
Exercicio 7 ( OK )
Exercicio 8 ( OK )
Exercicio 9 ( OK )
Exercicio 10 ( OK )

Observacao: Ao usar a biblioteca normal o programa estava com mal funcionamento (Algoritmo nao eficiente)
*/