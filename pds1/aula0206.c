#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    char c = 'a';//data
    
    scanf("%c",&c);//read input
    
    if(c=='a'||c=='b'||c=='c')
    {
        x = 2;
    }
        if(c=='d'||c=='e'||c=='f')
    {
        x = 3;
    }
        if(c=='g'||c=='h'||c=='i')
    {
        x = 4;
    }
        if(c=='j'||c=='k'||c=='l')
    {
        x = 5;
    }
        if(c=='m'||c=='n'||c=='o')
    {
        x = 6;
    }
        if(c=='p'||c=='q'||c=='r')
    {
        x = 7;
    }
        if(c=='s'||c=='t'||c=='u')
    {
        x = 8;
    }
        if(c=='v'||c=='w'||c=='x')
    {
        x = 9;
    }
        if(c=='y'||c=='z')
    {
        x = 0;
    }
    
    //---------------------------------write-output---------------------------------//
    
    printf("%d",x);
    
    //return
    return(0);
}//end main()