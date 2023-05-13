#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
    double a,b,c;//data
    
    scanf("%lf%lf",&b,&c);//read
    
    a = sqrt(b*b+c*c);//formula
    
    printf("%lf",a);//write output
    
//return
return 0;
}//int main()
/*
com float tbm da, mas o sistema 
esta dando mais certo com a double
ja que ocorre mais precisão;

com float somente 0,4 / 1;

:(.
*/