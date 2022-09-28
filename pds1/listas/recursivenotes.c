#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int fatorial(int n)
{
	if(n==0)return(1);//sempre precisa de um caso base
	else return(n*fatorial(n-1));//sao feitas chamadas recursivas no mesmo numero pedido
	/*de 14 acima pode dar overflow
	a partir de 34 o problema de overflow da o resultado 0 e isso e continuo*/
}//end fatorial()

int primo(int n, int d)//parametro d funciona como divisor
{
	/*if(n%d==0 && d>1)return(0);
	if(d==1)return(1);*/

	//codigo analogo
	//colocar o d==1 antes ja garante que d>1 logo nao tem que escrever isso e torna o codigo menor
	if(d==1)return(1);
	if(n%d==0)return(0);//caso base
	return(primo(n,d-1));
}//end primo()

/*
1 - sabemos que a raiz quadrada de n e sempre um numero menor que n
2 - ao colocar valores arbitrarios em um intervalo entre 1 e n podemos verificar se os valores sao maiores ou menores que o resultado
*/

float raiz(float n, float chute)
{
	if(chute*chute >= n-0.001 && chute*chute <= n+0.001)return(chute);/*ja retorna o chute se ele estiver correto 
									e o intervalo define uma margem de erro ja que a precisao
									absoluta nao e necessaria*/
	if(chute*chute > n) return(raiz(n,chute*0.5));//se subtrair inteiro da ruim mas 0.001 nao tem memoria suficiente
	if(chute*chute < n) return(raiz(n,chute*1.5));
}//end raiz()

int mdc(int a, int b)
{
	if(a<b)return(mdc(b,a));
	if(b==0)return(a);
	return(mdc(b,a%b));
}

int mmc(int a, int b)
{
//mmc(a,b)= a * b/mdc(a,b) e uma formula para calcular o problema de forma eficiente

/*
minhas notas
if(a%b==0)return (a);
return(a*b); isso seria suficiente para alguns casos como
100 e 5 ou 3 e 4, mas nao para 20 e 24 por exemplo
*/

return(a*(b/mdc(a,b)));
}

int main()
{
	int n = 0;
	float f =0.0;
	float chute = 0.0;

	//fatorial
	scanf("%d",&n);
	printf("o fatorial de %d e %d\n",n,fatorial(n));

	//primo
	scanf("%d",&n);
	/*printf("o numero %d e primo: %d\n",n,primo(n,n-1));*/
	//colocar raiz e uma funcao melhor
	printf("o numero %d e primo: %d\n",n,primo(n,sqrt(n)));

	//raiz
	scanf("%f,%f",&f,&chute);
	printf("raiz quadrada de %f e %f: \n",f,raiz(f,chute));

	return(0);
}//end main()
