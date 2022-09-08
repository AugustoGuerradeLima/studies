/*
  Exemplo0101 - v0.0. - 28/03/2022
  Author: 783706 Augusto Guerra de Lima
  Para compilar no Windows: gcc -o exemplo0101 exemplo0101.c
  
  No terminal do Windows: Exemplo0101
  */

 //dependencias
 #include <stdio.h> //para as entradas e saidas

 int main( )
 {
    //dados
    int x= 0; //valor inicial
    int y= 0;
    int z= 0;

    //identificar
    printf("%s\n", "Exemplo0106 - Programa = v0.0");
    printf("%s\n", "Autor: Augusto Guerra de Lima");
    printf("\n"); //mudar de linha

    //mostrar valor inicial
    printf("%s%d\n" , "x =" ,x);
    printf("%s%i\n" , "y =",y);


    //ler do teclado
    printf("Insira um valor inteiro:");
    scanf("%d", &x); //necessário indicar o endereço -> &

    getchar( );

    printf("Insira outro valor inteiro:");
    scanf("%i", &y);

    getchar( );

    //operar valores
    z = x*y; //gaurdar em z o produto de x por y

    //mostrar valor resultante
    printf ( "%s(%i)*(%i) = (%d)\n", "z = ", x, y, z );

    
    //encerrar
    printf("\n\nAperte ENTER para finalizar.");
    getchar( ); //aguardar por ENTER

     return 0;
 }//end of main

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 3 e 5
b.) -3 e 5
c.) -3 e -5
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) - identificacao de programa
leitura e exibicao de inteiro
0.6 01. ( OK ) - produto de dois inteiros
*/
