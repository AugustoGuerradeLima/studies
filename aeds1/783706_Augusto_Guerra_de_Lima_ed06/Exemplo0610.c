/*
783706_Augusto_Guerra_de_Lima - Estudo Dirigido 06
*/
//dependencias
#include <stdio.h>
#include <string.h>
#include "io.h";
/*
method00 - nao faz nada
*/
void method00( )
{
    //nao faz nada
}//fim method0( )
/*
method01a - mostrar certa quantidade de valores recursivamente
@param x - quantidade de valores a serem mostrados
*/
void method01a(int x)
{
    //repetir enquanto valor maior que zero
    if(x>0)
    {
        //mostrar valor
        IO_printf("%s%d\n", "Valor = ", x);
        //passar ao proximo
        method01a(x-1); //motor da recursividade
    }//fim se
}//fim method01a( )
/*
method01 - mostrar certa quantidade de valores
*/
void method01( )
{
    //identificar
    IO_id("Exemplo0601 - method01 - v.0.0");

    //executar o metodo auxiliar
    method01a( 5 ); //motor da recursividade
    //encerrar
    IO_pause("Apetar ENTER para continuar");
}//fim method01( )

/*
method02a - mostrar certa quantidade de valores recursivamente.
@param x - quantidae de valores a serem mostrados
*/
void method02a(int x)
{
    //repetir enquanto valor maior que zero
    if(x>0)
    {
        //passar ao proximo
        method02a(x-1); // motor da recursividade
        //mostrar valor
        IO_printf("%s%d\n", "valor = ", x);
    }//fim se
}//fim method02a( )
/*
method02
*/
void method02( )
{
    //identificar
    IO_id("Exemplo0602 - method02 - v.0.0");
    //executar o metodo axiliar
    method02a(5); //motor da recursividade

    //encerrar
    IO_pause("Apertar ENTER para continuar");
}//fim method02( )
/*
method03a - mostrar certa quantidade de valores recursivamente
@param x - quantidade de valores a serem mostrados
*/
void method03a( int x )
{
    //repetir enquanto valor maior que zero
    if(x>1)
    {
        //passar ao proximo
        method03a(x-1);//motor da recursividade
        //mostrar valor
        IO_printf("%s%d\n", "valor = ", x);
    }
    else
    {
        //mostrar o ultimo
        IO_printf("%s\n", "valor = 1");
    }//fim se
}//fim method03a( )
/*
method03.
*/
void method03( )
{
    //identificar
    IO_id("Exemplo0603 - method03 - v.0.0");
    //executar metodo auxiliar
    method03a(5); //motor da recursividade

    //encerrar
    IO_pause("Aperte ENTER para continuar");
}//fim method03( )

/*
method04a - mostrar certa quantidade de vlaores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method04a(int x)
{
    //repetir enquanto valor maior que um
    if(x>1)
    {
        //passar ao proximo
        method04a(x-1); //motor da recursividade
        //mostrar valor
        IO_printf("%s%d\n", "valor = ", 2*(x-1));
    }
    else
    {
        //base da recursividade
        //mostrar o ultimo
        IO_printf("%s\n", "valor = 1");
    }//fim se
}//fim method04a( )
/*
method04.
*/
void method04( )
{
    //identificar
    IO_id("Exemplo0604 - method04 - v.0.0");
    //executar
    method04a(5); //motor da recursividade
    //encerrar
    IO_pause("Apertar ENTER para continuar");
}//fim method04( )

/*
method05a - mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method05a(int x)
{
    //repetir enquanto valor maior que um
    if(x>1)
    {
        //passar ao proximo
        method05a(x-1);//motor da recursividade
        //mostrar valor
        IO_printf("%d: %d/%d\n", x , (2*(x-1)), (2*(x-1)+1));
    }
    else
    {   //base da recursividade
        //mostrar o ultimo
        IO_printf("%d:%d\n",x,1);
    }//fim se
}//fim method05a( )
/*
method05.
*/
void method05( )
{
//identificar
IO_id("Exemplo0605 - method05 - v.0.0");
//executar o metodo auxiliar
method05a(5); //motor da recursividade
//encerrar
IO_pause("Apertar ENTER para continuar");
}//fim method05( )

