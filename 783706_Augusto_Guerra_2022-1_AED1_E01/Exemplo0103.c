/*
  Exemplo0103 - v0.0. - 29/03/2022
  Author: 783706 Augusto Guerra de Lima
  Para compilar no Windows: gcc -o exemplo0103 exemplo0103.c
  
  No terminal do Windows: Exemplo0103
  */

 //dependencias
 #include <stdio.h> //para as entradas e saidas

 int main( )
 {
    //dados
    char x = 'A';

    //identificar
    printf("%s\n", "Exemplo0103 - Programa = v0.0");
    printf("%s\n", "Autor: Augusto Guerra de Lima");
    printf("\n"); //mudar de linha

    //mostrar valor inicial
    printf("%s%c\n" , "x =" ,x);

    //ler do teclado
    printf("Insira um caractere:");
    scanf("%c", &x); //necessário indicar o endereço -> &

    getchar( );

    //mostrar valor lido
    printf("%s%c\n", "x =",x);
    
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
c.) 1.23456789
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) - identificacao de programa
leitura e exibicao de inteiro
0.2 01. ( OK ) - identificacao de programa
0.3 01. ( OK ) - identificação caractere
*/
