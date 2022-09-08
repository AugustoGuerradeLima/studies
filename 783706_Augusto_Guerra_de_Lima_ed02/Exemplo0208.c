/*
    Exemplo0208 - v0.0.-01/04/2022
    Author:783706_Augusto Guerra de Lima
*/

//dependencias
#include "io.h"

int main ( )
{
    //dados
    char x = '_'; //variavel com valor inicial

    //identificar
    IO_id ("EXEMPLO0208 - Programa -v0.0");

    //ler do teclado
    x = IO_readchar("Entrar com um caractere [0, A , a]:");

    //testar valor
    switch(x)
    {   
        case '0':
        IO_printf("%s(%c=%d)", "Valor igual do simbolo zero", x,x);
        break;

        case 'A':
        IO_printf ( "%s (%c=%d)\n", "Valor igual 'a letra A", x, x );
        break;

        case 'a':
        IO_printf ( "%s (%c=%d)\n", "Valor igual 'a letra a", x, x );
        break;

        default: // se nao alguma das opcoes anteriores
        IO_printf ( "%s (%c=%d)\n", "Valor diferente das opcoes ['0','A','a']", x, x );
    }

    //finalizar
    IO_pause ( "Apertar ENTER para terminar" );

    return ( 0 );
}//fim do main
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0
b.) A
c.) a
d.) 1
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
 0.6 01. ( OK ) teste com char 2
 0.7 01. ( OK ) teste logico de negacao
 0.8 01. ( OK ) switch case
*/