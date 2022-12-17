#include <stdio.h>

int binarySearch(int* array, int guess, int value, int size){
    int min = 0;
    int max = size - 1;
    while(min<=max){
        if(*(array + guess)==value){
            return(guess);
        }
        if(*(array + guess)<value){
            max = guess - 1;
        }
        if(*(array + guess)>value){ 
            min = guess + 1;
        }
    }
    return(-1); 
}
int main(){
    return(0);
}
