/*
Exemplo0518
783706_Augusto_Guerra_de_Lima
*/

//dependencias
#include "io.h";
#include <math.h>//biblioteca matematica

/*
method00( ) - nao faz nada
*/
void method00( )
{
    //nada
}//fim method00( )

/*
mult7( ) - faz uma quantidade de multiplos de 7
@param x - numero de multiplos a se exibir
*/
int mult7(int x)
{
//dados locais
int count = 0;//controle contador
int result = 0;//resultado

//acoes
for(count = 1 ; count<=x ; count++)
{
    result = count*7;//multiplica o count por - funcao em si

    IO_printf("x = %d  y = %d\n",count , result);
}//fim enquanto

//valor a se retornar
return(result);

}//fim mult7

/*
method01( ) - executa a quantidade de numeros 7
*/
void method01( )
{ 
//dados
int x = 0;//numeros de multiplos

//identificar
IO_id("method01 - v.0.0");

//requisitar valores
printf("\ninsira quantos multiplos de 7 voce deseja: \n");
scanf("%d", &x);

//acoes
mult7(x);

//encerrar
IO_pause("Aperte ENTER para continuar");

}//fim method01( )

/*
int mult7even ( ) - valores multiplos de 7 pares
*/
int mult7even(int x)
{
//dados locais
int count = 0;//controle contador
int result = 0;//resultado

//acoes
for(count = 1 ; count<=x ; count++)
{
    result = count*14;//multiplica o count por 14 - funcao em si

    IO_printf("x = %d  y = %d\n",count , result);
  

}//fim enquanto

//valor a se retornar
return(result);

}//fim mult7even

/*
method02( ) - executa a quantidade de numeros 7 pares
*/
void method02( )
{ 
//dados
int x = 0;//numeros de multiplos

//identificar
IO_id("method01 - v.0.0");

//requisitar valores
printf("\ninsira quantos multiplos de 7 voce deseja: \n");
scanf("%d", &x);

//acoes
mult7even(x);

//encerrar
IO_pause("Aperte ENTER para continuar");

}//fim method02( )

/*
int mult7even ( ) - valores multiplos de 7 pares
*/
int mult7evendes(int x)
{
//dados locais
int count = 0;//controle contador
int result = 0;//resultado

//acoes
for(count = x ; count>=1 ; count--)
{
    result = count*7;//multiplica o count por 14 - funcao em si

    IO_printf("x = %d  y = %d\n",count , result);
  
}//fim enquanto

//valor a se retornar
return(result);

}//fim mult7even

/*
method03( ) - executa a quantidade de numeros 7 pares
*/
void method03( )
{ 
//dados
int x = 0;//numeros de multiplos

//identificar
IO_id("method01 - v.0.0");

//requisitar valores
printf("\ninsira quantos multiplos de 7 voce deseja: \n");
scanf("%d", &x);

//acoes
mult7evendes(x);

//encerrar
IO_pause("Aperte ENTER para continuar");

}//fim method03( )

/*
mult7( ) - faz uma quantidade de multiplos de 7
@param x - numero de multiplos a se exibir
*/
int mult7deno(int x)
{
//dados locais
int count = 0;//controle contador
int result = 0;//resultado

//acoes
for(count = 1 ; count<=x ; count++)
{
    result = count*7;//multiplica o count por - funcao em si

    IO_printf("x = %d  y = 1 / %d\n",count , result);
}//fim enquanto

//valor a se retornar
return(result);

}//fim mult7deno

/*
method04( ) - executa a quantidade de numeros 7 nos denominadores
*/
void method04( )
{ 
//dados
int x = 0;//numeros de multiplos

//identificar
IO_id("method04 - v.0.0");

//requisitar valores
printf("\ninsira quantos multiplos de 7 voce deseja: \n");
scanf("%d", &x);

//acoes
mult7deno(x);

//encerrar
IO_pause("Aperte ENTER para continuar");

}//fim method04( )

/*
power( ) - faz as potencias no denominador
@param x - valor a ser inserido na funcao
@param p - expoente
*/
int power(int x , int p)
{
    //dados
    int result = 0;//resultado
    int countp = 0;//potencia que incrementa

    //acoes
    for(countp = 0 ; countp<=p ; countp++)
    {
        result = pow(x,countp);//calculo do resultado no denominador
        
        printf("\n1 / %d\n", result);//o que sera escrito
    }

    //valor a se retornar
    return(result);

}//fim power( )

/*
method05( ) - aplica o power em uma execucao
*/
void method05( )
{
    //dados
    int np =   0;//numero de vezes da potencia
    int deno = 0.0;//denominador

    //identificar
    IO_id("method05 - v.0.0");

    //requistar valores
    printf("\ninsira quantas potencias voce deseja no denominador: \n");
    scanf("%d", &np);

    printf("\ninsira qual o valor real do denominador: \n");
    scanf("%d", &deno);

    //acoes
    power(deno, np);
    
    //encerrar
    IO_pause("Aperte ENTER para continuar");

}//fim method05( )

/*
posseven3 - calcula o valor da soma dos primeiros valores ímpares posiivos começando no valor 7
*/
int seventhree(int x)
{
    int number = 6;//numero que sempre incrementa a ser verificado inicia em 7
    int cont = 0;//contador
    int result = 0;//resultado a ser retornado

    while(cont < x)
    {
        number++;//numero incrementa

        //se responder as condiçoes
        if((number%2!=0)&&(number%3!=0))
        {
            printf("+ %d", number);//escreve os numeros separadamente
            result = result + number;//resultado soma o numero da sequencia
            cont++;//contador incrementa ate o valor do parametro int x que recebe n do void method06( )
        }

    }//fim enquanto

         printf("\n O valor da soma dos impares positivos a partir do valor 7 e nao multiplos de tres e: %d", result);

         return(result);

}//fim seventhree

