#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SIZE = 1000000;

void print_v(int* V, int n){
	for(int i=0; i<n; i++){
		printf("%d\t", *(V+i));
	}
	printf("\n");
}

void random_v(int* V, int n){
    srand(time(NULL));
    for(int i = 0; i < SIZE; i++) {
    V[i] = rand();
    }
}

void bubble_sort(int* V, int n){
	int i=0;
	int k=0;
	int aux=0;
	int trocou=0;
	for(i=0;i<n-1;i++){
		trocou=0;
		for(k=0;k<n-1-i;k++){
			if(*(V+k)>*(V+k+1)){
				 aux=*(V+k);
				*(V+k)=*(V+k+1);
				*(V+k+1)=aux;
				trocou=1;
			}
		}
		if(trocou==0) break;
	}
}

int main(){
	int* v = malloc(SIZE*sizeof(int));

	random_v(v, SIZE);

//	print_v(v, SIZE);

	clock_t start = clock();

	bubble_sort(v, SIZE);

	clock_t end = clock();
	double execution = (double)(end - start) / CLOCKS_PER_SEC;

//	print_v(v, SIZE);

	printf("\ntime\n%lf\n", execution);
	
	free(v);
	return(0);

}
