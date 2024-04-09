#include<stdio.h>
#include<stdlib.h>
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

void merge(int* V, int l, int mid, int h){
	int* c = malloc((h+1)*sizeof(int));
	int i = l;
	int j = mid+1;
	int k = 0;
	
	while(i<=mid && j<=h){
		if(*(V+i)<*(V+j)){
			c[k++]=V[i++];
		}
		else{
			c[k++]=V[j++];
		}
	}
	while(i<=mid){
		c[k++]=V[i++];
	}
	while(j<=h){
		c[k++]=V[j++];
	}

	k=0;

	for(int r = l; r<=h; r++){
		V[r]=c[k];
		k++;
	}

	free(c);
}

void merge_sort(int* V, int l, int h){
	int mid = (h+l)/2;
	
	if(l<h){
		merge_sort(V, l ,  mid);
		merge_sort(V, mid+1, h);
		merge(V, l, mid, h);
	}
}

int main(){
	int* v = malloc(SIZE*sizeof(int));

	random_v(v, SIZE);

	print_v(v, SIZE);

	clock_t start = clock();

	merge_sort(v, 0, SIZE-1);

	clock_t end = clock();
	double execution = (double)(end - start) / CLOCKS_PER_SEC;

	print_v(v, SIZE);

	printf("\ntime\n%lf\n", execution);
	
	free(v);
	return(0);
}
