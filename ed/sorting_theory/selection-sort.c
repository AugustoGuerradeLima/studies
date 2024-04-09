#include <stdio.h>
#include <stdlib.h>

void print_vetor(int* V, int n){
          for(int i=0; i<n; i++){
                  printf("%d\t", *(V+i));
          }
          printf("\n");
  }


void selection_sort(int* V, int n){
	int i=0;
	int k=0;
	int min;
	int aux=0;

	for(i=0;i<n-1;i++){	
		min=i;
		for(k=i+1;k<n;k++){
			if(*(V+min)>*(V+k)){
				min=k;						
			}
		}
		aux=*(V+i);
		*(V+i)=*(V+min);
		*(V+min)=aux;
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
  
 	selection_sort(vetor,5);

          print_vetor(vetor,5);
  
          free(vetor);
  
          return(0);
  }