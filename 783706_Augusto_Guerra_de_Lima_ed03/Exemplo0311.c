#include "io.h"

int main ( void )
{
 // dados/resultados
        char wordtake[100];
        char word[100];
        int len= 0;
        int charpass=0;
 // identificar
    IO_id("Exemplo0311 v.0.0.");



 // acoes
       /* strcpy( word, IO_readstring("Insira uma palavra:"));*/

        printf("Insira uma palavra:");
        scanf("%s", wordtake);

        strcpy(word, wordtake);

        len = strlen(word);

        for (charpass=0 ; charpass<len ; charpass++ )
        {
                if(word[charpass]>='a' && word[charpass]<='z')
                {
                        printf("%c", word[charpass]);
                }
        }

 // encerrar
         printf("\nApertar ENTER para terminar.\n");
         getchar( );   
         return (0);
}
/*
Exercicio1 ( OK )
*/