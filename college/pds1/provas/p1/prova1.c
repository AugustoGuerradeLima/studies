//primeira prova turma tf
#include <stdio.h>
#include <math.h>
//100011 em decimal e 35
//43 em binario é 101011
//A soma binaria de 35 e 43 e 1001110
//numero perfeito
void f1(int n){
    int soma_divisores=0;
    for(int i =1;i<n;i++){
        if(n%i==0)soma_divisores++;
    }
    if(soma_divisores==n)printf("perfeito!");
    else{
        printf("imperfeito!");
    }
}
//numeros pseudoaleatorios
//Xn+1=(aXn+c)%m
int gcl(int a, int c, int m, int k, int x){
    for(int i = 0; i<k;i++){
        x=(a*x+c)%m;
    }
    return(m);
}
//pontos
void f3(){
    int n;
    double x1,x2,y1,y2;
    double distancia_total=0.0;
    printf("quantos pontos sao?\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        printf("de x e y\n");
        scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
        distancia_total=distancia_total+(sqrt(pow(x1-x2),2)+pow((y1-y2),2));
    }
    printf("a distancia total e %lf",distancia_total);
}
//main
int main(){
    int n;
    scanf("%d"&n);
    f1(n);
    return(0);
}