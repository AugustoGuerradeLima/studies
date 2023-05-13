/*
  Exemplo0104 - v0.0. - 29/03/2022
  Author: 783706 Augusto Guerra de Lima
  Para compilar no Windows: gcc -o exemplo0104 exemplo0104.c
  
  No terminal do Windows: Exemplo0104
  */

 //dependencias
 #include <stdio.h> //para as entradas e saidas
 #include <stdbool.h>//para valores lógicos

 int main( )
 {
    //dados
    bool x = false;
    int y = 0;

    //identificar
    printf("%s\n", "Exemplo0104 - Programa = v0.0");
    printf("%s\n", "Autor: Augusto Guerra de Lima");
    printf("\n"); //mudar de linha

    //mostrar valor inicial
    printf("%s%d\n" , "x =" ,x);

    //ler do teclado
    printf("Insira um valor logico:");
    scanf("%d", &y); //necessário indicar o endereço -> &

    getchar( );

    //garantir valor logico no intervalo [0:1]
    x = (y!=0);

    //mostrar valor lido
    printf("%s%d\n", "x =",x);
    
    //encerrar
    printf("\n\nAperte ENTER para finalizar.");
    getchar( ); //aguardar por ENTER

     return 0;
 }//end of main

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a)valor de x como 0 = false em bool
b)x retorna 1 se y for 1 e x retorna 0 se y for 0 já que está assumindo um valor de comparação onde y deve ser diferente de 0
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
*/
