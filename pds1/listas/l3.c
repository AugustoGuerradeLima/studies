#include <stdio.h>

//----------------------------------------questao-1
float max(float a, float b, float c)
{
	if(a>b && a>c){return(a);}
	else
	{
		if(b>c){return(b);}
		else{return (c);}
	}//end if()
}//end max()


void f1(void)
{
	float a,b,c;
	float nmax;
	printf("\nescolha 3 numeros:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	//funcao
	nmax = max(a,b,c);

	printf("\no maior numero e  %f",nmax);
}//end f1()

//--------------------------------------------questao2
int parimpar(int n)
{
	return(n%2);
}//end parimpar()

void f2(void)
{
	int n,simnao;
	printf("\nescolha um numero\n");
	scanf("%d",&n);
	simnao = parimpar(n);
	printf("\ne impar?: %d\n",simnao);
}//end f2()

int main()
{	
	printf("\nLISTA 3 AUGUSTO \n");

	int c = 0;

	do
	{
	printf("escolha uma opcao:\n");
	printf("0-parar\n1-max\n2-par ou impar\n");
	scanf("%d",&c);

		switch(c)
		{	
			case 0:
			break;
			
			case 1:
			f1();
			break;

			case 2:
			f2();
			break;
			
			default:
			printf("\nvalor invalido\n");
			break;
		}	
	}
	while(c!=0);
	
	//return
	return(0);
}//end main()
