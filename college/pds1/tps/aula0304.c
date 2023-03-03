#include <stdio.h>

int max(int a,int b,int c) 
{
    int max;
    max = a > b ? a: b;
    max = max > c ? max : c;
    return (max);
}

int med(int a,int b,int c)
{
    int med;
    if((b>a&&a>c)||(b<a&&a<c))med=a;
    if((a>b&&b>c)||(a<b&&b<c))med=b;
    if((a>c&&c>b)||(a<c&&c<b))med=c;
    return(med);
}

int min(int a,int b,int c) 
{
    int min;
    min = a < b ? a : b;
    min = min < c ? min : c;
    return (min);
}

int main()
{
    int a,b,c;
    int ma,me,mi;
    scanf("%d%d%d",&a,&b,&c);
    ma=max(a,b,c);
    me=med(a,b,c);
    mi=min(a,b,c);
    printf("%d%d%d",mi,me,ma);
    return(0);
}
