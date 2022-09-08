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
void method00(void){}; // end method00
//
// exercise0811---------------------------------------------------------------exercise0811
//
void evenIntArray(int n, int array[])
{
    // local data
    int count = 0; // counter
    int even = 0;
    if (n <= 0)
    {
        printf("ERROR - invalid size");
    }
    else
    {
        for (count = 0; count < n; count++)
        {
            array[count] = even;
            even = even + 2;
            printf("%d : %d\n", count, array[count]);
        } // end for
    }     // end if
} // end evenIntArray( )
void method01(void)
{
    int n = 0;              // data
    printf("\nmethod01\n"); // id
    printf("array size: ");
    scanf("%d", &n);
    int array[n]; // array size defined
    // execute
    evenIntArray(n, array);
    printf("array size = %d\n", n);
    printf("press ENTER\n");
    getchar(); // finish
} // end method01( )
//
// exercise0812---------------------------------------------------------------exercise0812
//
void readArray(int n, int array[], char filename[])
{
    int count = 0;
    int number = 0;
    FILE *file1 = fopen(filename, "rt");
    FILE *file2 = fopen("RESULTADO0812.txt", "wt"); // local data
    for (count = 0; count < n; count++)
    {
        fscanf(file1, "%d", &array[count]);
        if ((array[count] >= 0) && (array[count] % 2 == 0))
        {
            number++;
            fprintf(file2, "number %d - %d\n", number, array[count]);
        } // end if
    }     // end for
    fclose(file1);
    fclose(file2);
    getchar(); // close files and finish
} // end readArray( )
void method02(void)
{
    int n = 0; // data
    printf("file data amount:\n ATENTION TO FILE");
    scanf("%d", &n);
    int array[n]; // array size defined
    // execute
    readArray(n, array, "DADOS0812.txt");
    printf("press ENTER\n");
    getchar(); // finish
} // end method02( )
//
// exercise0813---------------------------------------------------------------exercise0813
//
saveDocument(int n, int array[], char filename[])
{
    // local data
    int i = 0; // counter
    FILE *file1 = fopen(filename, "wt");

    fprintf(file1, "values amount = %d\n", n);
    for (i = 0; i < n; i++)
    {
        fprintf(file1, "%d\n", array[i]); // print in document the array position values
    }

    fclose(file1); // close file1
    printf("\ndocument saved !\n");
    getchar();
} // end saveDocument
randomValues(int a, int b)
{
    // local data
    int n = 0;
    int i = 0; // counter
    printf("\nrandom values amount: \n");
    scanf("%d", &n);
    int array[n]; // setup array size
    // repetition
    if (a > b)
    {
        for (i = 0; i < n; i++)
        {
            array[i] = (b + rand() % a);
        } // end for
    }     // end if
    if (a < b)
    {
        for (i = 0; i < n; i++)
        {
            array[i] = (a + rand() % b);
        } // end for
    }     // end if
    // execute
    saveDocument(n, array, "DADOS0813.TXT");
} // end radomValues()
method03(void)
{
    int a = 0;
    int b = 0; // data
    printf("\ninterval value: \n");
    scanf("%d", &a);
    printf("\nan other interval value: \n");
    scanf("%d", &b);
    if (a == b)
    {
        printf("\nERROR - interval values cant be the same.\n");
    }
    else
    {
        randomValues(a, b);
    }

} // end method03( )
//
// exercise0814---------------------------------------------------------------exercise0814
//
void findMin(int array[], int n)
{
    int i = 0; // counter
    int save = 0;
    save = array[0];
    for (i = 0; i < n; i++)
    {
        if (save > array[i])
        {
            save = array[i];
        }
    }
    printf("the min value is %d", save);
} // end findMin()
void readDocument_01(int array[], int n, char filename[])
{
    // local data
    int i = 0; // counter
    FILE *file1 = fopen(filename, "rt");

    for (i = 0; i < n; i++) // repetition
    {
        fscanf(file1, "%d", &array[i]); // take values
    }                                   // end for
    findMin(array, n);
} // end readDocument
void method04(void)
{
    int n = 0;              // data
    printf("\nmethod04\n"); // id
    printf("array size:\n ATENTION TO FILE \n");
    scanf("%d", &n);
    int array[n]; // setup array size
    readDocument_01(array, n, "DADOS0814.txt");
} // end method04()
//
// exercise0815---------------------------------------------------------------exercise0815
//
void findMax(int array[], int n)
{
    int i = 0; // counter
    int save = 0;
    save = array[0];
    for (i = 0; i < n; i++)
    {
        if (save < array[i])
        {
            save = array[i];
        }
    }
    printf("the max value is %d", save);
} // end findMax()
void readDocument_02(int array[], int n, char filename[])
{
    // local data
    int i = 0; // counter
    FILE *file1 = fopen(filename, "rt");

    for (i = 0; i < n; i++) // repetition
    {
        fscanf(file1, "%d", &array[i]); // take values
    }                                   // end for
    findMax(array, n);
} // end readDocument_02()
void method05(void)
{
    int n = 0;              // data
    printf("\nmethod05\n"); // id
    printf("array size:\n ATENTION TO FILE \n");
    scanf("%d", &n);
    int array[n]; // setup array size
    readDocument_02(array, n, "DADOS0815.txt");
} // method05( )
//
// exercise0816---------------------------------------------------------------exercise0816
//
void avarage(float array[], int n, char filename[])
{
    // local data
    int i = 0;
    float sum = 0;
    float avarage = 0;
    FILE *file1 = fopen(filename, "rt");
    FILE *file2 = fopen("VALORESMENORES.txt", "wt");
    FILE *file3 = fopen("VALORESMAIORES.txt", "wt");
    // sum values
    for (i = 0; i < n; i++)
    {
        fscanf(file1, "%f", &array[i]);
        sum = sum + array[i];
    } // end for
    // avarage
    avarage = sum / (float)n;
    // test values
    for (i = 0; i < n; i++)
    {
        if (avarage > array[i]) // minors
        {
            fprintf(file2, "%f\n", array[i]);
        }                       // end if minors
        if (avarage < array[i]) // majors
        {
            fprintf(file3, "%f\n", array[i]);
        } // end if majors
    }     // end for
    // close files
    fclose(file2);
    fclose(file3);
    fclose(file1);
} // end avarage()
void method06(void)
{
    int n = 0;              // data
    printf("\nmethod06\n"); // id
    printf("array size:\n ATENTION TO FILE\n");
    scanf("%d", &n);
    float array[n]; // setup array size
    avarage(array, n, "DADOS0816.txt");
    printf("press ENTER\n");
    getchar(); // finish
} // end method06()
//
// exercise0817---------------------------------------------------------------exercise0817
//
void orderArray(int array[], int n)
{
    // local data
    int count = 0;    // counter
    int pcorrect = 0; // check array positions

    for (count = 0; count < n; count++)
    {
        if ((array[count] >= array[count + 1]) || (count == n - 1))
        {
            pcorrect++;
        }
    }

    if (pcorrect == n)
    {
        printf("\nascending organized\n");
    }
    else
    {
        printf("\nnot organized\n");
    }
} // end orderArray()
void method07(void)
{
    int x = 0;
    int n = 0;              // data
    printf("\nmethod07\n"); // id
    printf("array size: \n");
    scanf("%d", &n);
    int array[n]; // set array size
    for (x = 0; x < n; x++)
    {
        printf("\nvalue int position %d - : ", x);
        scanf("%d", &array[x]);
    }
    // execute
    orderArray(array, n);
    printf("press ENTER\n");
    getchar(); // finish
} // end method07()
//
// exercise0818-----------------------------------------------------------------exercise08
//
bool searchValue(int search, int array[], int n)
{
    // local data
    int i = 0; // counter
    bool result = false;
    for (i = 0; i < n; i++)
    {
        if (search == array[i])
        {
            result = true; // value found
        }
    }
    return (result); // return result
} // end searchValue()
void takeValues(int array[], int n)
{
    // local data
    int i = 0; // counter
    int search = 0;
    FILE *file1 = fopen("DADOS.TXT", "rt");
    for (i = 0; i < n; i++)
    {
        fscanf(file1, "%d", &array[i]); // take values
        printf("%d ", array[i]);
    }
    printf("\nvalue to search: \n");
    scanf("%d", &search); // value to search
    // execute
    if (searchValue(search, array, n))
    {
        printf("value %d found\n", search);
    }
    else
    {
        printf("value %d not found\n", search);
    }
} // end takeValues()
void method08(void)
{
    int n = 0; // data

    printf("\nmethod08\n");
    printf("array size:\nATENTION TO FILE");
    scanf("%d", &n);
    int array[n]; // setup array value
    takeValues(array, n);
    printf("press ENTER\n");
    getchar(); // finish
} // end method08()
//
// exercise0819---------------------------------------------------------------exercise0819
//
void searchValue2(int search, int array[], int n)
{
    int i = 0; // counter
    for (i = 0; i < n; i++)
    {
        if (search == array[i])
        {
            printf("\nvalue %d found - position: %d\n", search, i);
        }
    }
} // end searchValue2
void takeValues2(int array[], int n)
{
    // local data
    int i = 0; // counter
    int search = 0;
    FILE *file1 = fopen("DADOS.TXT", "rt");
    for (i = 0; i < n; i++)
    {
        fscanf(file1, "%d", &array[i]); // take values
        printf("%d ", array[i]);
    }
    printf("\nvalue to search: \n");
    scanf("%d", &search);           // value to search
    searchValue2(search, array, n); // execute
} // end takeValue2()
void method09(void)
{
    int n = 0; // data

    printf("\nmethod09\n");
    printf("array size:\nATENTION TO FILE");
    scanf("%d", &n);
    int array[n]; // setup array value
    takeValues2(array, n);
    printf("press ENTER\n");
    getchar(); // finish
} // end method09()
//
// exercise0820---------------------------------------------------------------exercise0820
//
void searchValue3(int search, int array[], int n)
{
    // local data
    int i = 0; // counter
    int cvalue = 0;
    for (i = 0; i < n; i++)
    {
        if (search == array[i])
        {
            cvalue++;
            printf("\nvalue %d found - position: %d\n", search, i);
        }
    }
    printf("\nthe value can be find %d time(s)\n", cvalue);
} // end searchValue3
void takeValues3(int array[], int n)
{
    // local data
    int i = 0; // counter
    int search = 0;
    FILE *file1 = fopen("DADOS.TXT", "rt");
    for (i = 0; i < n; i++)
    {
        fscanf(file1, "%d", &array[i]); // take values
        printf("%d ", array[i]);
    }
    printf("\nvalue to search: \n");
    scanf("%d", &search);           // value to search
    searchValue3(search, array, n); // execute
} // end takeValue3()
void method10(void)
{
    int n = 0; // data

    printf("\nmethod10\n");
    printf("array size:\nATENTION TO FILE");
    scanf("%d", &n);
    int array[n]; // setup array value
    takeValues3(array, n);
    printf("press ENTER\n");
    getchar(); // finish
} // end method10()

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

        default:
            printf("ERROR - invalid value\n");
            break;
        }
    } while (choice != 0); // end repeat

    printf("press ENTER to finish\n");
    getchar();
    return (0); // finish
} // end main()