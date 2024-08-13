#ifndef UNIONFIND_H
#define UNIONFIND_H

typedef struct s_subset{
    int representante;
    int rank;
} Subconjunto;

typedef struct s_dsu{
    int representante;
    int rank;
} UnionFind;

UnionFind* NovoUnionFind(int quantidade_subconjuntos);
void DeletaUnionFind(UnionFind* dsu);
void Make(UnionFind* dsu, int x);
int Find(UnionFind* dsu, int x);
void Union(UnionFind* dsu,int x, int y);

#endif
