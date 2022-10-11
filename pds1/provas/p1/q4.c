#include<stdio.h>
void quad(int a , int b)
{
    if(b==a)printf("%d\t",b*b);
    else
    {
        quad(a,b-1);
        printf("%d\t",b*b);
    }
}
int main()
{
    quad(2,5);
    return(0);
}