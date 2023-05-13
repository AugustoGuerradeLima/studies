/*
 Exemplo02E2 - v0.0. - 02 / 04 / 2022
 Author: 783706_Augusto_Guerra de Lima
*/

//dependencias
#include "io.h"

int main( )
{
    //dados
    char numero1;//primeiro valor
    char numero2;//uma das extremidades
    char numero3;//outra das extremidades

    //identificar
    IO_id("Exemplo 02E2 - Programa - v.0.0");

    //ler no teclado
    numero1 = IO_readchar("Insira um primeiro caractere:\n");
    numero2 = IO_readchar("Insira um segundo caractere:\n");
    numero3 = IO_readchar("Insira um terceiro caractere:\n");
    //tarefas
    if(numero2==numero3)
    {
        IO_printf("O segundo valor e o terceiro tem o mesmo valor, portanto o primeiro nao pode estar no intervalo:\nvalor 2:%c \nvalor 3:%c\n", numero2, numero3);
    }
    else
    {
        if((numero2<numero1 && numero1<numero3)||(numero3<numero1 && numero1<numero2))
        {
            IO_printf("O primeiro valor esta entre o intervalo dos outros dois:\nvalor 1:%c \nvalor 2:%c \nvalor 3:%c\n", numero1, numero2, numero3);

        }
        else
        {
            IO_printf("O primeiro valor nao esta entre o intervalo dos outros dois:\nvalor 1:%c \nvalor 2:%c \nvalor 3:%c\n", numero1, numero2, numero3);
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
 EXERCICIO 9 ( OK )
 EXERICIO 10 ( OK )
*/