// ed07 - 783706 - Augusto Guerra de Lima
// dependecias
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "io.h";
//
// exemplo0711------------------------------------------------------------------------exemplo0711
//
// method01
void write3(chars fileName, int n)
{
    FILE *arquivo = fopen(fileName, "wt");
    int x = 0; // dados
    // repetir para a quantidade de dados
    for (x = 1; x <= n; x++)
    {
        fprintf(arquivo, "%d\n", (x * 3));
    }                // fim repetir
    fclose(arquivo); // fechar arquivo
} // fim write3( )
void method01()
{
    int n = 0;              // dados
    printf("\nmethod01\n"); // id
    printf("insira um valor inteiro: ");
    scanf("%d", &n);            // ler
    write3("DADOS0711.txt", n); // executar
    printf("Aperte ENTER para continuar");
    getchar(); // encerrar
} // fim method01( )
//
// exemplo0712------------------------------------------------------------------------exemplo0712
//
void write6(chars fileName, int n)
{
    FILE *arquivo = fopen(fileName, "wt");
    int x = 0; // dados
    // repertir para a quantidade de dados
    for (x = n; x >= 1; x--)
    {
        fprintf(arquivo, "%d\n", (x * 6));
    }                // fim repetir
    fclose(arquivo); // fechar arquivo
} // fim write6( )
void method02()
{
    int n = 0; // dados
    printf("\nmethod02\n");
    printf("insira um valor inteiro");
    scanf("%d", &n);            // ler
    write6("DADOS0712.txt", n); // executar
    printf("Aperte ENTER para continuar");
    getchar(); // encerrar
} // fim method02( )
//
// exemplo0713------------------------------------------------------------------------exemplo0713
//
void write_p5(chars fileName, int n)
{
    FILE *arquivo = fopen(fileName, "wt");
    int x = 0;
    int p = 0; // dados
    // repertir para a quantidade de dados
    for (x = 0; x < n; x++)
    {
        p = pow(5, x);
        fprintf(arquivo, "%d\n", p);
    }                // fim repetir
    fclose(arquivo); // fechar arquivo
}
void method03()
{
    int n = 0; // dados
    printf("\nmethod03\n");
    printf("insira um valor inteiro");
    scanf("%d", &n);              // ler
    write_p5("DADOS0713.txt", n); // executar
    printf("Aperte ENTER para continuar");
    getchar(); // encerrar
} // fim method03( )
//
// exemplo0714------------------------------------------------------------------------exemplo0714
//
void write_dp3(chars fileName, int n)
{
    FILE *arquivo = fopen(fileName, "wt");
    float x = 0.0;
    float p = 0.0; // dados
    // repertir para a quantidade de dados
    for (x = n; x > 0; x--)
    {
        p = pow(3.0, x);
        fprintf(arquivo, "%f\n", (1.0 / p));
    }                          // fim repetir
    fprintf(arquivo, "%f", 1); // escreve 1 normalmente como int
    fclose(arquivo);           // fechar arquivo
}
void method04()
{
    int n = 0; // dados
    printf("\nmethod04\n");
    printf("insira um valor inteiro");
    scanf("%d", &n);               // ler
    write_dp3("DADOS0714.txt", n); // executar
    printf("Aperte ENTER para continuar");
    getchar(); // encerrar
} // fim method04( )
//
// exemplo0715------------------------------------------------------------------------exemplo0715
//
void writexp(chars fileName, double base, int quant)
{
    // dados
    FILE *arquivo = fopen(fileName, "wt");
    double p;      // potencia
    int count = 0; // contador
    int y = 1;     // parametro da potencia
    // repetir para a quantidade de valores
    fprintf(arquivo, "%d\n", 1);
    for (count = 0; count < quant; count++)
    {
        p = pow(base, y);
        fprintf(arquivo, "%lf\n", (1 / p));
        y = y + 2;
    }                // fim repetir
    fclose(arquivo); // fechar arquivo
} // fim writexp( )
void method05()
{
    int quant = 0;
    double base = 0; // dados
    printf("\nmethod05\n");
    printf("insira o valor da base\n");
    scanf("%lf", &base); // ler
    printf("insira a quantidade de expoentes\n");
    scanf("%d", &quant);                   // ler
    writexp("DADOS0715.txt", base, quant); // executar
    printf("Aperte ENTER para continuar");
    getchar(); // encerrar
} // fim method05( )
//
// exemplo0716------------------------------------------------------------------------exemplo0716
//
void method06(void)
{
    int quant = 0;
    double sum = 0.0;
    double x = 0.0;
    FILE *file1 = fopen("DADOS0715.txt", "rt");
    FILE *file2 = fopen("RESULTADO06.txt", "wt"); // dados
    printf("escolha a quantidade: ");
    scanf("%d", &quant); // ler
    while (quant > 0)
    {
        fscanf(file1, "%lf", &x);
        fprintf(file2, "%lf\n", sum);
        sum = sum + x;
        quant--;
    }
    printf("Aperte ENTER para continuar");
    getchar(); // encerrar
} // fim method06( )
//
// exemplo0717------------------------------------------------------------------------exemplo0717
//
void method07(void)
{
    int quant = 0;
    double sum = 0.0;
    double x = 0.0;
    FILE *file1 = fopen("DADOS0714.txt", "rt");
    FILE *file2 = fopen("RESULTADO07.txt", "wt");
    printf("escolha a quantidade: ");
    scanf("%d", &quant);
    while (quant > 0)
    {
        fscanf(file1, "%lf", &x);
        fprintf(file2, "%lf\n", sum);
        sum = sum + x;
        quant--;
    }
    printf("Aperte ENTER para continuar");
    getchar(); // encerrar
} // fim method07( )
//
// exemplo0718------------------------------------------------------------------------exemplo0718
//
fpares(int n)
{
    if (n == 0)
    {
        return (0);
    } // soma sera zero
    if (n == 1)
    {
        return (2);
    }                                           // soma sera dois
    return (4 * fpares(n - 1) + fpares(n - 2)); // formula para os pares em fibonacci
} // fim fpares
fpsoma(int n)
{
    if (n <= 1)
    {
        return (fpares(n));
    }                                   // retorna apenas para 0 ou 1
    return (fpares(n) + fpsoma(n - 1)); // retorna a soma do atual com o anterior recursivamente
} // fim fpsoma
void method08()
{
    // dados
    int n = 0; // quantidade a ser somada
    FILE *arquivo = fopen("RESULTADO08.txt", "wt");
    printf("\nescolha uma quantidade: "); // ler
    scanf("%d", &n);
    printf("\nsoma dos %d primeiros numeros pares de fibonacci = %d\n", n, fpsoma(n)); // mostrar
    printf("\nAperte ENTER para continuar\n");
    fprintf(arquivo, "\nsoma dos %d primeiros numeros pares de fibonacci = %d\n", n, fpsoma(n));
    getchar();
} // fim method08( )
//
// exemplo0719------------------------------------------------------------------------exemplo0719
//
void method09()
{
    char cadeia[100];
    int count = 0;
    int maiusculas = 0;
    FILE *file = fopen("DADOS0719.txt", "wt"); // dados
    printf("entre com uma cadeia de caracteres:\n ");
    getchar();
    gets(cadeia);                                     // ler
    fprintf(file, "%s\n", cadeia);                    // escrever
    for (count = 0; count <= strlen(cadeia); count++) // repetir
    {
        if ('A' <= cadeia[count] && cadeia[count] <= 'Z')
        {
            maiusculas++;
        }
    }
    fprintf(file, "num de maiusculas = %d", maiusculas);
    fclose(file);
    printf("Aperte ENTER para continuar");
    getchar(); // encerrar
} // fim method09( )
//
// exemplo0720------------------------------------------------------------------------exemplo0720
//
void method10()
{
    char cadeia[100];
    int count = 0;
    int limitelinha = 1;
    int dm7 = 0;
    FILE *file1 = fopen("DADOS0719.txt", "rt");
    FILE *file2 = fopen("RESULTADO10.txt", "wt"); // dados

    while (limitelinha > 0) // repetir
    {
        fgets(cadeia, 100, file1);
        fprintf(file2, "%s\n", cadeia);
        for (count = 0; count <= strlen(cadeia); count++)
        {
            if (cadeia[count] >= '7' && cadeia[count] <= '9')
            {
                dm7++;
            }
        }
        limitelinha--;
    } // fim repetir
    fprintf(file2, "numero de digitos maiores que 7 = %d", dm7);
    fclose(file1);
    fclose(file2);
    printf("Aperte ENTER para continuar");
    getchar(); // encerrar
} // fim method10( )
// main
int main()
{
    int escolha = 0;                                  // dados
    printf("ed07 - 783706 - Augusto Guerra de Lima"); // id
    do
    {
        printf("\nopcoes\n");
        printf("0 - parar\n");
        printf("1 - salvar em um arquivo multiplos de tres\n");
        printf("2 - salvar em um arquivo multiplos de tres pares\n");
        printf("3 - salvar potencias de cinco\n");
        printf("4 - salvar potencias de tres em denominadores\n");
        printf("5 - salvar porencias com base n em denominadores\n");
        printf("6 - ler e salvar determinada soma de variaveis\n");
        printf("7 - ler e salvar soma de potencias de tres\n");
        printf("8 - salvar soma de certa quantidade de numeros de fibonacci pares\n");
        printf("9 - ler maiusculas de uma cadeia de caracteres\n");
        printf("10 - salvar e comparar digitos maiores que 7\n");
        scanf("%d", &escolha); // ler
        switch (escolha)       // testar
        {
        case 0: /*nda*/
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
            printf("ERRO valor invalido");
            break;
        }                   // fim testar
    } while (escolha != 0); // fim repetir
    printf("\naperte ENTER para encerrar");
    getchar();
    return (0); // encerrar
} // fim main