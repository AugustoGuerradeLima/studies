#include <stdio.h>

//--------------------------------------------questao1a
int fat(int n)
{
	int result = 1;
	for(int i = 1; i <= n; i++)
	{
	result = result * i;
	}
	return(result);
}
void f1()
{
	int n = 0 ;
	scanf("%d",&n);
	printf("\no fatorial de %d e %d\n",n,fat(n));
}
//--------------------------------------------questao1b
int mdc(int a, int b)
{
	int result = 1;//primeiro mdc
	int i = 1;
	do
	{
		if((a%i==0)&&(b%i==0))
		{
			result = i;
		}
		i++;
	}while((i<=a)&&(i<=b));
	return(result);
}
void f2()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("\no mdc e: %d\n",mdc(a,b));
}
//--------------------------------------------questao1e
int primo(int n)
{
	int result = 1;
	for(int i=2; i<n;i++)
	{
		if(n%i == 0)
		{
			result = 0;
			i = n;
		}
	}
	return(result);
}
void f5()
{
	int n = 0;
	scanf ("%d",&n);
	printf("\ne primo ?: %d\n",primo(n));
}
//--------------------------------------------main
int main()
{
int c = 0 ;
do
{
printf("\n0 - parar");
printf("\n1 - fatorial");
printf("\n2 - mdc");
printf("\n3 - mdc3");
printf("\n4 - fibonacci");
printf("\n5 - primo");
printf("\n6 - decrescente");
printf("\n7 - resto");
printf("\n8 - somatorio dos quadrados");
printf("\n9 - mmc");
printf("\n10 - divisao");
printf("\n11 - raiz quadrada");
printf("\n12 - soma dos digitos");
printf("\n13 - exponecial");
printf("\n14 - crescente\n");
scanf("%d",&c);
switch(c)
{
	case 0:
	printf("\ntchauzinho :)\n");
	break;
	case 1:
	f1();
	break;
	case 2:
	f2();
	break;
	case 5:
	f5();
	break;
	default:
	printf("\nvalor invalido\n");
	break;
}
}while(c!=0);
return(0);
}
