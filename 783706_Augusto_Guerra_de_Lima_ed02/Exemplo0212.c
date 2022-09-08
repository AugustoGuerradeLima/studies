/*
 Exemplo0212 - v0.0. - 02 / 04 / 2022
 Author: 783706_Augusto_Guerra de Lima
*/

//dependencias
#include "io.h"

int main( )
{
    //dados
    int number =0; //valor incial
    int rest=0;//variavel resto

    //identificar
    IO_id("Exemplo 0212 - Programa - v.0.0");

    //ler no teclado
    number = IO_readint("Entre com um valor inteiro:");

    //tarefas
    rest= number % 2;//resto e o resto de numero de entrada por 2
     if(rest==0) //se for par
    {
        IO_printf("%s(%d)\n", "Numero par", number);
        if(number>-30)
        {
            IO_printf("%s(%d)\n", "Maior que -30", number); //maior que -30
        }
        else
        {
            IO_printf("%s(%d)\n", "Menor que -30", number); //menor que -30
        }//fim do se
    }
    else //se for impar
    {
        IO_printf("%s(%d)\n", "Numero impar", number);
        if(number<30)
        {
            IO_printf("%s(%d)\n", "Menor que 30", number); //menor que 30
        }
        else
        {
            IO_printf("%s(%d)\n", "Maior que 30", number); //maior que 30
        }//fim do se
    }//fim do se

    //finalizar
    IO_pause("Aperte ENTER para finalizar");
    return( 0 ) ;
}
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
{ -60, -33, 0, 13, 26, 39 }
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
*/