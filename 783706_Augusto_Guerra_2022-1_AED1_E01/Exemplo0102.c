/*
  Exemplo0102 - v0.0. - 28/03/2022
  Author: 783706 Augusto Guerra de Lima
  Para compilar no Windows: gcc -o exemplo0102 exemplo0102.c
  
  No terminal do Windows: Exemplo0102
  */

 //dependencias
 #include <stdio.h> //para as entradas e saidas

 int main( )
 {
    //dados
    double x = 0.0;

    //identificar
    printf("%s\n", "Exemplo0102 - Programa = v0.0");
    printf("%s\n", "Autor: Augusto Guerra de Lima");
    printf("\n"); //mudar de linha

    //mostrar valor inicial
    printf("%s%lf\n" , "x =" ,x);

    //ler do teclado
    printf("Insira um valor Real:");
    scanf("%lf", &x); //necessário indicar o endereço -> &

    getchar( );

    //mostrar valor lido
    printf("%s%lf\n", "x =",x);
    
    //encerrar
    printf("\n\nAperte ENTER para finalizar.");
    getchar( ); //aguardar por ENTER

     return 0;
 }//end of main

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) - identificacao de programa
leitura e exibicao de inteiro
0.2 01. ( OK ) - identificacao de programa
*/
