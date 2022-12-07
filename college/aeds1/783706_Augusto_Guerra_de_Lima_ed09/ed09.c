/*
Augusto Guerra de Lima - 783706
*/
// dependencies
#include <stdio.h>   //standart
#include <string.h>  //for strings
#include <math.h>    //for math
#include <stdlib.h>  //for emulator
#include <stdbool.h> //for booleans
// method00 - nda
void method00(){}; // end method00
//
// exercise0911----------------------------------------------------------------------------------------------------------exercise0911
//
void printDoubleMatrix(int row, int column, double positiveMatrix[][column])
{
    int x = 0;
    int y = 0; // local data
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < column; y = y + 1)
        {
            printf("%3lf   ", positiveMatrix[x][y]);
        } // end for
        printf("\n");
    } // end for
}
void readPositiveDoubleMatrix(int row, int column, double positiveMatrix[][column])
{
    int x = 0;
    int y = 0;
    double z = 0; // local data
    if (row <= 0 || column <= 0)
    {
        printf("\nERROR size canot be null\n");
    }
    else
    {
        // take values
        for (x = 0; x < row; x = x + 1)
        {
            for (y = 0; y < column; y = y + 1)
            {
                printf("\n postition %d , %d: ", x, y);
                scanf("%lf", &z);
                // analyze value
                if (z < 0)
                {
                    printf("\nvalue cant be negative, setup 0\n");
                    positiveMatrix[x][y] = 0.0;
                }
                else
                {
                    positiveMatrix[x][y] = z;
                }
            } // end for
        }     // end for
    }         // end if
}

void method01(void)
{
    int row = 0;
    int column = 0;
    ;                       // data
    printf("\nmethod01\n"); // ide
    printf("rows: \n");
    scanf("%d", &row);
    printf("columns: \n");
    scanf("%d", &column);               // read
    double positiveMatrix[row][column]; // setup real matrix size
    // execute read values
    readPositiveDoubleMatrix(row, column, positiveMatrix);
    // execute show values
    printDoubleMatrix(row, column, positiveMatrix);
} // end method01( )
//
// exercise0912----------------------------------------------------------------------------------------------------------exercise0912
//
void saveMatrix(int row, int column, double positiveMatrix[][column], char filename[])
{
    int x = 0;
    int y = 0;
    FILE *file1 = fopen(filename, "wt"); // local data
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < column; y = y + 1)
        {
            fprintf(file1, "%3lf\n", positiveMatrix[x][y]);
        } // end for

    } // end for
    fclose(file1);
} // end saveMatrix

void method02(void)
{
    int row = 0;
    int column = 0;
    // data
    printf("\nmethod02\n"); // ide
    printf("rows: \n");
    scanf("%d", &row);
    printf("columns: \n");
    scanf("%d", &column);               // read
    double positiveMatrix[row][column]; // setup real matrix size
    // execute read values
    readPositiveDoubleMatrix(row, column, positiveMatrix);
    // execute show values
    printDoubleMatrix(row, column, positiveMatrix);
    // execute save file
    saveMatrix(row, column, positiveMatrix, "DADOS0912.txt");
} // end method02()
//
// exercise0913----------------------------------------------------------------------------------------------------------exercise0913
//
void printDiagonalMatrix(int row, int column, double positiveMatrix[][column])
{
    // local data
    int x = 0;
    int y = 0;
    printf("\nmatrix diagonal\n");
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < column; y = y + 1)
        {

            if (y == x)
            {
                printf("[%lf]", positiveMatrix[x][y]);
            }
            else
            {
                printf("[        ]");
            } // end if
        }     // end for
        printf("\n");
    } // end for

} // end printDiagonalMatrix

