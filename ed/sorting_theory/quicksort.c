#include<stdio.h>
#include<stdlib.h>
#include<time.h>

const int SIZE = 1000000;

void random_v(int* V, int n){
    srand(time(NULL));
    for(int i = 0; i < SIZE; i++) {
    V[i] = rand()%100000;
    }
}

void print_v(int* V, int n){
	for(int i = 0; i<n; i++){
		printf("%d\t",V[i]);
	}
	printf("\n\nend_v\n");

}

int partition(int* v, int l, int h)
{	
	int pivot = v[h];
	int i = l-1;
	int aux;
	for(int j=l; j<h; j++)
	{
		if(v[j]<=pivot)
		{
			i++;
			aux=v[i];
			v[i]=v[j];
			v[j]=aux;
		}
	}
	v[h]=v[i+1];
	v[i+1]=pivot;
	return(i+1);
}

void quick_sort(int* v, int l, int h)
{
	if(l<h)
	{
		int p=partition(v,l,h);
		quick_sort(v,l,p-1);
		quick_sort(v,p+1,h);
	}
}

int main(){
	int* v = malloc(SIZE*sizeof(int));

	random_v(v, SIZE);

	print_v(v, SIZE);

	clock_t start = clock();

	quick_sort(v, 0, SIZE-1);

	clock_t end = clock();
	double execution = (double)(end - start) / CLOCKS_PER_SEC;

	print_v(v, SIZE);

	printf("\ntime\n%lf\n", execution);
	
	free(v);
	return(0);
}
