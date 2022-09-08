/*
    Exemplo0209 - v0.0.-01/04/2022
    Author:783706_Augusto Guerra de Lima
*/

//dependencias
#include "io.h"

int main ( )
{
    //dados
    int x = 0; //variavel com valor inicial

    //identificar
    IO_id ("EXEMPLO0209 - Programa -v0.0");

    //ler do teclado
    x = IO_readint("Entrar com um valor inteiro [0,1,2,3]:");

    //testar valor
    switch ( x )
    {
    case 0:
    IO_printf ( "%s (%d)\n", "Valor igual a zero", x );
    break;
    case 1:
    IO_printf ( "%s (%d)\n", "Valor igual a um ", x );
    break;
    case 2:
    IO_printf ( "%s (%d)\n", "Valor igual a dois", x );
    break;
    case 3:
    IO_printf ( "%s (%d)\n", "Valor igual a tres", x );
    break;
    default: // se nao alguma das opcoes anteriores
    IO_printf ( "%s (%d)\n", "Valor diferente das opcoes [0,1,2,3]", x );
    } // fim escolher
    
    //finalizar
    IO_pause ( "Apertar ENTER para terminar" );

    return ( 0 );
}//fim do main
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0
b.) 1
c.) 2
d.) 3
e.) 4
f.) -1
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
 0.8 01. ( OK ) switch case (char)
 0.9 01. ( OK ) switch case 2 (int)
*/