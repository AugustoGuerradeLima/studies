#include <stdio.h>
#include <math.h>
int nIteracao(double precisao)
{
    //dados
    double pi_aprox = 4.0;//valor inicial para sequencia de gregory-leibniz
    double denominador = 3.0;//valor inicial do denominador impar
    int contador = 0;//contador do numero de iteracoes
    int condicao = 1;//condicao para a iteracao se repetir
    //inicio da itercao
    while(condicao != 0)
    {   
        contador++;//houve uma iteracao contador incrementa
        pi_aprox = pi_aprox - (4.0/denominador);//sequencia infinita de gregory-leibniz
        if(abs(M_PI - pi_aprox) <= precisao)//caso a precisao seja atingida
        {
            condicao = 0;//condicao recebe zero e acaba a iteracao
        }
        denominador = denominador + 2.0;//denominador impar incrementa em dois
    }
    //retorna quantas vezes houve iteracao
    return(contador);
}//fim nIteracao()
int main()
{
    double precisao = 0.0;//inicia a variavel de precisao com algum valor
    scanf("%lf",&precisao);//le quanto de precisao deseja
    printf("%d",nIteracao(precisao));//escreve o numero de iteracoes
    return(0);
}