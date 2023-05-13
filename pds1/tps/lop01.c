#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// f0 - alo mundo
void f0()
{
    printf("alo mundo\n");
} // end f0()
// f1 - nome
void f1()
{
    char *nome;
    nome = malloc(sizeof(char) * 100);
    printf("\ndigite seu nome:");
    fgets(nome, 100, stdin);
    printf("%s\n", nome);

    free(nome);
} // end f1()
// f2 - seno
void f2()
{
    double seno, seno2;
    seno = sin(3.14);
    seno2 = sin(4.13);

    printf("%lf\t%lf\n", seno, seno2);
} // end f2()
int main()
{
    // menu
    int c = 0;
    do
    {
        printf("\n0 - parar\t1 - alo mundo\n2 - nome\t3 - seno\n");
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            break;
        case 1:
            f0();
            break;
        case 2:
            f1();
            break;
        case 3:
            f2();
            break;
        default:
            printf("esse valor nao existe\n");
            break;
        }
    } while (c != 0);

    // return
    return (0);
} // end main()