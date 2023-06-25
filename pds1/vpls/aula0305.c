#include <stdio.h>
int main()
{
    float max,med;
    scanf("%f%f",&max,&med);
    if(med>max&&med<1.2*max)printf("Infracao Media");
    if(med>=1.2*max&&med<=1.5*max)printf("Infracao Grave");
    if(med>1.5*max)printf("Infracao Gravissima");
    if(med<=max)printf("Sem Infracao");
    return(0);
}
