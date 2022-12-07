#include <stdio.h>
#include <math.h>
//----------------------------------------------------------------------questao1
void f1(int array[]){
	FILE*file1=fopen("naturais.txt","rt");	
	if(file1==NULL){
		printf("\narquivo vazio\n");
        return(0);
	}
	int i = 0;
	while(!feof(file1)){
		fscanf(file1,"%d",&array[i]);
		i++;
	}
	fclose(file1);
}
//----------------------------------------------------------------------questao2
float f2(float array[], int n){
	float m = 0.0;
	for(int i = 0; i<n;i++)
	{
		m = m + array[i];
	}
	return(m/(float)n);
}
//----------------------------------------------------------------------questao3
float f3(float array[], int n){
	float v = 0;
	for(int i = 0; i<n ; i++)
	{
		v = v + (array[i] - f2(array,n))*(array[i] - f2(array,n));
	}
	v = v/(float)n;
	v = sqrt(v);
	return(v);
}
//----------------------------------------------------------------------questao4
float f4(float array[], int n){
	float maior = array[0];
	for(int i=0;i<n;i++)
	{
		if(maior<array[i])maior=array[i];
	}
	return(maior);
}
//----------------------------------------------------------------------questao5
float f5(float array[], int n){
        float menor = array[0];
        for(int i=0;i<n;i++)
        {
                if(menor>array[i])menor=array[i];
        }
        return(menor);
}
//----------------------------------------------------------------------questao6
float f6(float array1[],float array2[],int n){
	float produtoEscalar = 0;
	for(int i = 0; i<n; i++)
	{
		produtoEscalar = produtoEscalar + array1[i]*array2[i];
	}
	return(produtoEscalar);
}
//----------------------------------------------------------------------main
int main(){
    int c = 0;
    float n = 0.0;
    int array[1000];
    float v[1000] = {1,3,5};
    float u[1000] = {2,0,7};
    do
    {
        printf("\n0 - stop");
        printf("\n1 - file array");
        printf("\n2 - array average");
        printf("\n3 - array variance");
        printf("\n4 - bigger");
        printf("\n5 - smaller");
        printf("\n6 - scalar product\n");
        scanf("%d",&c);
        switch(c){
            case 0:break;
            case 1: f1(array);break;
            case 2: n = f2(v,3);printf("%f",n);break;
            case 3: n = f3(v,3);printf("%f",n);break;
            case 4: n = f4(v,3);printf("%f",n);break;
            case 5: n = f5(v,3);printf("%f",n);break;
            case 6: n = f6(v,u,3);printf("%f",n);break;
            default:printf("\ninvalid value\n");break;
        }
    } while (c!=0);
    
}
