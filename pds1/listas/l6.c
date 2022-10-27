//Augusto Guerra de Lima 2022101086
#include <stdio.h>
#include <math.h>
//---------------------------------------------------------------------------functions
int prime(int n,int d){
	if(d==1)return(1);
	if(n%d==0)return(0);
	return(prime(n,d-1));
}
double function1(double x){
    return((x*x) - (5.0*x) + 1.0);
}
double function2(double x, double a, double b, double c , double d){
    return(a*x*x*x + b*x*x + c*x + d);
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
        fscanf(file1,"%d",&n);
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
//---------------------------------------------------------------------------questao3
void f3(){
    FILE*file1 = fopen("NATURAL.txt","rt");
    FILE*primos = fopen("PRIMOS.txt","wt");
    FILE*outros = fopen ("OUTROS.txt","wt");
    int n;
    while(!feof(file1)){
        fscanf(file1,"%d",&n);
        if(prime(n,sqrt(n))){
            fprintf(primos,"%d\n",n);
        }
        else{
            fprintf(outros,"%d\n",n);
        }
    }
    fclose(file1);
    fclose(primos);
    fclose(outros);
}
//---------------------------------------------------------------------------questao4
void f4(){
    FILE*file1 = fopen("INPUT1.txt","rt");
    FILE*file2 = fopen("OUTPUT1.txt","wt");
    double n;
    while(!feof(file1)){
        fscanf(file1,"%lf",&n);
        n = function1(n);
        fprintf(file2,"%lf\n",n);
    }
    fclose(file1);
    fclose(file2);
}
//---------------------------------------------------------------------------questao5
void f5(){
    FILE*file1 = fopen("INPUT1.txt","rt");
    FILE*file2 = fopen("OUTPUT2.txt","wt");
    double a,b,c,d,n;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    while(!feof(file1)){
        fscanf(file1,"%lf",&n);
        n = function2(n,a,b,c,d);
        fprintf(file2,"%lf\n",n);
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
        printf("\n1- prime list");
        printf("\n2- prime or not 1");
        printf("\n3- prime or not 2");
        printf("\n4-Write function results");
        printf("\n5-Create functions\n");
        scanf("%d",&c);
        switch(c){
            case 0:break;
            case 1: f1();break;
            case 2: f2();break;
            case 3: f3();break;
            case 4: f4();break;
            case 5: f5();break;
            default: printf("\ninvalid value\n");
        }
    } while (c!=0);
    
    return(0);
}
