/*
    Exemplo0205 - v0.0.-01/04/2022
    Author:783706_Augusto Guerra de Lima
*/

//dependencias
#include "io.h"

int main ( )
{
    //dados
    char x = '_'; //variavel com valor inicial

    //identificar
    IO_id ("EXEMPLO0205 - Programa -v0.0");

    //ler do teclado
    x = IO_readchar("Entrar com um caractere:");

    //testar valor
    if ('a'<=x && x<='z')
    {
        IO_printf('%s(%c)\n', "Letra minuscula ", x);
    }
    else
    {
        IO_printf("%s (%c)\n", "Valor diferente de minuscula", x);
        if('A'<=x && x<='Z')
        {
            IO_printf("%s(%c)\n", "Letra maiscula", x);
        }
        else
        {
            if('0'<= x && x<= '9')
            {
                IO_printf("Algarismo (%c) \n", x);
            }
            else
            {
                IO_printf("Valor difrente de algarismo (%c)\n", x);
            }
        }
    }   
    return ( 0 );
}//fim do main
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) a
b.) A
c.) 0
d.) #
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
 0.2 01. ( OK ) teste com int
 0.3 01. ( OK ) teste com double
 0.4 01. ( OK ) teste com double 2
 0.5 01. ( OK ) teste com char
*/