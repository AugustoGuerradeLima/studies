#include <stdio.h>
//----------------------------------------------------------------------printmatrix
void printMatrix(int m[][],int row, int column){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            printf("%d\t"m[i][j]);
        }
        printf("\n");
    }
}//end printmatrix
//----------------------------------------------------------------------questao1
//----------------------------------------------------------------------questao2
int main(){
    int c = 0;
    do
    {
        printf("\n0-stop\n");
        printf("\n1-file and matrix\n");
        printf("\n2-matrix average\n");
        printf("\n3-identity matrix\n");
        printf("\n4-transposed matrix\n");
        printf("\n5-symmetric matrix\n");
        printf("\n6-sum\n");
        printf("\n7-product\n");
        scanf("%d",&c);
        switch(c){
            case 0:break;
            case 1:f1();break;
            case 2:f2();break;
            case 3:f3();break;
            case 4:f4();break;
            case 5:f5();break;
            case 6:f6();break;
            case 7:f7();break;
            default:printf("\ninvalid value\n");
        }
    } while (c!=0);
    return(0);
}
