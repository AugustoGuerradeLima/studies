//dependencias
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include "io.h";

void method00( )
{
//nda
}//fim method00( )
//
//Exemplo0611-----------------------------------------------------------------------Exemplo0611
//
void method01a( int x, int valor )
{
    //dados

    if(x>0)
    {
        //mostrar o valor
        printf("%s %d\n", "valor = " ,valor);
        
        //passar para o proximo
        method01a(x-1, valor + 2); //motor da recursividade
    }//fim se
}//fim method01a( )
void method01()
{
    //dados
    int quantidade = 0;

    //escolher
    printf("escolha a quantidade:\n");
    scanf("%d", &quantidade);

    //identificar
    IO_id("Exemplo0620 - method01 - v.0.0");

    //executar o metodo auxiliar
    method01a(quantidade, 7);//motor da recursividade

    //encerrar
    IO_pause("Apertar ENTER para continuar");
}//fim method01( )
//
//Exemplo0612-----------------------------------------------------------------------Exemplo0612
//
void method02a( int x, int valor )
{
    //dados

    if(x>0)
    {
        //passar para o proximo
        method02a(x-1, valor + 7); //motor da recursividade
        //mostrar o valor
        printf("%s %d\n", "valor = " ,valor);
        
    }//fim se
}//fim method02a( )
void method02()
{
    //dados
    int quantidade = 0;

    //escolher
    printf("escolha a quantidade:\n");
    scanf("%d", &quantidade);

    //identificar
    IO_id("Exemplo0620 - method02 - v.0.0");

    //executar o metodo auxiliar
    method02a(quantidade, 7);//motor da recursividade

    //encerrar
    IO_pause("Apertar ENTER para continuar");
}//fim method02( )
//
//Exemplo0613-----------------------------------------------------------------------Exemplo0613
//
void method03a( int x , int valor)
{
    if(x>0)
    {
        if(valor<7)
        {
            printf("%s%d\n","valor = ", valor);
            method03a(x-1, valor+6);
        }
        if(valor>=7)
        {
            printf("%s%d\n","valor = ", valor);
            method03a(x-1, valor+7);
        }
    }
}//fim method03a
void method03( )
{
//dados
    int x = 0;
    int valor =1;

    //escolher
    printf("escolha a quantidade:\n");
    scanf("%d", &x);

    //identificar
    IO_id("Exemplo0620 - method03 - v.0.0");

    //executar o metodo auxiliar
    method03a(x, valor);//motor da recursividade

    //encerrar
    IO_pause("Apertar ENTER para continuar");
}//fim method03
//
//Exemplo0614-----------------------------------------------------------------------Exemplo0614
//
void method04a( int x )
{
    int result = 0;

    if(x>0)
    {
        result = pow(7,x);
        printf("\n1 / %d\n", result);
        method04a(x - 1);
    }
    else
    {
        printf("\n1\n");
    }
}//fim method04a( )
/*
method04
*/
void method04( )
{
    int quantidade = 0;

    printf("escolha uma quantidade: \n");
    scanf("%d", &quantidade);

    method04a(quantidade - 1);
}//fim method04( )
//
//Exemplo0615-----------------------------------------------------------------------Exemplo0615
//
/*
method05a - cadeia de caracteres.
*/
void method05a( char palavra[], int x)
{
    if(x>=0 && x<strlen(palavra))
    {
        printf("%c\n", palavra[x]);
        method05a(palavra, x + 1);
    }
}//fim method05a( )
/*
method05
*/
void method05( )
{
    //dados
    char palavra [80];

    //identificar
    IO_id("Exemplo0620 - method06 - v.0.0");

    //ler
    printf("escolha uma palavra ");
    scanf("%s", palavra);
    printf("%s\n", palavra);
    //executar metodo auxiliar
    method05a(palavra, 0);

    //encerrar
    IO_pause("Aperte ENTER para continuar");

}//fim method05( )
//
//Exemplo0616-----------------------------------------------------------------------Exemplo0616
//
void method06a(int quant, int n, int soma)
{
    if(quant>0)
    {
        printf("%3d + %3d = %3d\n", n, soma , soma+n);
        soma = soma + n;
        method06a(quant - 1, n+2 , soma);
    }
}//fim method06a( )
void method06( )
{
    int quant = 0;
    printf("escolha uma quantidade: ");
    scanf("%d", &quant);
    method06a(quant, 7, 0);
    printf("Aperte ENTER para continuar\n");
    getchar();
}//fim method06( )
//
//Exemplo0617-----------------------------------------------------------------------Exemplo0617
//
void method07a( int quant, float n, float soma)
{
    if(quant>0)
    {
        printf("%1.3f + 1/%1.3f = %1.3f\n", soma , n , soma + 1.0/n);
        soma = soma + 1.0/n;
        method07a(quant - 1, n+2, soma);
    }
}//fim method07a( )
void method07( )
{
    int quant = 0;
    printf("escolha uma quantidade: ");
    scanf("%d", &quant);
    method07a(quant, 7.0, 0.0);
    printf("Aperte ENTER para continuar\n");
    getchar();
}//fim method07( )
//
//Exemplo0618-----------------------------------------------------------------------Exemplo0618
//
fpares(int n)
{
    if(n==0){return (0);}//soma sera zero
    if(n==1){return (2);}//soma sera dois
    return(4*fpares(n-1)+fpares(n-2));//formula para os pares em fibonacci
}//fim fpares
fpsoma(int n)
{
    if(n<=1)
    {
        return (fpares(n));
    }//retorna apenas para 0 ou 1
    return(fpares(n)+fpsoma(n-1));//retorna a soma do atual com o anterior recursivamente
}//fim fpsoma
void method08( )
{
    //dados
    int n = 0;//quantidade a ser somada
    printf("\nescolha uma quantidade: ");//ler
    scanf("%d", &n);
    printf("\nsoma dos %d primeiros numeros pares de fibonacci = %d\n",n, fpsoma(n));//mostrar
    printf("\nAperte ENTER para continuar\n");
    getchar( );
}//fim method08( )
//
//Exemplo0619-----------------------------------------------------------------------Exemplo0619
//
void method09a(char palavra[], int x, int count)
{
    if(x>=0 && x<strlen(palavra))
    {
        if(palavra[x]>='0' && palavra[x]<='9')
        {
            if((int)palavra[x]%2 == 0)
            {

            count = count+1;
            printf("\n%d - %c\n", count , palavra[x]);
            
            }
        }
        method09a(palavra, x+1, count);
    }
}//fim method09a( )
void method09( )
{
    //dados
    char palavra [80];
    //ler
    printf("escolha uma palavra ");
    scanf("%s", palavra);
    printf("%s\n", palavra);
    //executar
    method09a(palavra,0,0);
    //encerrar
    printf("\nAperte ENTER para continuar\n");
    getchar( );
}//fim method09( )

