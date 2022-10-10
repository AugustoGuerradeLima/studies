#include <stdio.h>

//1 essa funcao executa iterativamente o triangulo de acordo com o tamanho inserido
void triangulo(int size)
{
    int n = size - 1;//auxilia a formacao do triangulo

    for(int i = 0; i < size; i++)//quebra linhas
    {
        for(int j = 0; j<(size - n);j++)//printa o desenho
        {
            printf("* ");
            
        }
        printf("\n");//efetivamente quebra a linha
        n--;//decrementa para formar a hipotenusa
    }
}//end triangulo()

int main()
{
    int size;//dados
    printf("\nescolha o tamanho\n");
    scanf("%d",&size);//escolhe o tamnho da forma

    triangulo(size);//funcao triangulo

    printf("\n");//quebra uma linha

    return(0);//finaliza sem erros
}//end main()