/*
somarfracoes - somar certa quantidade de fracoes recursivamente.
@return soma de valores
@param x - quantidade de valores a serem mostrados
*/
double somarfracoes(int x)
{
    //definir dado local
    double soma = 0.0;

    //repetir enquanto valor maior que zero
    if(x>1)
    {
        //separa um valor e passar ao proximo(motor da recursividade)
        soma = (2.0*(x-1))/(2.0*(x-1)+1) + somarfracoes(x-1);
        //mostrar valor
        IO_printf("%d: %lf/%lf\n", x , (2.0*(x-1)), (2.0*(x-1)+1));
    }
    else
    {
        //base da recursividade
        soma = 1.0;
        //mostrar o ultimo
        IO_printf("%d: %lf\n", x , 1.0);
    }//fim se
    //retornar resultado
    return(soma);
}//fim somarfracoes
/*
method06.
*/
void method06( )
{
    //definir dado
    double soma = 0.0;

    //identificar
    IO_id("Exemplo0606 - method06 - v.0.0");

    //chamar a funcao e receber o resultado
    soma = somarfracoes(5);

    //mostrar resultado
    IO_printf("soma = %lf\n", soma);

    //encerrar
    IO_pause("Apertar ENTER para continuar");
}//fim method06( )

/*
somarfracoes2b - somar certa quantidade de fracoes recursivamente
@return soma de valores
@param x - quantidade de valores a serem mostrados(controle)
@param soma - valor atual da soma (historia = memoria)
@param numerador - numerador da parcela a ser somada
@param denominador - denominador da parcela a ser somada
*/
double somarfracoes2b(int x , double soma, double numerador , double denominador)
{
    //repetir enquanto valor maior que zero
    if(x>0)
    {
        //mostrar valores atuais
        IO_printf("%d: %lf/%lf\n", x, numerador, denominador);
        //somar o termo atual e passar ao proximo (motor da recursividade)
        soma = somarfracoes2b(x-1,
        soma + ((1.0*numerador)/ denominador),
        numerador +2.0,
        denominador+2.0);//ate agora nao entendi porque e +2.0
    }//fim se
    //retornar valor
    return(soma);
}//fim somarfracoes2b
/*
somarfracoes2a - somar certa quantidade de fracoes
                funcao de servico para prepar e 
                disparar o mecanismo recursivo
@return soma de valores
@param x - quantidade de valores a serem mostrados
*/
double somarfracoes2a(int x)
{
    //definir dado local
    double soma = 0.0;

    //repetir enquanto valor maior que zero
    if(x>0)
    {
        //mostrar o ultimo
        IO_printf("%d: %lf\n", x , 1.0);
        
        //preparar a soma do valor atual
        soma = somarfracoes2b(x-1,1.0,2.0,3.0);
    }//fim se
    //retonar valor
    return (soma);
}//fim somarfracoes2a
/*
method07.
*/
void method07( )
{
    //definir dado
    double soma = 0.0;

    //identificar
    IO_id("Exemplo0607 - method07 - v.0.0");

    //chamar a funcao e receber o resultado
    soma = somarfracoes2a(5);

    //mostrar resultado
    IO_printf("soma = %lf\n", soma);

    //encerrar
    IO_pause("Apertar ENTER para continuar");
}//fim method07( )

