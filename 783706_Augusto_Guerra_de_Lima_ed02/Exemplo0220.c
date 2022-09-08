/*
 Exemplo0220 - v0.0. - 02 / 04 / 2022
 Author: 783706_Augusto_Guerra de Lima
*/

//dependencias
#include "io.h"

int main( )
{
    //dados
    float numero1 = 0.0;//primeiro valor
    float numero2= 0.0;//uma das extremidades
    float numero3= 0.0;//outra das extremidades

    //identificar
    IO_id("Exemplo 0220 - Programa - v.0.0");

    //ler no teclado
    numero1 = IO_readfloat("Insira um primeiro valor real:\n");
    numero2 = IO_readfloat("Insira um segundo valor real:\n");
    numero3 = IO_readfloat("Insira um terceiro valor real:\n");
    //tarefas
    if((numero2==numero3)||(numero2==numero1)||(numero3==numero1)||(numero1==numero2==numero3))
    {
        IO_printf("existem numeros iguais entre si, portanto o primeiro nao pode estar entre os outros\n \n valor 1:%lf \n valor2:%lf \n valor3:%lf\n",numero1,numero2,numero3);
        //caso numero2 e numero3 forem iguais
    }
    else
    {
        if((numero2<numero1 && numero1<numero3)||(numero3<numero1 && numero1<numero2))
        {
            IO_printf("O primeiro valor esta entre os outros dois:\n valor 1:%lf \n valor2:%lf \n valor3:%lf\n",numero1,numero2,numero3);
            //caso numero1 esteja entre numero2 e numero3 ou entre numero3 e numero2
        }
    else
    {
        IO_printf("O primeiro valor nao esta entre os outros dois valores inseridos: \n valor 1:%lf \n valor2:%lf \n valor3:%lf\n",numero1,numero2,numero3); //caso numero1 nao esteja entre os outros dois numeros (numero2 e numero3 ou numero3 e numero2)
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