#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void printArr(int* arr,int n){
    for(int i = 0; i<n; i++){
        printf("\t%d",*(arr+i));
    }  
}

int inserirDados(char* filename, int* arr){
    FILE* file = fopen(filename,"rt");
    int count=0;
    if(file != NULL){
        while(!feof(file)){
            fscanf(file,"%d",&arr[count]);
            count++;
        }
    }
    fclose(file);
    return(count);
}

void busca(int* arr, int n,int guess){
    for(int i = 0; i<n;i++){
        if(arr[i]==guess){
            printf("\nexiste na posicao %d\n",i);
            return(0);
        }
    }
    printf("\nnao existe\n");
}

void trasprafrente(char* word){
    char c = ' ';
    int final = 4;
    for(int i = 0; i<2; i++){
        c = word[i];
        word[i] = word[final];
        word[final]=c;
        final--;
    }
    printf("%s", word);
}

int main(){
    int arr [100];
    char word [6]= "arroz";
    int size;
    size = inserirDados("dados.txt",arr);
    printArr(arr,size);
    busca(arr,size,6);

    trasprafrente(word);
    printf("\n%s",word);
}

