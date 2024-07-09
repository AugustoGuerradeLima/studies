#include<stdio.h>
#include<stdlib.h>
#include"../include/heap.h"

int main()
{
	int n,x; scanf("%d", &n);

	ref_Heap h = NovoHeap(n);
	
	while(n--)
	{
		scanf("%d", &x);
		Inserir(h,x);
	}

	while(!Vazio(h))
	{
		x=Remover(h);
		printf("%d ",x);
	}
	printf("\n");
}

