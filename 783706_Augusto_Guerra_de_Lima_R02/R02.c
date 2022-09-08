//
//---------------------------------------------------------------------783706_Augusto_Guerra_de_Lima
//

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "string.h"
#include "math.h"

//
//---------------------------------------------------------------------structs
//
typedef struct s_int_Array
{
    int length;
    int *data;
    int ix;
} int_Array;

typedef struct s_int_Matrix
{
    int rows;
    int columns;
    int **data;
    int ix, iy;
} int_Matrix;

typedef struct supermarket
{
    char *name;
    int id;
    double value;
} spm;

typedef struct
{
    int x;
    int y;
    int length;
    int *data;
    int *data2;
} INTS;

typedef int_Array *ref_int_Array;
typedef int_Matrix *ref_int_Matrix;
typedef spm *ref_spm;
typedef INTS *
    ref_INTS;

//
//---------------------------------------------------------------------functions
//
ref_int_Array new_int_Array(int n)
{
    ref_int_Array tmpArray = (ref_int_Array)malloc(sizeof(int_Array));

    if (tmpArray == NULL)
    {
        printf("\nERRO: Falta espaco.\n");
    }
    else
    {
        tmpArray->length = 0;
        tmpArray->data = NULL;
        tmpArray->ix = -1;
        if (n > 0)
        {

            tmpArray->length = n;

            tmpArray->data = (int *)malloc(n * sizeof(int));

            tmpArray->ix = 0;

        } // end if
    }     // end if

    return (tmpArray);
} // end new_int_Array( )

void free_int_Array(ref_int_Array tmpArray)
{

    if (tmpArray != NULL)
    {
        if (tmpArray->data != NULL)
        {
            free(tmpArray->data);
        } // end if
        free(tmpArray);
    } // end if
} // end free_int_Array( )

ref_int_Matrix new_int_Matrix(int rows, int columns)
{
    ref_int_Matrix tmpMatrix = (ref_int_Matrix)malloc(sizeof(int_Matrix));

    if (tmpMatrix != NULL)
    {
        tmpMatrix->rows = 0;
        tmpMatrix->columns = 0;
        tmpMatrix->data = NULL;

        // malloc
        if (rows > 0 && columns > 0)
        {
            tmpMatrix->rows = rows;
            tmpMatrix->columns = columns;
            tmpMatrix->data = malloc(rows * sizeof(int **));
            if (tmpMatrix->data)
            {
                for (tmpMatrix->ix = 0;
                     tmpMatrix->ix < tmpMatrix->rows;
                     tmpMatrix->ix = tmpMatrix->ix + 1)
                {
                    tmpMatrix->data[tmpMatrix->ix] = (int **)malloc(columns * sizeof(int));
                } // end for
            }     // end if
        }         // end if
        tmpMatrix->ix = 0;
        tmpMatrix->iy = 0;
    } // end if
    return (tmpMatrix);
} // end ref_int_Matrix( )

void printIntArray(int_Array array)
{
    // mostrar valores no arranjo
    if (array.data)
    {
        for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
        {
            // mostrar valor
            printf("%2d: %d\n", array.ix, array.data[array.ix]);
        } // fim repetir
    }     // fim se
} // printIntArray ( )

int_Array fReadIntArray(char *filename)
{
    int_Array array;
    FILE *archive = fopen(filename, "rt");
    int control;
    int i = 0;

    fscanf(archive, "%d\n", &array.length);

    if (array.length <= 0)
    {
        printf("\nERRO - valor invalido");
        array.length = 0;
    }
    else
    {
        array.data = (int *)malloc(array.length * sizeof(int));

        while (i < array.length && !feof(archive))
        {
            fscanf(archive, "%d\n", &array.data[i]);

            i = i + 1;
        }
    }

    fclose(archive);
    return (array);
}
void fprintIntArray(char *fileName, int_Array array)
{

    FILE *arquivo = fopen(fileName, "wt");

    fprintf(arquivo, "%d\n", array.length);

    if (array.data)
    {
        for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
        {

            fprintf(arquivo, "%d\n", array.data[array.ix]);
        }
    }

    fclose(arquivo);
}

//
//---------------------------------------------------------------------methods
//

//
//---------------------------------------------------------------------exerciser201
//
int_Array sort(int_Array array)
{
    int i, key;
    int_Array temparray;
    temparray.length = array.length;
    temparray.data = malloc(array.length * sizeof(int));

    for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
    {
        key = array.data[array.ix];
        i = array.ix - 1;
        while (i >= 0 && array.data[i] < key)
        {
            array.data[i + 1] = array.data[i];
            i = i - 1; // manipulation of position
        }
        array.data[i + 1] = key;
    } // end for
    temparray = array;
    return (temparray);
} // end sort( )

