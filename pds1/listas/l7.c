#include <stdio.h>
#include <math.h>
void f1(int array[]){
	FILE*file1=fopen("naturais.txt","rt");	
	if(file1==NULL){
		printf("\narquivo vazio\n");
		return(1);
	}
	int i = 0;
	while(!feof(file1)){
		fscanf(f,"%d",&array[i]);
		i++;
	}
	fclose(file1);
return(0);
}

float f2(float array[], int n){
	float m = 0;
	for(int i = 0; i<n;i++)
	{
		m = m + array[i];
	}
	return(m/float(n));
}

float f3(float array[], int n){
	float v = 0;
	for(int i = 0; i<n ; i++)
	{
		v = v + (array[i] - f2(array[],n))*(array[i] - f2(array[],n));
	}
	v = v/(float)n;
	v = sqrt(v);
	return(v);
}

float f4(float array[], int n){
	float maior = array[0];
	for(i=0;i<n;i++)
	{
		if(maior<array[i])m=array[i];
	}
	return(maior);
}

float f5(float array[], int n){
        float menor = array[0];
        for(i=0;i<n;i++)
        {
                if(maior>array[i])m=array[i];
        }
        return(menor);
}

float f6(float array1[],float array2[],int n){
	float produtoEscalar = 0;
	for(int i = 0; i<n; i++)
	{
		produtoEscalar = produtoEscalar + array1[i]*array2[i];
	}
	return(produtoEscalar);
}