void method03(void)
{
    int row = 0;
    int column = 0;         // data
    printf("\nmethod03\n"); // id
    printf("rows: \n");
    scanf("%d", &row);
    printf("columns: \n");
    scanf("%d", &column);               // read
    double positiveMatrix[row][column]; // setup real matrix size
    // execute read values
    readPositiveDoubleMatrix(row, column, positiveMatrix);
    // execute show diagonal
    printDiagonalMatrix(row, column, positiveMatrix);

} // end method03()
//
// exercise0914----------------------------------------------------------------------------------------------------------exercise0914
//
void printSDiagonalDoubleMatrix(int row, int column, double positiveMatrix[][column])
{
    int x = 0;
    int y = 0;
    int z = 0; // local data

    z = row;

    printf("\nmatrix second diagonal\n");
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < column; y = y + 1)
        {
            if (x + y == z - 1)
            {
                printf("[%lf]", positiveMatrix[x][y]); // print Second Diagonal elements
            }
            else
            {
                printf("[        ]"); // print empty slot
            }                         // end if
        }                             // end for
        printf("\n");                 // break row
    }                                 // end for
} // end printSDiagonalDoubleMatrix()
void method04(void)
{
    int row = 0;
    int column = 0;         // data
    printf("\nmethod04\n"); // id
    printf("put an squared matrix\n");
    printf("rows: \n");
    scanf("%d", &row);
    printf("columns: \n");
    scanf("%d", &column);
    double positiveMatrix[row][column]; // setup real matrix size
    if (row != column)
    {
        printf("\nERROR - matrix need to be an square\n");
    }
    else
    {
        // execute read values
        readPositiveDoubleMatrix(row, column, positiveMatrix);
        // execute show second diagonal
        printSDiagonalDoubleMatrix(row, column, positiveMatrix);
    } // end if

} // end method04()
//
// exercise0915----------------------------------------------------------------------------------------------------------exercise0915
//
void printLDTriangleDoubleMatrix(int row, int column, double positiveMatrix[][column])
{
    int x = 0;
    int y = 0; // local data
    printf("\nmatrix\n");
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < column; y = y + 1)
        {
            if (x >= y)
            {
                printf("[%lf]", positiveMatrix[x][y]);
            }
            else
            {
                printf("[        ]");
            } // end if
        }     // end for
        printf("\n");
    } // end for
} // end printLDTriangleDoubleMatrix( )
void method05(void)
{
    int row = 0;
    int column = 0;
    // data
    printf("\nmethod05\n"); // id
    printf("rows: \n");
    scanf("%d", &row);
    printf("columns: \n");
    scanf("%d", &column);               // read
    double positiveMatrix[row][column]; // setup real matrix size
    // execute read values
    readPositiveDoubleMatrix(row, column, positiveMatrix);
    // execute show values
    printLDTriangleDoubleMatrix(row, column, positiveMatrix);
} // end method05
//
// exercise0916----------------------------------------------------------------------------------------------------------exercise0916
//
printLUTriangleDoubleMatrix(int row, int column, double positiveMatrix[][column])
{
    int x = 0;
    int y = 0; // local data
    printf("\nmatrix\n");
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < column; y = y + 1)
        {
            if (x <= y)
            {
                printf("[%lf]", positiveMatrix[x][y]);
            }
            else
            {
                printf("[        ]");
            } // end if
        }     // end for
        printf("\n");
    } // end for printLUTriangleDoubleMatrix( )
} // end
void method06(void)
{
    int row = 0;
    int column = 0;
    // data
    printf("\nmethod06\n"); // id
    printf("rows: \n");
    scanf("%d", &row);
    printf("columns: \n");
    scanf("%d", &column);               // read
    double positiveMatrix[row][column]; // setup real matrix size
    // execute read values
    readPositiveDoubleMatrix(row, column, positiveMatrix);
    // execute show values
    printLUTriangleDoubleMatrix(row, column, positiveMatrix);
} // end method06( )
//
// exercise0917----------------------------------------------------------------------------------------------------------exercise0917
//
void printSLDTriangleDoubleMatrix(int row, int column, double positiveMatrix[][column])
{
    int x = 0;
    int y = 0;
    int z = 0; // local data setup
    z = row;
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < column; y = y + 1)
        {
            if ((x + y >= z - 1))
            {
                printf("[%lf]", positiveMatrix[x][y]);
            }
            else
            {
                printf("[        ]");
            } // end if
        }     // end for
        printf("\n");
    } // end for
} // end printSLDTriangleDoubleMatrix( )
void method07(void)
{
    int row = 0;
    int column = 0;
    // data
    printf("\nmethod07\n"); // id
    do
    {
        printf("\nplease, put a squared matrix\n");
        printf("rows: \n");
        scanf("%d", &row);
        printf("columns: \n");
        scanf("%d", &column);
    } while (row != column);            // read
    double positiveMatrix[row][column]; // setup real matrix size
    // execute read values
    readPositiveDoubleMatrix(row, column, positiveMatrix);
    // execute show values
    printSLDTriangleDoubleMatrix(row, column, positiveMatrix);
} // method07( )
//
// exercise0918----------------------------------------------------------------------------------------------------------exercise0918
//
void printSLUTriangleDoubleMatrix(int row, int column, double positiveMatrix[][column])
{
    int x = 0;
    int y = 0;
    int z = 0; // local data setup
    z = row;
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < column; y = y + 1)
        {
            if ((x + y <= z - 1))
            {
                printf("[%lf]", positiveMatrix[x][y]);
            }
            else
            {
                printf("[        ]");
            } // end if
        }     // end for
        printf("\n");
    } // end for
} // end printSLUTriangleDoubleMatrix( )
void method08(void)
{
    int row = 0;
    int column = 0;
    // data
    printf("\nmethod08\n"); // id
    do
    {
        printf("\nplease, put a squared matrix\n");
        printf("rows: \n");
        scanf("%d", &row);
        printf("columns: \n");
        scanf("%d", &column);
    } while (row != column);            // read
    double positiveMatrix[row][column]; // setup real matrix size
    // execute read values
    readPositiveDoubleMatrix(row, column, positiveMatrix);
    // execute show values
    printSLUTriangleDoubleMatrix(row, column, positiveMatrix);
} // method08( )
//
// exercise0919----------------------------------------------------------------------------------------------------------exercise0919
//
bool result(int row, int column, double positiveMatrix[][column])
{
    int x = 0;
    int y = 0;
    int i = 0;
    bool result = false; // local data setup
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < column; y = y + 1)
        {
            if (x >= y && positiveMatrix[x][y] != 0.0)
            {
                i++; // counter
            }
        }
    }
    if (i != 0)
    {
        result = true;
    }
    return (result); // return
} // end result
void method09(void)
{
    int row = 0;
    int column = 0;
    // data
    printf("\nmethod09\n"); // id
    do
    {
        printf("\nplease, put a squared matrix\n");
        printf("rows: \n");
        scanf("%d", &row);
        printf("columns: \n");
        scanf("%d", &column);
    } while (row != column);            // read
    double positiveMatrix[row][column]; // setup real matrix size
    // execute read values
    readPositiveDoubleMatrix(row, column, positiveMatrix);
    // execute show values
    printLDTriangleDoubleMatrix(row, column, positiveMatrix);
    //  execute bool
    if (result(row, column, positiveMatrix))
    {
        printf("\nall elements arent equal zero\n");
    }
    else
    {
        printf("\nall elements are equal zero\n");
    }
} // end method09( )
//
// exercise0920----------------------------------------------------------------------------------------------------------exercise0920
//
bool allZerosUTriangleDoubleMatrix(int row, int column, double positiveMatrix[][column])
{
    int x = 0;
    int y = 0;
    int i = 0;
    bool result = false; // local data setup
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < column; y = y + 1)
        {
            if (x <= y && positiveMatrix[x][y] != 0.0)
            {
                i++; // counter
            }
        }
    }
    if (i == 0)
    {
        result = true;
    }
    return (result); // return
} // end allZerosUTriangleDoubleMatrix
void method10()
{
    int row = 0;
    int column = 0;
    // data
    printf("\nmethod10\n"); // id
    do
    {
        printf("\nplease, put a squared matrix\n");
        printf("rows: \n");
        scanf("%d", &row);
        printf("columns: \n");
        scanf("%d", &column);
    } while (row != column);            // read
    double positiveMatrix[row][column]; // setup real matrix size
    // execute read values
    readPositiveDoubleMatrix(row, column, positiveMatrix);
    // execute show values
    printLUTriangleDoubleMatrix(row, column, positiveMatrix);
    //  execute bool
    if (allZerosUTriangleDoubleMatrix(row, column, positiveMatrix))
    {
        printf("\nall elements are equal zero\n");
    }
    else
    {
        printf("\nall elements arent equal zero\n");
    }
} // end method10( )
//
// Exemple09E1----------------------------------------------------------------------------------------------------------Exemple09E1
//
void sm(int row, int column, int matrix[][column])
{
    int x = 0;
    int y = 0; // local data
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < column; y = y + 1)
        {
            printf("   %d   ", matrix[x][y]);
        } // end for
        printf("\n");
    } // end for
} // end sm( )
void pvs(int row, int column, int matrix[][column], int length)
{
    int x = 0;
    int y = 0;
    int i = length; // local data
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < row; y = y + 1)
        {
            matrix[x][y] = i;
            i--;
        }
    }
} // end pvs( )
void methode1(void)
{
    int row = 0;
    int column = 0;               // data
    printf("\nmethod_extra_1\n"); // id
    do
    {
        printf("\nplease, use a squared matrix\n");
        printf("\nrow: ");
        scanf("%d", &row);
        printf("\ncolumn: ");
        scanf("%d", &column);
    } while (row != column);
    int matrix[row][column]; // setup matrix size
    // execute matrix position values setup
    pvs(row, column, matrix, pow(row, 2));
    // execute show matrix
    sm(row, column, matrix);
} // end methode1( )
//
// Exemple09E2----------------------------------------------------------------------------------------------------------Exemple09E2
//
void pvs_2(int row, int column, int matrix[][column], int length)
{
    int x = 0;
    int y = 0;
    int i = length; // local data
    for (x = 0; x < row; x = x + 1)
    {
        for (y = 0; y < row; y = y + 1)
        {
            matrix[y][x] = i;
            i--;
        }
    }
} // end pvs_2( )
void methode2(void)
{
    int row = 0;
    int column = 0;               // data
    printf("\nmethod_extra_1\n"); // id
    do
    {
        printf("\nplease, use a squared matrix\n");
        printf("\nrow: ");
        scanf("%d", &row);
        printf("\ncolumn: ");
        scanf("%d", &column);
    } while (row != column);
    int matrix[row][column]; // setup matrix size
    // execute matrix position values setup
    pvs_2(row, column, matrix, pow(row, 2));
    // execute show matrix
    sm(row, column, matrix);
} // end methode2( )
//
// main----------------------------------------------------------------------------------------------------------main
//
int main()
{
    int choice = 0;                                // data
    printf("\n783706 - Augusto Guerra de Lima\n"); // id
    do
    {
        printf("\noptions\n");
        printf("stop - 0\n");
        printf("ex1 - 1  ex2 -   2\n");
        printf("ex3 - 3  ex4 -   4\n");
        printf("ex5 - 5  ex6 -   6\n");
        printf("ex7 - 7  ex8 -   8\n");
        printf("ex9 - 9  ex10 - 10\n");
        printf("extra_1 - 11  extra_2 - 12\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            method00();
            break;
        case 1:
            method01();
            break;

        case 2:
            method02();
            break;

        case 3:
            method03();
            break;

        case 4:
            method04();
            break;

        case 5:
            method05();
            break;

        case 6:
            method06();
            break;

        case 7:
            method07();
            break;

        case 8:
            method08();
            break;

        case 9:
            method09();
            break;

        case 10:
            method10();
            break;

        case 11:
            methode1();
            break;

        case 12:
            methode2();
            break;

        default:
            printf("ERROR - invalid value\n");
            break;
        }
    } while (choice != 0); // end repeat

    printf("press ENTER to finish\n");
    getchar();
    return (0); // finish
} // end main()
  /*
  11 - OK
  12 - OK
  13 - OK
  14 - OK
  15 - OK
  16 - OK
  17 - OK
  18 - OK
  19 - OK
  20 - OK
  E1 - OK
  E2 - OK
  */