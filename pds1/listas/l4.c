//Augusto Guerra de Lima 2022101086
#include <stdio.h>
#include <math.h>
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
//--------------------------------------------questao1c
int mdc3(int a,int b, int c)
{
    int result = 1;
    int i = 1;
    do
    {
        if((a%i==0)&&(b%i==0)&&(c%i==0))
        {
            result = i;
        }
        i++;
    } while ((i<=a)&&(i<=b)&&(i<=c));
    return(result);
}
void f3()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
	printf("\no mdc e: %d\n",mdc3(a,b,c));
}
//--------------------------------------------questao1d
int fib(int n)
{
    int result = 0;
    int fib1 = 1;
    int fib2 = 1;
    if(n==1)return(fib1);
    if(n==2)return(fib2);
    for (int i = 3; i<=n ; i++)
    {
        result = fib1 + fib2;
        fib1 = fib2;
        fib2 = result;
    }
    return(result);
}
void f4()
{
    int n;
    scanf("%d",&n);
    printf("\nsequencia de fibonacci ate o valor\n");
    for(int i = 1; i<=n; i++)
    {
        printf("%d ",fib(i));
    }
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
//--------------------------------------------questao1f
void f6()
{
    int n;
    scanf("%d",&n);
    for(int i = n; i>0;i--)
    {
        printf("\n\t%d\n",i);
    }
}
//--------------------------------------------questao1g
int res(int a, int b)
{
    int result;
    while(a>=b)
    {
        a=a-b;
        result = a;
    }
    return(result);
}
void f7()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("\nresto da divisao de %d por %d e %d\n",a,b,res(a,b));
}
//--------------------------------------------questao1h
int form(int n)
{
    int result = 0;
    for(int i = 1;i<n;i++){result = result + i*i;}
    return(result);
}
void f8()
{
    int n;
    scanf("%d",&n);
    printf("\na soma dos quadrados e %d\n",form(n));
}
//--------------------------------------------questao1i
int mmc(int a , int b)
{
    return(a*(b/mdc(a,b)));
}
void f9()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("\no mmc e %d\n",mmc(a,b));
}
//--------------------------------------------questao1j
int div(int a, int b)
{
    int result=0;
    while(a>=b)
    {
        a=a-b;
        result++;
    }
    return(result);
}
void f10()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("\ndivisao de %d por %d e %d\n",a,b,div(a,b));
}
//--------------------------------------------questao1l
float raiz(float n, float chute)
{
    while(1)
    {
        if(chute*chute >= n-0.001 && chute*chute <= n+0.001)
        {
            return(chute);
        }
        if(chute*chute>n){chute = chute*0.5;}
        else{ chute = chute * 1.5;}
    }
}
void f11()
{
    float n,chute;
    scanf("%f%f",&n,&chute);
    printf("\na raiz quadrada de %.3f e %.3f\n",n,raiz(n,chute));
}
//--------------------------------------------questao1m
int dig(int n)
{
    int result = 0;
    int right,left;
    while(n!=0)
    {
        right = n%10;
        left = n/10;
        result = result + right;
        n = left;
    }
    return(result);
}
void f12()
{
    int n;
    scanf("%d",&n);
    printf("\nsoma dos digitos: %d\n",dig(n));
}
//--------------------------------------------questao1n
int exponencial(int k, int n)
{
    int result = 1;
    for(int i = 1; i<=n; i++)
    {
        result = k*result; 
    }
    return(result);
}
void f13()
{
    int k,n;
    scanf("%d%d",&k,&n);
    printf("\nk^n e %d\n",exponencial(k,n));
}
//--------------------------------------------questao1o
void f14()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n;i++)
    {
        printf("\n\t%d\n",i);
    }
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
    case 0:printf("\ntchauzinho :)\n");break;
    case 1:f1();break;
    case 2:f2();break;
    case 3:f3();break;
    case 4:f4();break;
    case 5:f5();break;
    case 6:f6();break;
    case 7:f7();break;
    case 8:f8();break;
    case 9:f9();break;
    case 10:f10();break;
    case 11:f11();break;
    case 12:f12();break;
    case 13:f13();break;
    case 14:f14();break;
	default:printf("\nvalor invalido\n");break;
}
}while(c!=0);
return(0);
}
