#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() 
{
int A, B;//data

//impossível ler bool deve fazer uma conversão
scanf("%d%d",&A,&B);

printf("AND: %d OR: %d XOR: %d", (bool)(A&B), (bool)(A|B), (bool)(A^B));//write output

//return	
return 0;
}//end main()