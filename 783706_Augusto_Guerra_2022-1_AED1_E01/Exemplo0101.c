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

    //identificar
    printf("%s\n", "Exemplo0101 - Programa = v0.0");
    printf("%s\n", "Autor: Augusto Guerra de Lima");
    printf("\n"); //mudar de linha

    //mostrar valor inicial
    printf("%s%d\n" , "x =" ,x);

    //ler do teclado
    printf("Insira um valor inteiro:");
    scanf("%d", &x); //necessário indicar o endereço -> &

    getchar( );

    //mostrar valor lido
    printf("%s%i\n", "x =",x);
    
    //encerrar
    printf("\n\nAperte ENTER para finalizar.");
    getchar( ); //aguardar por ENTER

     return 0;
 }//end of main

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 5
b.) -5
c.) 123456789
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) - identificacao de programa
leitura e exibicao de inteiro
*/
