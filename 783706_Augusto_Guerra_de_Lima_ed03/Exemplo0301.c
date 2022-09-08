/*
 Exemplo0301 - v0.0. - 05 / 04 / 2022
 Author: 783706 Augusto Guerra de Lima
*/
//dependencias
#include "io.h" //para definicoes proprias

//method00 - nao faz nada
void method00()
{
    //nao faz nada
}//fim do method00

//method01 - repeticao com teste no inicio
void method01()
{
    //dados
    int x = 0;

    //identificar
    IO_id("Exemplo0301 - method01 - v.0.0");

    //ler do teclado o valor inicial
    x = IO_readint("Entrar com uma quantidade:");

    //repetir (x) vezes
    while(x>0)
    {
        //mostrar valor atual
        IO_printf("%d\n", x);
        //pasar para proximo valor
        x=x-1;
    }//fim repetir

    //encerrar
    IO_pause("Aperte ENTER para continuar");
}//fim method01()

/*
Funcao principal.
@return codigo de encerramento
*/
int main()
{
    //definir dado
    int x = 0;

    //repetir ate desejar parar

    do
    {
        //identificar
        IO_id("Exemplo0301 - Programa - v.0.0");

        //ler do teclado
        IO_printf("Opcoes:\n");
        IO_println("0 - parar");
        IO_println("1 - repeticao com teste no inicio");
        IO_println("");

        x = IO_readint("Entrar com uma opcao: ");

        //testar valor
        switch(x)
        {
            case 0:
            method00();
            break;

            case 1:
            method01();
            break;

            default:
            printf("Valor diferente das opcoes[0,1] %d\nEntrar com uma opcao:",x);
            getchar();
        }//fim escolher

    }
    while(x != 0);

    //encerrar
    IO_pause("Apertar ENTER para terminar");
    return(0);
}//fim main()
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0 - Encerra o programa
b.) 1 - Executa a tarefa
c.) 2 - Diz que o valor é diferente
d.) 3 - Diz que o valor é diferente
e.) 4 - Diz que o valor é diferente
f.) -1 - Diz que o valor é diferente
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
*/