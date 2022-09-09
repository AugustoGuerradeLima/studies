/*
 Exemplo0310 - v0.0. - 05 / 04 / 2022
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
    IO_id("Exemplo0310 - method01 - v.0.0");

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
    IO_id("Exemplo0310 - method02 - v.0.0");

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
    IO_id("Exemplo0310 - method03 - v.0.0");

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

/**
 Method05 - Repeticao com teste no inicio e variacao.
*/
void method05 ( )
{
// definir dado
 int x = 0;
 int y = 0;
// identificar
 IO_id ( "Exemplo0305 - Method05 - v0.0" );
// ler do teclado
 x = IO_readint ( "Entrar com uma quantidade: " );
// repetir (x) vezes
// inicio teste variacao
 for ( y = x; y >= 1; y = y - 1 )
 {
 // mostrar valor atual
 IO_printf ( "%d\n", y );
 } // fim repetir
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} //fim method05()

/*
 Method06 - Repeticao sobre cadeia de caracateres.
*/
void method06()
{
    //dados
    int x = 0;
    int y = 0;

    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;

    //identificar
    IO_id("Exemplo0306 - method06 - v.0.0");
    
    //ler do teclado
    palavra = IO_readstring("Entrar com uma palavra, nao pode conter espacos:");

    //repetir para cada letra
    tamanho = strlen(palavra) -1;
    //OBS:A cadeia de caracteres iniciam suas posições em zero.

    //Inicio teste variacao
    for (y = tamanho; y>=0; y--)
    {
        IO_printf("%d:[%c]\n",y,palavra [y]);
    }//fim repetir

    //encerrar
    IO_pause("Apertar ENTER para continuar");

}//fim method06()

void method07 ()
{
    //dados
    int x = 0;
    int y = 0;

    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;

    //identificar
    IO_id ( "Exemplo0310 - Method07 - v0.0" );

    //pegar a letra
    palavra = IO_readstring("Entrar com uma palavra,  nao pode conter espacos: ");

    //acoes
    tamanho = strlen(palavra);

    for(y=0; y<tamanho; y++)
    {
        printf("%d:[%c]\n", y, palavra[y]);
    }
    //encerrar
    IO_pause("Aperte ENTER para continuar");

}

void method08()
{
    //dados
    int superior = 0;
    int inferior = 0;
    int x =        0;

    //identificar
    IO_id ( "Exemplo0310 - Method08 - v0.0" );

    //ler do teclado
    inferior = IO_readint("Limite inferior do intervalo:");
    superior = IO_readint("Limite superior do intervalo:");

    //inicio do teste variacao
    for(x = inferior; x<=superior; x = x+1)
    {
        //mostrar valor anual
        IO_printf("%d\n",x);

    }//fim repetir

    //encerrar
    IO_pause("Aperte ENTER para continuar");

}//fim method08()

/**
 Method09 - Repeticao com intervalos.
*/
void method09 ( )
{
// definir dado
 double inferior = 0;
 double superior = 0;
 double passo = 0;
 double x = 0;
// identificar
 IO_id ( "EXEMPLO0310 - Method09 - v0.0" );
// ler do teclado
 inferior = IO_readdouble ( "Limite inferior do intervalo : " );
 superior = IO_readdouble ( "Limite superior do intervalo : " );
 passo = IO_readdouble ( "Variacao no intervalo (passo): " );
// inicio teste variacao
 for ( x = superior; x >= inferior; x = x - passo )
 {
 // mostrar valor atual
 IO_printf ( "%lf\n", x );
 } // fim repetir
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method09()

void method10()
{
    //dados
    double inferior = 0;
    double superior = 0;
    double passo =    0;
    double x =        0;

    //identificar
    IO_id("Exemplo0310 - method10 - v.0.0");

    //ler do teclado
    inferior = IO_readdouble("Limite inferior do intervalo:");

    //repetir ate haver confirmacao de validade
    do
    {
        superior = IO_readint("Limite superior do intervalo:");
    }
    while(inferior>=superior);

    //repetir ate haver confirmacao de validade
    do
    {
        passo = IO_readdouble("Variacao no intervalo (passo):");
    } 
    while (passo<=0.0);

    //inicio teste variacao
    for (x = inferior; x<=superior ; x = x + passo)
    {
        //mostrar valor atual
        IO_printf("%lf\n", x);
    }//fim repetir

    //encerrar
    IO_pause("Apertar ENTER para continuar");

}//fim method10()

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
        IO_id("Exemplo0310 - Programa - v.0.0");

        //ler do teclado
        IO_printf("Opcoes:\n");
        IO_println("0 - parar");
        IO_println("1 - repeticao com teste no inicio (decrescente)");
        IO_println("2 - repeticao com teste no inicio (alternativo)");
        IO_println("3 - repeticao com teste no inicio (crescente)");
        IO_println("4 - repeticao com teste no inicio (crescente)");
        IO_println("5 - repeticao com teste no inicio (decrescente)");
        IO_println("6 - repeticao sobre cadeia de caracteres (decrescente) ");
        IO_println( "7 - repeticao sobre cadeia de caracteres ( crescente )" );
        IO_println ( "8 - repeticao com intervalos ( crescente )" );
        IO_println ( "9 - repeticao com intervalos (decrescente)" );
        IO_println ( "10 - repeticao com confirmacao " );
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

            case 5:
            method05();
            break;

            case 6:
            method06();
            break;

            case 7:
            method07();
            break;

            case 8:
            method08();
            break;

            case 9:
            method09();
            break;

            case 10:
            method10();
            break;
            
            default:
            printf("Valor diferente das opcoes[0,1,2,3,4,5,6,7,8,9] %d\nEntrar com uma opcao:",x);
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
a.) [ 0.1 : 0.5 ] e passo = 0.1
b.) [ 0.1 : 0.5 ] e passo = 0.1
c.) [ 0.5 : 0.1 ] e passo = 0.1
d.) [ 0.1 : 0.5 ] e passo = -0.1

---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
 0.2 01. ( OK ) alternativo
 0.3 01. ( OK ) crescente
 0.4 01. ( OK ) crescente de outro jeito
 0.5 01. ( OK ) decrescente de outro jeito
 0.6 01. ( OK ) caracteres decrescentes
 0.7 01. ( OK ) caracteres crescentes
 0.8 01. ( OK ) intervalo definido
 0.9 01. ( OK ) intervalo definido com passo definido
 1.0 01. ( OK ) intervalo repeticao com confirmacao
*/