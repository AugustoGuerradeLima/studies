/*
 Exemplo0218 - v0.0. - 02 / 04 / 2022
 Author: 783706_Augusto_Guerra de Lima
*/

//dependencias
#include "io.h"

int main( )
{
    //dados
    float number =0.0; //valor incial number1
    float number2 =0.0; //valor inical number2

    //identificar
    IO_id("Exemplo 0218 - Programa - v.0.0");

    //ler no teclado
    number = IO_readint("Entre com um valor real:\n");
    number2 = IO_readint("Entre com outro valor real:\n");

    //tarefas
    if( number == number2)
    {
        IO_printf("Os valores sao iguais");
    }
    else
    {
        if (number<number2)
        {
            IO_printf("O segundo numero inserido e maior: (%lf < %lf)", number, number2);
        }
        else
        {
            IO_printf("O segundo numero inserido e menor: (%lf > %lf)", number, number2);
        }
    }

    //finalizar
    IO_pause("Aperte ENTER para finalizar");
    return( 0 ) ;
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
 EXERCICIO 7 ( OK )
 EXERCICIO 8 ( OK )
*/