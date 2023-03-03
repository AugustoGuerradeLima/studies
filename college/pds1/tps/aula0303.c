#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((b>a&&a>c)||(b<a&&a<c))printf("%d",a);
    if((a>b&&b>c)||(a<b&&b<c))printf("%d",b);
    if((a>c&&c>b)||(a<c&&c<b))printf("%d",b);
    return(0);
}
