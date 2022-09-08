#include <stdlib.h>
#include <stdio.h>

int main() 
{
    int H;
    float CH, T;//data
    
    scanf("%d",&H);
    scanf("%f",&CH);//read
    
    T = ((float)H * CH) *1.15;//formula
    
    printf("%.2f",T);//output
    
    //return
    return 0;
}//end main()