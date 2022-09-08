#include <stdlib.h>
#include <stdio.h>

int main() 
{
    float I,R,F;
    scanf("%f",&R);
    scanf("%f",&F);//data
    
    I = (R-F)*0.15;//formula
    
    printf("%.02f",I);//output
    
    //return
    return 0;
}//end main()
