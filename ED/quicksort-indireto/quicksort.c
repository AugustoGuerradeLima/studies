#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int chave;
	int conteudo[1000000];
}item;

void partition(int Esq, int Dir, int* i, int* j, item* a)
{
	item pivo,aux;
	*i = Esq;
	*j = Dir;

	pivo=a[(*i+*j)/2];

	do{
		while(pivo.chave>a[*i].chave)(*i)++;
		while(pivo.chave<a[*j].chave)(*j)--;

		if(*i<=*j)
		{
			//swap
			aux = a[*i];
			a[*i]=a[*j];
			a[*j]=aux;
			(*i)++;
			(*j)--;
		}

	}while(*i<=*j);
}

void sort(int Esq, int Dir, item* a)
{
	int i, int j;
	partition(Esq, Dir, &i, &j, a);
	if(Esq<j) sort(Esq, j, a);
	if(i<Dir) sort(i, Dir, a);
}

void quick_sort(item* a, int n)
{
	ordena(0,n-1,a);
}
