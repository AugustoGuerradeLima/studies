#include <stdio.h>

//2 programa dividido em tres partes preste atencao
void losango(int size)
{   
    //contadores
    int i = 0;
    int j = 0;
    //dados
    int spaces = size/2;//numero de espacos
    int halfsize = size/2;//determina a metade do losango
    int n = 0;//ponta
    //se o losango tem diagonal par ou impar da resultado no desenho portanto
    if(size%2!=0)n=1;
    if(size%2==0)n=2;

    //--------------------------------------------------------------------------------------------2.1 desenha a parte superior
    while(i<halfsize)
    {
        //espacos
        for(j = 0; j<spaces;j++)
        {
            printf("  ");
        }
        //caracteres
        for(j = 0; j<n;j++)
        {
            printf("* ");
        }
        printf("\n");//quebra a linha
        spaces--;//decrementa o numero de espacos
        n+=2;//vai de par em par ou de impar em impar
        i++;//incrementa o i
    }
    //--------------------------------------------------------------------------------------------2.2 desenha a diagonal do losango
    //relembrando que importa se é par ou impar
    if(size%2!=0)
    {
    for(j = 0; j<size; j++)
    {
        printf("* ");
    }
    printf("\n");
    }
    if(size%2==0)
    {
    for(j = 0; j<(size+2); j++)
    {
        printf("* ");
    }
    printf("\n");
    }
    //ATENCAO se vc fez ate aqui ja tem outro metodo de desenhar trinagulo
    //--------------------------------------------------------------------------------------------2.3 desenha a parte inferior
    //reinicia as variaveis importantes para comecar a logica inversa a parte superior
    i = 0;
    spaces = 1;
    //se o losango tem diagonal par ou impar da resultado no desenho portanto
    if(size%2!=0)n=size-2;
    if(size%2==0)n=size;
    while(i<halfsize)
    {   
        //espacos
        for(j=0;j<spaces;j++)
        {
            printf("  ");
        }
        //caracteres
        for(j = 0; j<n;j++)
        {
            printf("* ");
        }
        printf("\n");//quebra a linha
        spaces++;//incrementa o numero de espacos
        n-=2;//vai de par em par ou de impar em impar
        i++;//incrementa o i
    }

}

int main()
{
    int size;//dados
    printf("escolha o tamanho\n");
    scanf("%d",&size);//escolhe o tamnho da forma

    losango(size);//funcao losango

    return(0);//finaliza sem erros
}//end main()