/*
method06( ) - executa o seventhree( int x )
*/
void method06()
{
    //dados
    int n = 0; //numero de vezes

    //identificar
    IO_id("method06 - v.0.0");

    //requisitar o numero de vezes
    n = IO_readint("Insira um numero de vezes para somar na sequencia: ");

    if(n>0)
    {

    //acoes
    seventhree(n);

    }
    else
    {
        printf("Por favor, execute com uma quantidade positiva e inteira");
    }

    //encerrar
    IO_pause("Aperte ENTER para continuar");

}//fim method06

double seventhreefrac( int x )
{

    double number = 6.0;//numero que sempre incrementa a ser verificado inicia em 7
    int cont = 0;//contador
    double result = 0.0;//resultado a ser retornado

    while(cont < x)
    {
        number++;//numero incrementa

        //se responder as condiçoes
        if(((int)number % 2 != 0) && ((int)number % 3 != 0))
        {
            printf("+( 1 / %d) ", (int)number);//escreve os numeros separadamente
            result = result + (1.0/number);//resultado soma o numero da sequencia
            cont++;//contador incrementa ate o valor do parametro int x que recebe n do void method06( )
        }

    }//fim enquanto

         printf("\n O valor da soma dos impares positivos a partir do valor 7 e nao multiplos de tres e: %lf", result);

         return(result);


}//fim seventhreefrac

void method07()
{
    //dados
    int n = 0; //numero de vezes

    //identificar
    IO_id("method07 - v.0.0");

    //requisitar o numero de vezes
    n = IO_readint("Insira um numero de vezes para somar na sequencia: ");

    if(n>0)
    {

    //acoes
    seventhreefrac(n);

    }
    else
    {
        printf("Por favor, execute com uma quantidade positiva e inteira");
    }

    //encerrar
    IO_pause("Aperte ENTER para continuar");

}//fim method07

/*
natseven - calculo da soma dos naturais a partir de 7
*/
int natseven( int x )
{
    int cont = 0; //contador da funcao
    int number = 6;//numero com que se comeca
    int result = 0; //resultado a se retornar

    while(cont < x)
    {
        number++;//numero sempre incrementa
        result = result + number;//result soma com o valor de number

        cont++;//cont incrementa

        printf("+ %d", number);

    }//fim enquanto

    //escreve o resultado
    printf("\nO valor do resultado da soma dos naturais a partir do 7 com a quantidade definida e de: %d ", result);

    //valor a se retornar
    return(result);
}

/*
method08( ) - Executa a funcao natseven
*/
void method08( )
{
    //dados
    int n = 0; //numero de vezes

    //identificar
    IO_id("method08 - v.0.0");

    //coletar variavel n
    n = IO_readint("insira a quantidade a se testar");

    //acoes
    /*
    executa o natseven com n como parametro em int x
    */
   natseven(n);

    //encerrar
    IO_pause("Aperte ENTER para continuar");

}//method08

int squarenatseven( int x )
{

int cont = 0; //contador da funcao
    int number = 6;//numero com que se comeca
    int result = 0; //resultado a se retornar
    int power = 0;//potencia

    while(cont < x)
    {

        number++;//numero sempre incrementa

        power = pow(number,2);//calculo do quadrado do numero que incrementa

        result = result + power;//result soma com o valor de number

        cont++;//cont incrementa

        printf("+ %d", power);

    }//fim enquanto

    //escreve o resultado
    printf("\nO valor do resultado da soma dos naturais a partir do 7 com a quantidade definida e de: %d ", result);

    //valor a se retornar
    return(result);

}//fim squarenatseven

/*
method09( ) - executa a funcao do squarenatseven
*/
void method09( )
{

    //dados
    int n = 0; //numero de vezes

    //identificar
    IO_id("method08 - v.0.0");

    //coletar variavel n
    n = IO_readint("insira a quantidade a se testar");

    //acoes
    /*
    executa o natseven com n como parametro em int x
    */
    squarenatseven(n);

    //encerrar
    IO_pause("Aperte ENTER para continuar");

}//fim method09( )

/*
main( ) - funcao principal
*/
int main( )
{
//dados
int escolha = 0;//switch case

//identificar
IO_id("Exemplo0518 - v.0.0");

//repeticao

do
{
    //escolher
    IO_println("Opcoes");
    IO_println("0 - parar");
    IO_println("1 - mostrar certa quantidade de multiplos de 7");
    IO_println("2 - mostrar certa quantidade de multiplos de 7 pares");
    IO_println("3 - mostrar certa quantidade de multiplos de 7 decrescente");
    IO_println("4 - mostrar certa quantidade de multiplos de 7 no denominador");
    IO_println("5 - mostrar certa quantidade de potencias no denominador");
    IO_println("6 - mostrar a soma dos numeros impares positivos nao multiplos de tres a partir de 7");
    IO_println("7 - mostrar a soma dos numeros impares positivos nao multiplos de tres a partir de 7 como denominadores");
    IO_println("8 - mostrar a soma de certa quantia de numeros naturais a partir do 7");
    IO_println("9 - mostrar a soma de certa quantia dos quadrados de numeros naturais a partir do 7");

    escolha = IO_readint("Entrar com uma opcao\n");

    //testar valor
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

    default:
    IO_println("ERRO:Valor invalido");
 }//fim escolher
}
while(escolha != 0);

//finalizar
IO_pause("Aperte ENTER para continuar");
return(0);

}//fim main