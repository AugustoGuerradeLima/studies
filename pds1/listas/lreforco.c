//Augusto Guerra de Lima 2022101086
//Lista de reforco
#include <stdio.h>
#include "lreforco.h"
int main(){
    int array[100];
    int copy[100];
    int n,m,k,value;

    printf("\ndata inserted into array:\n");
    readArray("DATA.txt",array);
    printArray(array);
    printf("\n");

    printf("\ncreating array backup:\n");
    copyArray(array,copy,10);
    printArray(copy);
    printf("\n");

    printf("\nchoose two position values to be swapped: \n");
    printf("\nALERT: pay attention to the size of the array\n");
    printf("position 1: ");scanf("%d",&n);
    printf("position 2: ");scanf("%d",&m);
    changePosition(array,n,m);
    printArray(array);
    printf("\nit seems alright\n");

    printf("\nnow, from a position, we are going to select the smallest value\n");
    printf("position: ");scanf("%d",&k);
    value = smallerK(array,10,k);
    printf("the smallest value from the position %d is %d",k,value);
    printf("\n");

    printf("\nfinally let's get this mess in order:\n");
    printf("...using the lovely but not very efficient insertion sort algorithm:\n");
    insertionSort(array,10);
    printArray(array);
    printf("\nlooks like magic,but it was a slice of cake, wasn't it?\n");

    return(0);
}