void method01(void)
{
    int_Array array;
    int_Array tidy;

    array = fReadIntArray("DADOS1.TXT");
    printf("\noriginal array:\n");
    printIntArray(array);

    tidy = sort(array);
    printf("\nsorted array\n");
    printIntArray(tidy);
    fprintIntArray("DECRESCENTE.TXT", tidy);
} // end method01( )
//
//---------------------------------------------------------------------exerciser202
//
ref_INTS INTS_new(int length)
{
    ref_INTS copia = NULL;
    copia = (ref_INTS)malloc(1 * sizeof(INTS));
    if (copia)
    {
        copia->x = 0;
        copia->y = 0;
        copia->length = 0;
        copia->data = NULL;
        copia->data2 = NULL;
        if (length > 0)
        {
            copia->length = length;
            copia->data = malloc(length * sizeof(int));
            copia->data2 = malloc(length * sizeof(int));
        }
    }
    return (copia);
}

ref_INTS new_Array(ref_INTS a)
{
    int i, h;
    for (i = 0; i < a->length / 2; i++)
    {
        h = a->data[i];
        a->data[i] = a->data[a->length - i];
        a->data[a->length - i] = h;
    }
}

void method02(void)
{
    // definir tamanho
    int length = 0;
    int i;
    int p = 0;
    FILE *arquivo = fopen("DECRESCENTE.txt", "rt");
    while (!feof(arquivo))
    {
        fscanf(arquivo, "%d", &p);
        length++;
    }
    fclose(arquivo);
    ref_INTS a = INTS_new(length);
    //---------------
    // definir valores
    new_Array(a);
    FILE *arquivo2 = fopen("INVETIDOS.txt", "wt");
    for (i = 0; i < a->length; i++)
    {
        fprintf(arquivo2, "%d", a->data2[i]);
    }
    fclose(arquivo2);
    getchar();
    getchar();
}

//
//---------------------------------------------------------------------exerciser203
//
int mv(int_Array array, int limit)
{
    int minor = 0;
    int i = 0;
    int found = 0;
    while (i < array.length && found != 1)
    {
        if (array.data[i] >= limit)
        {
            minor = array.data[i];
            found = 1;
        }
        i++;
    }
    for (i = 0; i < array.length; i++)
    {
        if (array.data[i] < minor && array.data[i] >= limit)
        {
            minor = array.data[i];
        }
    }
    return (minor);
} // end mv( )
void method03(void)
{
    int_Array array;
    int value = 0;
    int minor = 0;

    printf("\nvalue: ");
    scanf("%d", &value);

    array = fReadIntArray("DADOS1.TXT");
    if (array.length > 0)
    {
        printf("\n");
        printIntArray(array);
        minor = mv(array, value);
        printf("\nmv >= %d:%d", value, minor);
    }
} // end method03( )

//
//---------------------------------------------------------------------exerciser204
//
ref_int_Array mutual(int_Array array1, int_Array array2)
{
    int i = 0, j = 0, key = 0;
    int newlen = 0;
    int repeat = 0;
    ref_int_Array filter;
    if (array1.length <= 0 || array2.length <= 0) // data
    {
        printf("\nerror - invalid value\n");
    }
    else
    {
        // reservar area
        filter = (int *)malloc(array1.length * sizeof(int));
        if (filter)
        {
            filter->length = array1.length;
            filter->data = (int *)malloc(filter->length * sizeof(int));
            // testar se ha' espaco e dados
            if (filter->data == NULL || array1.data == NULL)
            {
                printf("\nerror - missing space");
            }
            else
            {
                while (i < array1.length)
                {
                    j = 0;
                    repeat = 0;
                    while (j < array2.length)
                    {
                        if (array1.data[i] == array2.data[j])
                        {
                            for (key = 0; key <= newlen; key++)
                            {
                                if (array1.data[i] == filter->data[key])
                                {
                                    repeat = 1;
                                }
                            }
                            if (repeat != 1)
                            {
                                filter->data[newlen] = array1.data[i];
                                newlen++;
                            }
                        }
                        j++;
                    }
                    i++;
                }
                filter->length = newlen;
            }
        }
    }
    return (filter);
} // end mutual( )

