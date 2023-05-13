/*
  Exemplo0105 - v0.0. - 29/03/2022
  Author: 783706 Augusto Guerra de Lima
  Para compilar no Windows: gcc -o exemplo0105 exemplo0105.c
  
  No terminal do Windows: Exemplo0105
  */

 //dependencias
 #include <stdio.h> //para as entradas e saidas
 #include <stdbool.h>//para valores lógicos
 #include <string.h>//para cadeias de caracteres

 int main( )
 {
    //dados
    char x [80] = "abc"; //definir variável com tamanho e valor inicial

    //identificar
    printf("%s\n", "Exemplo0105 - Programa = v0.0");
    printf("%s\n", "Autor: Augusto Guerra de Lima");
    printf("\n"); //mudar de linha

    //mostrar valor inicial
    printf("%s%s\n" , "x =" ,x);

    //ler do teclado
    printf("Insira uma cadeia de caracteres:");
    scanf("%s", &x); //necessário indicar o endereço -> &

    getchar( );

    //mostrar valor lido
    printf("%s%s\n", "x =",x);
    
    //encerrar
    printf("\n\nAperte ENTER para finalizar.");
    getchar( ); //aguardar por ENTER

     return 0;
 }//end of main

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
o valor d e f resulta apenas como d
---------------------------------------------- previsao de testes
a.) def
b.) d e f
c.) d_e_f
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) - identificacao de programa
leitura e exibicao de inteiro
0.2 01. ( OK ) - identificacao de programa
0.3 01. ( OK ) - identificação caractere
0.4 01. ( OK ) - teste com valores lógicos
0.5 01. ( OK ) - teste com cadeias de caracteres (string)
*/
