#include <stdio.h>
#include <stdlib.h>
#include<time.h>

const int SIZE = 1000000;

void random_v(int* V, int n){
    srand(time(NULL));
    for(int i = 0; i < SIZE; i++) {
    V[i] = rand();
    }
}

void print_v(int* V, int n){
	for(int i = 0; i<n; i++){
		printf("%d\t",V[i]);
	}
	printf("\n\nend_v\n");

}

void shell_sort(int* V, int n){

int aux = 0;

for(int g=n/2; g>0; g/=2){
	for(int i=g; i<n; i++){
		aux = *(V+i);
		
		int j;
		for(j = i; j>=g && *(V+j-g)>aux; j-=g){
			*(V+j) = *(V+j-g);
		}	
		*(V+j)=aux;
	}
}

}

int main(){

	int* v = malloc(SIZE*sizeof(int));

	random_v(v, SIZE);

	print_v(v, SIZE);

	clock_t start = clock();

	shell_sort(v, SIZE);

	clock_t end = clock();
	double execution = (double)(end - start) / CLOCKS_PER_SEC;

	print_v(v, SIZE);

	printf("\ntime\n%lf\n", execution);
	
	free(v);
	return(0);

}