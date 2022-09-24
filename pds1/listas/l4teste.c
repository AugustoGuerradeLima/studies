#include <stdio.h>
#include <math.h>
//--------------------------------------------questao1
int fat(int n)
{
	if(n==0)return(1);
	else return(n*fat(n-1));
}
void f1()
{
	int n = 0 ;
	scanf("%d",&n);
	fat(n);
}
//--------------------------------------------questao4
int fib(int n)
{
	if(n<2)return(1);
	return(fib(n-1)+fib(n-2));
}
void f4()
{
	int n = 0;
	scanf("%d",&n);
	printf("%d",fib(n));
}
//--------------------------------------------questao5
int primo(int n, int d)
{
	if(d==1)return(1);
	if(n%d==0)return(0);
	return(primo(n,d-1));
}
void f5()
{
	int n = 0;
	scanf ("%d",&n);
	printf("%d",primo(n,sqrt(n)));
}
int main()
{
int c = 0;
do
{
printf("\n0 - parar");
printf("\n1 - fatorial");
printf("\n4 - fibonacci");
printf("\n5 - primo");
scanf("%d",&c);
switch(c)
{
	case 0:
	break;
	case 1:
	f1();
	break;
	case 4:
	f4();
	break;
	case 5:
	f5();
	break;
}
}
while(0!=0);
return(0);
}
