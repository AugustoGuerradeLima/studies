/*exemples ed08 - Augusto Guerra de Lima 783706*/
// dependencies
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "io.h"
/**
 printIntArray - Mostrar arranjo com valores inteiros.
 @param n - quantidade de valores
 @param array - grupo de valores inteiros
*/
void printIntArray(int n, int array[])
{
    // definir dado local
    int x = 0;

    // mostrar valores no arranjo
    for (x = 0; x < n; x = x + 1)
    {
        // mostrar valor
        IO_printf("%2d: %d\n", x, array[x]);
    } // fim repetir
} // printIntArray ( )
/**
 Method01 - Mostrar certa quantidade de valores.
*/
void method01()
{
    // definir dado
    int array[] = {1, 2, 3, 4, 5};
    // identificar
    IO_id("EXEMPLO0810 - Method01 - v0.0");
    // executar o metodo auxiliar
    printIntArray(5, array);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method01 ( )
/**
 readIntArray - Ler arranjo com valores inteiros.
 @param n - quantidade de valores
 @param array - grupo de valores inteiros
*/
void readIntArray(int n, int array[])
{
    // definir dados locais
    int x = 0;
    int y = 0;
    chars text = IO_new_chars(STR_SIZE);
    // ler e guardar valores em arranjo
    for (x = 0; x < n; x = x + 1)
    {
        // ler valor
        strcpy(text, STR_EMPTY);
        y = IO_readint(IO_concat(
            IO_concat(text, IO_toString_d(x)), " : "));
        // guardar valor
        array[x] = y;
    } // fim repetir
} // readIntArray ( )
/**
 Method02.
*/
void method02()
{
    // definir dados
    int n = 5; // quantidade de valores
    int array[n];
    // identificar
    IO_id("EXEMPLO0810 - Method02 - v0.0");
    // ler dados
    readIntArray(n, array);
    // mostrar dados
    IO_printf("\n");
    printIntArray(n, array);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method02 ( )
/**
 fprintIntArray - Gravar arranjo com valores inteiros.
 @param fileName - nome do arquivo
 @param n - quantidade de valores
 @param array - grupo de valores inteiros
*/
void fprintIntArray(chars fileName, int n, int array[])
{
    // definir dados locais
    FILE *arquivo = fopen(fileName, "wt");
    int x = 0;
    // gravar quantidade de dados
    IO_fprintf(arquivo, "%d\n", n);
    // gravar valores no arranjo
    for (x = 0; x < n; x = x + 1)
    {
        // gravar valor
        IO_fprintf(arquivo, "%d\n", array[x]);
    } // fim repetir

    // fechar arquivo
    fclose(arquivo);
} // fprintIntArray ( )
/**
 Method03.
*/
void method03()
{
    // definir dados
    int n = 5; // quantidade de valores
    int array[n];
    // identificar
    IO_id("EXEMPLO0810 - Method03 - v0.0");
    // ler dados
    readIntArray(n, array);
    // mostrar dados
    IO_printf("\n");
    fprintIntArray("ARRAY1.TXT", n, array);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method03 ( )
/**
 freadArraySize - Ler tamanho do arranjo com valores inteiros.
 @return quantidade de valores lidos
 @param fileName - nome do arquivo
*/
int freadArraySize(chars fileName)
{
    // definir dados locais
    int n = 0;
    FILE *arquivo = fopen(fileName, "rt");
    // ler a quantidade de dados
    IO_fscanf(arquivo, "%d", &n);
    if (n <= 0)
    {
        IO_println("ERRO: Valor invalido.");
        n = 0;
    } // fim se
      // retornar dado lido
    return (n);
} // freadArraySize ( )
/**
 freadIntArray - Ler arranjo com valores inteiros.
 @param fileName - nome do arquivo
 @param n - quantidade de valores
 @param array - grupo de valores inteiros
*/
void freadIntArray(chars fileName, int n, int array[])
{
    // definir dados locais
    int x = 0;
    int y = 0;
    FILE *arquivo = fopen(fileName, "rt");
    // ler a quantidade de dados
    IO_fscanf(arquivo, "%d", &x);
    if (n <= 0 || n > x)
    {
        IO_println("ERRO: Valor invalido.");
    }
    else
    {
        // ler e guardar valores em arranjo
        x = 0;
        while (!feof(arquivo) && x < n)
        {
            // ler valor
            IO_fscanf(arquivo, "%d", &y);
            // guardar valor
            array[x] = y;
            // passar ao proximo
            x = x + 1;
        } // fim repetir
    }     // fim se
} // freadIntArray ( )
/**
 Method04.
*/
void method04()
{
    // definir dados
    int n = 0; // quantidade de valores
               // identificar
    IO_id("EXEMPLO0810 - Method04 - v0.0");
    // ler dados
    n = freadArraySize("ARRAY1.TXT");
    if (n <= 0)
    {
        IO_printf("\nERRO: Valor invalido.\n");
    }
    else
    {
        // definir armazenador
        int array[n];
        // ler dados
        freadIntArray("ARRAY1.TXT", n, array);
        // mostrar dados
        IO_printf("\n");
        printIntArray(n, array);
    } // fim se
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method04 ( )
/**
 copyIntArray - Copiar arranjo com valores inteiros.
 @param n - quantidade de valores
 @param copy - copia do grupo de valores inteiros
 @param array - grupo de valores inteiros
*/
void copyIntArray(int n, int copy[], int array[])
{
    // definir dados locais
    int x = 0;
    int y = 0;
    if (n <= 0)
    {
        IO_println("ERRO: Valor invalido.");
        n = 0;
    }
    else
    {
        // copiar valores em arranjo
        for (x = 0; x < n; x = x + 1)
        {
            // copiar valor
            copy[x] = array[x];
        } // fim repetir
    }     // fim se
} // copyIntArray ( )
/**
 Method05.
*/
void method05()
{
    // definir dados
    int n = 0; // quantidade de valores
               // identificar
    IO_id("EXEMPLO0810 - Method05 - v0.0");
    // ler a quantidade de dados
    n = freadArraySize("ARRAY1.TXT");
    if (n <= 0)
    {
        IO_printf("\nERRO: Valor invalido.\n");
    }
    else
    {
        // definir armazenador
        int array[n];
        int other[n];
        // ler dados
        freadIntArray("ARRAY1.TXT", n, array);
        // copiar dados
        copyIntArray(n, other, array);
        // mostrar dados
        IO_printf("\nOriginal\n");
        printIntArray(n, array);
        // mostrar dados
        IO_printf("\nCopia\n");
        printIntArray(n, other);
    } // fim se
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method05 ( )
/**
 sumIntArray - Somar valores em arranjo com inteiros.
 @return - soma dos valores
 @param n - quantidade de valores
 @param array - grupo de valores inteiros
*/
int sumIntArray(int n, int array[])
{
    // definir dados locais
    int soma = 0;
    int x = 0;
    // mostrar valores no arranjo
    for (x = 0; x < n; x = x + 1)
    {
        // somar valor
        soma = soma + array[x];
    } // fim repetir
      // retornar resposta
    return (soma);
} // sumIntArray ( )
/**
 Method06.
*/
void method06()
{
    // definir dados
    int n = 0; // quantidade de valores
               // identificar
    IO_id("EXEMPLO0810 - Method06 - v0.0");
    // ler a quantidade de dados
    n = freadArraySize("ARRAY1.TXT");
    if (n <= 0)
    {
        IO_printf("\nERRO: Valor invalido.\n");
    }
    else
    {
        // definir armazenador
        int array[n];
        // ler dados
        freadIntArray("ARRAY1.TXT", n, array);
        // mostrar a soma dos valores no arranjo
        IO_printf("\nSoma = %d\n", sumIntArray(n, array));
    } // fim se
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method06 ( )
/**
 isAllZeros - Testar valores inteiros em arranjo.
 @return - true, se todos os dados forem iguais a zero;
 false, caso contrario
 @param n - quantidade de valores
 @param array - grupo de valores inteiros
*/
bool isAllZeros(int n, int array[])
{
    // definir dados locais
    bool result = true;
    int x = 0;
    // mostrar valores no arranjo
    x = 0;
    while (x < n && result)
    {
        // testar valor
        result = result && (array[x] == 0);
        // passar ao proximo
        x = x + 1;
    } // fim repetir
      // retornar resposta
    return (result);
} // isAllZeros ( )
/**
 Method07.
*/
void method07()
{
    // definir dados
    int n = 5; // quantidade de valores
    int array1[] = {0, 0, 0, 0, 0};
    int array2[] = {1, 2, 3, 4, 5};
    int array3[] = {1, 2, 0, 4, 5};
    // identificar
    IO_id("EXEMPLO0810 - Method07 - v0.0");
    // testar dados
    IO_println("\nArray1");
    printIntArray(n, array1);
    IO_printf("isAllZeros (array1) = %d", isAllZeros(n, array1));
    IO_println("\nArray2");
    printIntArray(n, array2);
    IO_printf("isAllZeros (array2) = %d", isAllZeros(n, array2));
    IO_println("\nArray3");
    printIntArray(n, array3);
    IO_printf("isAllZeros (array3) = %d", isAllZeros(n, array3));
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method07 ( )
/**
 addIntArray - Somar arranjos com inteiros.
 @return - arranjo ocm a soma resultante
 @param n - quantidade de valores
 @param array3 - soma de grupo de valores inteiros
 @param array1 - grupo de valores inteiros (1)
 @param k - constante para multiplicar o segundo arranjo
 @param array2 - grupo de valores inteiros (2)
*/
void addIntArray(int n, int array3[],
                 int array1[], int k, int array2[])
{
    // definir dados locais
    int x = 0;
    // mostrar valores no arranjo
    for (x = 0; x < n; x = x + 1)
    {
        // somar valor
        array3[x] = array1[x] + k * array2[x];
    } // fim repetir
} // addIntArray ( )
/**
 Method08.
*/
void method08()
{
    // definir dados
    int n = 0; // quantidade de valores
               // identificar
    IO_id("EXEMPLO0810 - Method08 - v0.0");
    // ler a quantidade de dados
    n = freadArraySize("ARRAY1.TXT");
    if (n <= 0)
    {
        IO_printf("\nERRO: Valor invalido.\n");
    }
    else
    {
        // definir armazenador
        int array[n];
        int other[n];
        int sum[n];
        // ler dados
        freadIntArray("ARRAY1.TXT", n, array);
        // copiar dados
        copyIntArray(n, other, array);
        // mostrar dados
        IO_printf("\nOriginal\n");
        printIntArray(n, array);
        // mostrar dados
        IO_printf("\nCopia\n");
        printIntArray(n, other);
        // operar soma de arranjos
        addIntArray(n, sum, array, (-2), other);
        // mostrar resultados
        IO_printf("\nSoma\n");
        printIntArray(n, sum);
    } // fim se
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method08 ( )
/**
 isEqual - Testar arranjos com inteiros sao iguais.
 @return - true, se todos os dados forem iguais;
 false, caso contrario
 @param n - quantidade de valores
 @param array1 - grupo de valores inteiros (1)
 @param array2 - grupo de valores inteiros (2)
*/
bool isEqual(int n, int array1[], int array2[])
{
    // definir dados locais
    bool result = true;
    int x = 0;
    // mostrar valores no arranjo
    x = 0;
    while (x < n && result)
    {
        // testar valor
        result = result && (array1[x] == array2[x]);
        // passar ao proximo
        x = x + 1;
    } // fim repetir
      // retornar resposta
    return (result);
} // isEqual ( )
/**
 Method09.
*/
void method09()
{
    // definir dados
    int n = 0; // quantidade de valores
               // identificar
    IO_id("EXEMPLO0810 - Method09 - v0.0");
    // ler a quantidade de dados
    n = freadArraySize("ARRAY1.TXT");
    if (n <= 0)
    {
        IO_printf("\nERRO: Valor invalido.\n");
    }
    else
    {
        // definir armazenador
        int array[n];
        int other[n];
        // ler dados
        freadIntArray("ARRAY1.TXT", n, array);
        // copiar dados
        copyIntArray(n, other, array);
        // mostrar dados
        IO_printf("\nOriginal\n");
        printIntArray(n, array);
        // mostrar dados
        IO_printf("\nCopia\n");
        printIntArray(n, other);
        // mostrar resultado da comparacao
        IO_printf("\nIguais = %d\n", isEqual(n, array, other));
        // modificar um valor
        other[0] = (-1) * other[0];
        // mostrar dados
        IO_printf("\nCopia alterada\n");
        printIntArray(n, other);
        // mostrar resultado da comparacao
        IO_printf("\nIguais = %d\n", isEqual(n, array, other));
    } // fim se
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method09 ( )
/**
 searchArray - Procurar valor em arranjo com inteiros.
 @return - true, se encontrar;
 false, caso contrario
 @param value - valor a ser procurado
 @param n - quantidade de valores
 @param array - grupo de valores inteiros
*/
bool searchArray(int value, int n, int array[])
{
    // definir dados locais
    bool result = false;
    int x = 0;
    // mostrar valores no arranjo
    x = 0;
    while (x < n && !result)
    {
        // testar valor
        result = (value == array[x]);
        // passar ao proximo
        x = x + 1;
    } // fim repetir
      // retornar resposta
    return (result);
} // searchArray ( )
/**
 Method10.
*/
void method10()
{
    // definir dados
    int n = 0;     // quantidade de valores
    int value = 0; // valor a ser procurado
                   // identificar
    IO_id("EXEMPLO0810 - Method10 - v0.0");
    // ler a quantidade de dados
    n = freadArraySize("ARRAY1.TXT");
    if (n <= 0)
    {
        IO_printf("\nERRO: Valor invalido.\n");
    }
    else
    {
        // definir armazenador
        int array[n];
        // ler dados
        freadIntArray("ARRAY1.TXT", n, array);
        // mostrar dados
        IO_printf("\nOriginal\n");
        printIntArray(n, array);
        // mostrar resultados de procuras
        value = array[0];
        IO_printf("\nProcurar por (%d) = %d\n",
                  value, searchArray(value, n, array));
        value = array[n / 2];
        IO_printf("\nProcurar por (%d) = %d\n",
                  value, searchArray(value, n, array));
        value = array[n - 1];
        IO_printf("\nProcurar por (%d) = %d\n",
                  value, searchArray(value, n, array));
        value = (-1);
        IO_printf("\nProcurar por (%d) = %d\n",
                  value, searchArray(value, n, array));
    } // fim se
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method10 ( )
int main()
{
    int choice = 0;                                // data
    printf("\n783706 - Augusto Guerra de Lima\n"); // id
    do
    {
        printf("options\n");
        printf("1 - ex1  2 - ex 2\n3 - ex3  4 - ex4\n5 - ex5  6 - ex 6\n7 - ex7  8 - ex 8\n9 - ex9  10 - ex 10\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0: // nda
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
        }
    } while (choice != 0);
    printf("press ENTER\n");
    getchar();
} // end main()
  /*
  01 - ok
  02 - ok
  03 - ok
  04 - ok
  05 - ok
  07 - ok
  08 - ok
  09 - ok
  10 - ok
  */