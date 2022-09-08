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

 // identificar
    IO_id("Exemplo0319 v.0.0.");



 // acoes
        //definindo o intervalo
       printf("Insira o valor minimo: ");
       scanf("%f", &min);
       printf("Insira o valor maximo: ");
       scanf("%f", &max);
       printf("Insira a quantidade de valores a serem testados");
       scanf("%d", &vallues);

        if(min<max)
        {
                while(vallue<vallues)
                {

                        vallue++;



                        printf("Insira o valor a ser testado: ");
                        scanf("%f", &n);

                        if(min<n && n<max)
                        {       
                                printf("[%d] essa e a parte inteira do numero e ele pertence ao intervalo --> [%f]\n", (int)n,n );
                                if((int)n % 2 != 0)
                                {
                                    printf("O valor da parte inteira e impar");
                                }
                                else
                                {
                                    printf("O valor da parte inteira e par");
                                }
                        }
                
                        else
                        {
                                printf("[%d] essa e a parte inteira do numero mas ele nao pertence ao intervalo --> [%f]\n", (int)n,n);
                        }

                        

                }
        }
        else
        {

                printf("ERRO: O valor minimo deve ser menor que o maximo\n");
        }

        

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

Observacao: Ao usar a biblioteca normal o programa estava com mal funcionamento (Algoritmo nao eficiente)
*/