/*
contardigitos - contar digitos recursivamente.
@return quantidade de digitos
@param x - numero cuja quantidade de digitos sera calculada
*/
int contardigitos(int x)
{
    //definir dado
    int resposta = 1;//base

    //testar se contador valido
    if(x>=10)
    {
        //tentar fazer de novo com valor menor
        resposta = 1 + contardigitos(x/10);//motor 1
    }
    else
    {
        if(x<0)
        {
            //fazer de novo com valor absoluto
            resposta = contardigitos(-x);//motor 2
        }//fim se
    }//fim se
    //retornar resposta
    return(resposta);
}//fim contardigitos
method08( )
{
//identificar
IO_id("Exemplo0608 - method08 - v.0.0");

//mostrar resultado
IO_printf("digitos(%3d) = %d\n", 123, contardigitos(123));
IO_printf("digitos(%3d) = %d\n", 1 , contardigitos(1));
IO_printf("digitos(%3d) = %d\n", -10, contardigitos(-10));

//encerrar
IO_pause("Apertar ENTER para continuar");
}//fim method08( )
/*
fibonacci - gerador de numero de fibonacci.
@return numero de fibonacci
@param x - numero de ordem cujo valor sera calculado
*/
int fibonacci (int x)
{
    //dado
    int resposta = 0;

    //testar se contador valido
    if(x == 1 || x == 2)
    {
        //primeiros dois valores iguais a 1
        resposta = 1;//bases
    }
    else
    {
        if(x>1)
        {
            //fazer de novo com valor absoluto
            resposta = fibonacci(x-1)+fibonacci(x-2);
        }//fim se
    }//fim se
    //retornar resposta
    return(resposta);
}//fim fibonacci
/*
method09.
*/
void method09( )
{
    //identificar
    IO_id("Exemplo0609 - method09 - v.0.0");

    //calcular numero de fibonacci
    IO_printf("fibonacci(%d) = %d\n", 1, fibonacci(1));
    IO_printf("fibonacci(%d) = %d\n", 2, fibonacci(2));
    IO_printf("fibonacci(%d) = %d\n", 3, fibonacci(3));
    IO_printf("fibonacci(%d) = %d\n", 4, fibonacci(4));
    IO_printf("fibonacci(%d) = %d\n", 5, fibonacci(5));

    //encerrar
    IO_pause("Apertar ENTER para continuar");

}//fim method09( )
/*
contarminusculas - contador de letras minusculas.
@return quantidade de letras minusculas
@param x - cadeia de caracteres a ser avaliada
*/
int contarminusculas(chars cadeia, int x)
{
    //dado
    int resposta = 0;
    
    //testar se contador valido
    if(0<=x && x<strlen(cadeia))
    {
    //testar se letra minuscula
    if(cadeia[x]>='a' &&
        cadeia[x]<='z')
        {
            //fazer de novo com valor absoluto
            resposta = 1;
        }//fim se
        resposta = resposta + contarminusculas(cadeia, x + 1);
    }//fim se
    
    //retornar resposta
    return(resposta);

}//fim contarminusculas( )
/*
method10.
*/
void method10( )
{
    //identificar
    IO_id("Exemplo0610 - method10 - v.0.0");

    //contar minusculas
    IO_printf ( "Minusculas (\"abc\",0) = %d\n", contarminusculas ( "abc", 0 ) );
    IO_printf ( "Minusculas (\"aBc\",0) = %d\n", contarminusculas ( "aBc", 0 ) );
    IO_printf ( "Minusculas (\"AbC\",0) = %d\n", contarminusculas ( "AbC", 0 ) );

    //encerrar
    IO_pause("Apertar ENTER para continuar");

}//fim method10( )

int main( )
{
//dados
int escolha = 0;

//identificar
IO_id("Exemplo0601 - v.0.0");

do
{
//ler do teclado
IO_println("0 - parar");
IO_println("1 - mostrar certa quantidade de valores");
IO_println("2 - mostrar certa quantidade de valores");
IO_println("3 - mostrar certa quantidade de valores");
IO_println("4 - mostrar certa quantidade de valores em dobro");
IO_println("5 - mostrar certa quantidade de valores de parcelas de somatorios");
IO_println("6 - somar certa quantidade de fracoes");
IO_println("7 - somar certa quantidade de fracoes");
IO_println("8 - contar digitos");
IO_println("9 - gerador de fibonacci");
IO_println("10 - contar minusculas");
escolha = IO_readint("entre com uma opcao\n");

//comparar variavel
switch (escolha)
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
    printf("\nERRO - valor invalido, tente outra vez\n\n");
    break;
}

}
while(escolha != 0);

//encerrar
IO_pause("Aperte ENTER para finalizar");

}//fim main