void method04(void)
{
    int_Array array1;
    int_Array array2;
    ref_int_Array filter; // data

    array1 = fReadIntArray("DADOS1.TXT");
    array2 = fReadIntArray("DADOS2.TXT"); // read values from archives

    if (array1.length > 0 && array2.length > 0)
    {
        printf("\n");
        printIntArray(array1);
        printf("\n");
        printIntArray(array2);

        filter = mutual(array1, array2);
        printf("\n Filtrados sem repetir:\n");
        printIntArray(*filter);
        fprintIntArray("FILTRADOS.TXT", *filter);
    } // end if
} // end method04( )

//
//---------------------------------------------------------------------exerciser205
//
int todecimal(int_Array array)
{
    int i = 0;
    int x = 0;

    for (i = 0; i < array.length; i++)
    {
        if (array.data[i] == 1)
        {
            x += pow(2, array.length - i - 1);
        }
    }
    return (x);
} // end todecimal( )

void method05(void)
{
    int_Array array;
    int decimal = 0;

    array = fReadIntArray("BINARIOS1.TXT");

    if (array.length > 0)
    {
        printf("\n");
        printIntArray(array);

        decimal = todecimal(array);
        printf("\n x = %d\n", decimal);
    }
} // end method05( )
//
//---------------------------------------------------------------------exerciser206
//

//
//---------------------------------------------------------------------exerciser207
//
ref_int_Matrix intMatrixFromArchive(char *filename)
{
    int size, z;

    FILE *file1 = fopen(filename, "rt");

    ref_int_Matrix tmpmatrix;

    fscanf(file1, "%d", &size);
    fscanf(file1, "%d", &size);

    tmpmatrix = new_int_Matrix(size, size);

    if (tmpmatrix->columns > 0 && tmpmatrix->rows > 0)
    {
        for (tmpmatrix->ix = 0; tmpmatrix->ix < tmpmatrix->rows; tmpmatrix->ix++)
        {
            for (tmpmatrix->iy = 0; tmpmatrix->iy < tmpmatrix->columns; tmpmatrix->iy++)
            {
                fscanf(file1, "%d", &z);
                tmpmatrix->data[tmpmatrix->ix][tmpmatrix->iy] = z;
            }
        }
    }
    else
    {
        printf("\nerror - row or column invalid value");
    }
    fclose(file1);

    return (tmpmatrix);
} // end intMatrixFromArchive( )

ref_int_Matrix matrixZeros(int size)
{
    // data
    ref_int_Matrix matrix = NULL;
    int rows = size;
    int columns = size;

    if (rows <= 0 || columns <= 0)
    {
        printf("\nERRO: Valor invalido.\n");
    }
    else
    {

        matrix = new_int_Matrix(rows, columns);

        if (matrix != NULL && matrix->data == NULL)
        {

            matrix->rows = 0;
            matrix->columns = 0;
            matrix->ix = 0;
            matrix->iy = 0;
        }
        else
        {

            if (matrix != NULL)
            {

                matrix->ix = 0;
                while (matrix->ix < matrix->rows)
                {
                    matrix->iy = 0;
                    while (matrix->iy < matrix->columns)
                    {

                        matrix->data[matrix->ix][matrix->iy] = 0;

                        matrix->iy = matrix->iy + 1;
                    } // end while

                    matrix->ix = matrix->ix + 1;
                }
                matrix->ix = 0;
                matrix->iy = 0;
            }
        }
    }

    return (matrix);
}

ref_int_Matrix createTridiagonalRising(int n, ref_int_Matrix matrix2)
{
    int i;
    i = n + 2 * (n - 1);

    for (matrix2->ix = 0; matrix2->ix < matrix2->rows; matrix2->ix++)
    {
        for (matrix2->iy = 0; matrix2->iy < matrix2->columns; matrix2->iy++)
        {
            if (matrix2->ix == matrix2->iy)
            {
                if (matrix2->iy != 0)
                {
                    matrix2->data[matrix2->ix][matrix2->iy - 1] = i;
                    i = i - 2;
                }
                matrix2->data[matrix2->ix][matrix2->iy] = i;
                if (matrix2->iy < n - 1)
                {
                    i = i - 2;
                    matrix2->data[matrix2->ix][matrix2->iy + 1] = i;
                }
            }
        }
        i = i + 1;
    }
    return (matrix2);
} // end createTridiagonalRising( )

void printIntMatrix(ref_int_Matrix matrix2)
{
    for (matrix2->ix = 0; matrix2->ix < matrix2->rows; matrix2->ix++)
    {
        for (matrix2->iy = 0; matrix2->iy < matrix2->columns; matrix2->iy++)
        {
            printf("\t%d", matrix2->data[matrix2->ix][matrix2->iy]);
        }
        printf("\n");
    }
} // end printIntMatrix( )

