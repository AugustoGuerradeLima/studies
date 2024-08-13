#include <stdio.h>
#include <stdlib.h>
#include "../include/unionFind.h"

typedef UnionFind* ref_dsu;

ref_dsu NovoUnionFind(int quantidade_subconjuntos)
{
	ref_dsu dsu = (ref_dsu)malloc(quantidade_subconjuntos*sizeof(Subconjunto));
	for(int x=0; x<quantidade_subconjuntos; x++)
	{
		Make(dsu, x);
	}
	return(dsu);
}
//end NovoUnionFind()

void DeletaUnionFind(ref_dsu dsu)
{
	free(dsu);
}
//end DeletaUnionFind()

void Make(ref_dsu dsu, int x)
{
	dsu[x].representante = x;
	dsu[x].rank = 1;
}
//end Make()

//Heuristica de compressao de caminho
int Find(ref_dsu dsu, int x)
{
	int r = x;
	while(dsu[r].representante != r)
	{
		r = dsu[r].representante;
	}
	dsu[x].representante = r;
	return(r);
}
//end Find()

//Uniao por ranque
void Union(ref_dsu dsu, int x, int y)
{
	int rootx = Find(dsu, x);
	int rooty = Find(dsu, y);

	if(rootx != rooty)
	{
		if(dsu[rootx].rank < dsu[rooty].rank)
		{
			dsu[rootx].representante = rooty;
		}
		else if(dsu[rootx].rank > dsu[rooty].rank)
		{
			dsu[rooty].representante = rootx;
		}
		else
		{
			dsu[rooty].representante = rootx;
			dsu[rootx].rank+=1;
		}
	}
}
//end Union()
