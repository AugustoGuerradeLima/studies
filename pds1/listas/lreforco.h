#include <stdio.h>
//----------------------------------------------------------------------0)
void printArray(int* data){
    for(int i = 0; i<10 ; i++){
        printf("\t%d", *(data + i));
    }
    printf("\n");
}
//----------------------------------------------------------------------1)
void readArray(char* filename, int* data){
    int i = 0;
    FILE* file = fopen(filename,"rt");
    while(!feof(file)){
        fscanf(file,"%d",&(*(data + i)));
        i++;
    }
    fclose(file);
}
//----------------------------------------------------------------------2)
void copyArray(int* v, int* u, int n){
    for(int i = 0; i<n; i++)*(u + i) = *(v + i);
}
//----------------------------------------------------------------------3)
void changePosition(int* data, int n, int m){
    int value = *(data + n);
    *(data + n) = *(data + m);
    *(data + m) = value;
}
//----------------------------------------------------------------------4)
int smallerK(int* data, int n, int k){
    int result = *(data + k);
    for(int i = k;i<n;i++){
        if(result > *(data + i)){
            result = *(data + i);
        }
    }
    return(result);
}
//----------------------------------------------------------------------5)
void insertionSort(int* data, int n){
    int i,j,k;
    for(i=1;i<=n;i++){
        k=*(data+i);
        j=i;
        while(j > 0 && data[j-1] > k){
            *(data + j) = data[j-1];
            j = j - 1;
        }
        *(data + j) = k;
    }
}