//Augusto Guerra de Lima 2022101086
#include <stdio.h>
#include <math.h>
//---------------------------------------------------------------------------functions
int prime(int n,int d){
	if(d==1)return(1);
	if(n%d==0)return(0);
	return(prime(n,d-1));
}
//---------------------------------------------------------------------------questao1
void f1(){
    FILE*primes = fopen("PRIMES.txt","wt");
    int n;
    int cout=1;
    scanf("%d",&n);
    while(n>0){
        if(prime(cout,sqrt(cout))){
            fprintf(primes,"%d\n",cout);
            n--;
        }
        cout++;
    }
    fclose(primes);
}
//---------------------------------------------------------------------------questao2
void f2(){
    FILE*file1 = fopen("NATURAL.txt","rt");
    FILE*file2 = fopen("YN.txt","wt");
    int n;
    while(!feof(file1)){
        fscanf(file1,"%d",n);
        if(prime(n,sqrt(n))){
            fprintf(file2,"yes\n");
        }
        else{
            fprintf(file2,"not\n");
        }
    }
    fclose(file1);
    fclose(file2);
} 
//---------------------------------------------------------------------------main
int main(){
    int c;
    do
    {
        printf("\n0-Stop");
        printf("\n1-Write prime numbers");
        printf("\n2-Read natural numbers");
        printf("\n3-Read prime or not");
        printf("\n4-Write function results");
        printf("\n5-Create functions\n");
        scanf("%d",&c);
        switch(c){
            case 0:break;
            case 1: f1();break;
            case 2: f2();break;
            /*case 3: f3();break;
            case 4: f4();break;
            case 5: f5();break;*/
            default: printf("\ninvalid value\n");
        }
    } while (c!=0);
    
    return(0);
}