//
//Exemplo0620-----------------------------------------------------------------------Exemplo0620
//
void method10a( char palavra [], int x, int count)
{
    if(x>=0 && x<=strlen(palavra))
    {
        if(palavra[x]>='A' && palavra[x]<='Z')
        {
            count = count+1;
            printf("%d - %c\n",count, palavra[x]);
            
        }//fim se
        method10a(palavra, x+1, count);
    }//fim se
}//fim method10a( )
void method10( )
{
    //dados
    char palavra [80];
    //ler
    printf("escolha uma palavra ");
    scanf("%s", palavra);
    printf("%s\n", palavra);
    //executar
    method10a(palavra,0,0);
    //encerrar
    printf("\nAperte ENTER para continuar\n");
    getchar( );
}//fim method10( )
//
//main------------------------------------------------------------------------------main
//
int main( )
{
    int escolha = 0;

    //identificar
    printf("ed06 - 783706 - Augusto Guerra de Lima\n");

    //repetir
    do
    {
        printf("opcoes\n");
        printf("0 - parar\n");
        printf("1 - mostrar valores impares a partir do 7\n");
        printf("2 - mostrar quantidade de multiplos de 7 decrescente\n");
        printf("3 - mostrar quantidade na sequencia de multiplos de 7\n");
        printf("4 - mostrar sequencia de potencias de 7 como denominadores\n");
        printf("5 - mostrar caracteres de palavra separadas\n");
        printf("6 - somar de quantidade de impares\n");
        printf("7 - somar quantidade de impares como denominadore\n");
        printf("8 - somar quantidade de fibonacci pares\n");
        printf("9 - contar quantidade de digitos pares em cadeia\n");
        printf("10 - contar quantidade de letras maiusculas em cadeia\n");

        scanf("%d", &escolha);

        switch(escolha)
        {
            case 0:
            method00( );
            break;

            case 1:
            method01( );
            break;

            case 2:
            method02( );
            break;

            case 3:
            method03( );
            break;

            case 4:
            method04( );
            break;

            case 5:
            method05( );
            break;

            case 6:
            method06( );
            break;

            case 7:
            method07( );
            break;

            case 8:
            method08( );
            break;

            case 9:
            method09( );
            break;

            case 10:
            method10( );
            break;

            default:
            printf("\nERRO - valor invalido\n");
            break;
        }
    }
    while(escolha!=0);
}//fim main( )