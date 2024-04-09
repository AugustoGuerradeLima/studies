#include <stdio.h>
#include <stdlib.h>

void print_vetor(int* V, int n){
         for(int i=0; i<n; i++){
                 printf("%d\t", *(V+i));
         }
         printf("\n");
 }
 


void insertion_sort(int* V, int n){
	int i=0;
	int k=0;
	int aux;
	
	for(i=1;i<n;i++){
		k=i-1;
		aux=*(V+i);
		while(k>-1 && *(V+k)>aux){
			*(V+k+1)=*(V+k);
			k--;
		}
		*(V+k+1)=aux;
	}
}

 int main(){
         int* vetor;
         vetor = malloc(5*sizeof(int));

         *(vetor)=5;
         *(vetor+1)=2;
         *(vetor+2)=3;
         *(vetor+3)=9;
         *(vetor+4)=1;

         print_vetor(vetor, 5);

         insertion_sort(vetor, 5);

         print_vetor(vetor,5);

         free(vetor);

         return(0);
 }
