/*
    Exemplo0204 - v0.0.-01/04/2022
    Author:783706_Augusto Guerra de Lima
*/

//dependencias
#include "io.h"

int main ( )
{
    //dados
    double x=0.0; //variavel com valor inicial

    //identificar
    IO_id ("EXEMPLO0204 - Programa -v0.0");

    //ler do teclado
    x = IO_readdouble("Entrar com um valor real:");

    //testar valor
    if(1.0<=x && x<=10)
    {
        IO_printf("%s(%lf)\n", "Valor dentro do intervalo [1:10]", x);
    }
    else
    {
        IO_printf("%s(%lf)\n", "Valor fora do intervalo [1:10]", x);
        if( x < 1.0)
        {
            IO_printf("%s(%lf)\n", "Valor abaixo do intervalo [1:10]", x);
        }
        else
        {
            IO_printf("%s(%lf)\n", "Valor acima do intervalo [1:10]", x);
        } //fim do se aninhado
    } //fim do se
    //encerrar
    IO_pause("Apertar ENTER para terminar");

    return ( 0 );
}//fim do main
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0
b.) 1
c.) 10
d.) -1
e.) 100
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
 0.2 01. ( OK ) teste com int
 0.3 01. ( OK ) teste com double
 0.4 01. ( OK ) teste com double 2
*/