/*
 Exemplo0304 - v0.0. - 05 / 04 / 2022
 Author: 783706 Augusto Guerra de Lima
*/
//dependencias
#include "io.h" //para definicoes proprias

//method00 - nao faz nada
void method00()
{
    //nao faz nada
}//fim do method00()

//method01 - repeticao com teste no inicio
void method01()
{
    //dados
    int x = 0;

    //identificar
    IO_id("Exemplo0304 - method01 - v.0.0");

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

//method02
void method02()
{
    //dados
    int x=0;
    int y=0;

    //identificar
    IO_id("Exemplo0304 - method02 - v.0.0");

    //ler do teclado
    x = IO_readint("Entrar com uma quantidade:");

    //repetir(x)vezes
    y=x; //copiar o valor lido
    while(y>0)
    {
        //mostrar valor atual
        IO_println(IO_toString_d(x));

        //passar ao proximo valor
        y=y-1;
    }//fim repetir
    //encerrar
    IO_pause("Apertar ENTER para continuar");

}//fim method02()

void method03()
{
    //dados
    int x= 0;
    int y= 0;

    //identificar
    IO_id("Exemplo0304 - method03 - v.0.0");

    // ler do teclado
    x = IO_readint ( "Entrar com uma quantidade: " );

    //repetir (x) vezes
    y = 1;
    while(y<=x)
    {
        //mostrar valor atual
        IO_printf("%d\n",y);
        //passar ao proximo valor
        y=y+1;
    }//fim repetir

    //encerrar
    IO_pause("Apertar ENTER para continuar");

}//fim method03()

void method04()
{
    //dados
    int x = 0;
    int y = 0;

    //identificar
    IO_id("Exemplo0304 - Method04 - v.0.0");

    //ler do teclado
    x = IO_readint ("Entrar com uma quantidade:");

    //repetir(x) vezes
    //  inicio trste variacao
    for(y=1; y<=x; y++)
    {
        //mostrar valo atual
        IO_printf("%d\n", y);
    }
    
   //encerrar
   IO_pause("Apertar ENTER para continuar");
   
}//fim method04()

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
        IO_id("Exemplo0304 - Programa - v.0.0");

        //ler do teclado
        IO_printf("Opcoes:\n");
        IO_println("0 - parar");
        IO_println("1 - repeticao com teste no inicio (decrescente)");
        IO_println("2 - repeticao com teste no inicio (alternativo)");
        IO_println("3 - repeticao com teste no inicio (crescente)");
        IO_println("4 - repeticao com teste no inicio (crescente)");
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

            case 2:
            method02();
            break;

            case 3:
            method03();
            break;

            case 4:
            method04();
            break;

            default:
            printf("Valor diferente das opcoes[0,1,2,3,4] %d\nEntrar com uma opcao:",x);
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
a.) 0 - method00
b.) 1 - method01
c.) 3 - method03
d.) 5 - default
e.) -5 - default
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
 0.2 01. ( OK ) alternativo
 0.3 01. ( OK ) crescente
 0.4 01. ( OK ) crescente de outro jeito
*/