void method07()
{

    ref_int_Matrix matrix;
    int n = 0; // data

    matrix = intMatrixFromArchive("MATRIX1.TXT");

    printf("\nsize: ");
    scanf("%d", &n);
    ref_int_Matrix matrix2 = (ref_int_Matrix)malloc(sizeof(int_Matrix));

    if (matrix2->data != NULL)
    {
        matrix2->data = NULL;
        matrix2 = matrixZeros(n);
        matrix2 = createTridiagonalRising(n, matrix2);
        printIntMatrix(matrix2);
    }
    free(matrix2);
    free(matrix);
    getchar();
} // end method07( )
//
//---------------------------------------------------------------------exerciser208
//
void method08(void)
{
    int c = 0;
    int p = 1;
    int valor1 = 0;
    int valor2 = 0;
    int count1 = 0;
    int count2 = 0;
    FILE *file = fopen("MATRIX3.TXT", "rt");
    while (!feof(file) && p != 0)
    {
        c++;
        fscanf(file, "%d", &p);
        if (p == 0)
        {
            printf("valor invalido");
        }
    }
    fclose(file);
    c = sqrt(c);
    int i;
    int j;
    int rows = c;
    int columns = c;
    int **matrix;
    matrix = NULL;
    matrix = (int **)malloc(rows * sizeof(int));
    if (matrix)
    {
        for (i = 0; i < rows; i++)
        {
            matrix[i] = (int *)malloc(columns * sizeof(int));
        }
        int valor;
        FILE *file2 = fopen("MATRIX3.TXT", "rt");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                fscanf(file2, "%d", &valor);
                matrix[i][j] = valor;
            }
        }
        fclose(file2);

        for (i = 0; i < rows; i++)
        {
            count1 = 0;
            j = 0;
            valor1 = (matrix[i][j + 1]) / (matrix[i][j]);

            for (j = 0; j < columns; j++)
            {
                if ((valor1 == matrix[i][j + 1] / matrix[i][j]) && (j + 1 != rows))
                {
                    count1++;
                    printf("%d\t", matrix[i][j]);
                }
            }
            if (count1 == (rows - 1))
            {
                count2++;
            }
            valor1 = 0;
            printf("\n");
        }
        if (count2 == c)
        {
            printf("on form");
        }
        else
        {
            printf("not on form");
        }
    }
} // end method08( )

//
//---------------------------------------------------------------------exerciser209
//

//
//---------------------------------------------------------------------exerciser220
//
double average(ref_spm spm_list, int length)
{
    double av = 0.0;
    double sum = 0.0;
    int i = 0;
    int x = 0;
    for (i = 0; i < length; i++)
    {
        sum = sum + spm_list[i].value;
    } // end for
    av = (sum) / ((double)length);
    return (av);
} // end average( )
void method10(void)
{
    FILE *file1 = fopen("DADOS3.TXT", "rt");
    ref_spm spm_list = NULL;
    int x = 0;
    int N = 0, i = 0;
    double av = 0.0; // data

    // read size and malloc
    fscanf(file1, "%d", &N);

    spm_list = malloc(N * sizeof(spm));
    for (i = 0; i < N; i++)
    {
        spm_list[i].name = malloc(sizeof(char *));
    }
    // read name and id
    for (i = 0; i < N; i++)
    {
        fscanf(file1, "%s", spm_list[i].name);
        fscanf(file1, "%d", &spm_list[i].id);
        fscanf(file1, "%lf", &spm_list[i].value);
    } // end for

    // calc price's average
    av = average(spm_list, N);
    printf("average = R$ %lf\n", av);

    printf("supermarkets with below average price:\n");
    for (i = 0; i < N; i++)
    {
        if (spm_list[i].value < av)
        {
            printf("%s\n", spm_list[i].name);
            printf("%d\n", spm_list[i].id);
            printf("R$ %lf\n", spm_list[i].value);
        } // end if
    }
    fclose(file1);
} // end method10( )

//
//---------------------------------------------------------------------main
//
int main(void)
{
    int c = 0;
    do
    {
        printf("\n0 - stop\n");
        printf("1 - ex 1    2 - ex 2\n");
        printf("3 - ex 3    4 - ex 4\n");
        printf("5 - ex 5    6 - ex 6\n");
        printf("7 - ex 7    8 - ex 8\n");
        printf("9 - ex 9    10 - ex 10\n");
        scanf("%d", &c);

        switch (c)
        {
        case 0:
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
        case 7:
            method07();
            break;
        case 8:
            method08();
            break;
        case 10:
            method10();
            break;
        default:
            printf("\nerror - invalid value\n");
            break;
        }
    } while (c != 0);
    return (0);
}