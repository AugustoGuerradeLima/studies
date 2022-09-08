#include "io.h"

int main ( void )
{
 // dados/resultados
        char wordtake[100];
        char word[100];
        int len= 0;
        int charpass=0;
        int numin;

 // identificar
    IO_id("Exemplo0313 v.0.0.");



 // acoes
       /* strcpy( word, IO_readstring("Insira uma palavra:"));*/

        printf("Insira uma palavra:");
        scanf("%s", wordtake);

        strcpy(word, wordtake);

        len = strlen(word);

        for (charpass=len ; charpass>=0 ; charpass-- )
        {
                if(word[charpass]>='a' && word[charpass]<='z')
                {
                        printf("%c", word[charpass]);

                        numin++;
                }
        }//fim for
        
        //escrever a quantidade de minusculas
        printf("\n%s: %d", "Numero de minusculas",numin);

 // encerrar
         printf("\nApertar ENTER para terminar.\n");
         getchar( );   
         return (0);
}
/*
Exercicio 1 ( OK )
Exercicio 2 ( OK )
Exercicio 3 ( OK )
*/
