//recursivenotesstudying
//--------------------------------------------fatorial
int fat(int n)
{
	if(n==0)return(1);//sempre precisa de um caso base
	else return(n*fat(n-1));//a multiplicacao acontece por fora e a recursao apenas decrementa o valor que é calculado
	/*de 14 acima pode dar overflow
	a partir de 34 o problema de overflow da o resultado 0 e isso e continuo*/
}
//--------------------------------------------mdc de dois números
int mdc(int a, int b)
{
	if(a<b)return(mdc(b,a));
	if(b==0)return(a);
	return(mdc(b,a%b));
}
	/*
	método de eucliádes
	propriedade -> mdc(a,b) = mdc(a,a-b) = mdc(a,a-b-b) = mdc(a, a-xb)

	D|d
	___
	r|q

	D = d*q + r

	r = D - q*d
	a%b = a - xb

	se o b for 0 retorna o a que seria o máximo divisor comum
	*/
//--------------------------------------------mdc de 3 números
int mdc3(int a,int b,int c)
{
	return(mdc(a,mdc(b,c)));
}
/*
x = mdc(b,c)
mdc(a,b,c)= mdc(a,x)
*/
//--------------------------------------------fibonacci
int fib(int n)
{
	if(n<2)return(1); //esse código considera a existência posião 0
	return(fib(n-1)+fib(n-2));
	/*
	depois dos fibonaccis bases calculamos dessa maneira
	*/
}
//--------------------------------------------números primos
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
//--------------------------------------------decrescente
void decrescente(int n)
{
	if(n==1){printf("%d\n",n);}
	else
	{
	printf("\t%d\n",n);
	decrescente(n-1);
	}
}
//--------------------------------------------resto
int res(int a,int b)
{
	if(a-b<0)return(a);
	return(res(a-b,b));
}
	/*
	tirar b de a varias vezes ate que b fique maior que a, ou seja, que atinja o resto, ainda assim, que a-b<0
	como atinge o resto deve retornar o valor de a
	*/
//--------------------------------------------somatório dos quadrados
int form(int n)
{
	if(n==1)return(1);
	return(n*n+form(n-1));
}
	/*
	n*n +...+3*3+2*2+1*1
	*/
//--------------------------------------------mmc de dois números
int mmc(int a, int b)
{
//mmc(a,b)= a * b/mdc(a,b)
return(a*(b/mdc(a,b)));//usa a fórmula de mmc, o mdc pe a parte recursiva do código
}
	//mmc(a,b)= a * b/mdc(a,b) e uma formula para calcular o problema de forma eficiente
	/*
	minhas notas
	if(a%b==0)return (a);
	return(a*b); isso seria suficiente para alguns casos como
	100 e 5 ou 3 e 4, mas nao para 20 e 24 por exemplo
	*/
//--------------------------------------------divisão inteira
int div(int a, int b)
{
	if(a<b)return(0);
	/*if(a-b<b)return(1);*/
	return(1+div(a-b,b));
}
/*
tira b de a ate a nao ser mais divisivel e a cada vez divisivel soma 1 no valor
*/
//--------------------------------------------raiz quadrada de um número
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
}
//--------------------------------------------soma dos dígitos de um número
int dig(int n)
{
	if(n%10==n)return(n);
	return(n%10+dig(n/10));
}
/*
n%10 tira um da direita
n/10 diminui o valor decimal de cada casa
*/
//--------------------------------------------exponecial
int expoente(int k,int n)
{
	if(n==0)return(1);//e melhor que n==1 return k já que calcula o n=0
	return(k*(expoente(k,n-1)));
}
//--------------------------------------------crescente
void crescente(int n)
{
	if(n==1){printf("%d\n",n);}
	else
	{
	crescente(n-1);//motor da recursividade
	printf("\t%d\n",n);//desempilhamento
	}
}


