/*
 Exemplo0216 - v0.0. - 02 / 04 / 2022
 Author: 783706_Augusto_Guerra de Lima
*/

//dependencias
#include "io.h"

int main( )
{
    //dados
    int number =0; //valor incial number1
    int number2 =0; //valor inical number2

    //identificar
    IO_id("Exemplo 0216 - Programa - v.0.0");

    //ler no teclado
    number = IO_readint("Entre com um valor inteiro:\n");
    number2 = IO_readint("Entre com outro valor inteiro:\n");

    //tarefas
    if((number%2)!=0)
    {
        IO_printf("Valor do primeiro numero e impar: %d\n", number);
    }
    else
    {
        IO_printf("Valor do primeiro numero e par: %d\n", number);
    }

    if((number2%2)==0)
    {
        IO_printf("Valor do segundo numero e par: %d\n", number2);
    }
    else
    {
        IO_printf("Valor do segundo numero e impar:%d\n", number2);
    }

    //finaliza
    IO_pause("Aperte ENTER para finalizar");
    return ( 0 );
}
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
 { 5, 15, 30, 45, 60, 75 }
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
 0.10 01. ( OK ) test void method
 EXERCICIO 1 ( OK ) teste par ou impar para variavel inteira
 EXERCICIO 2 ( OK ) teste par ou impar -30:30
 EXERCICIO 3 ( OK ) teste para intervalo aberto
 EXERCICIO 4 ( OK ) teste para intervalo fechado
 EXERCICIO 5 ( OK ) teste para dois intervalos fechados
 EXERCICIO 6 ( OK )
*/