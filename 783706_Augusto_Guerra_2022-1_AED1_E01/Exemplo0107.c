/*
  Exemplo0107 - v0.0. - 28/03/2022
  Author: 783706 Augusto Guerra de Lima
  Para compilar no Windows: gcc -o exemplo0107 exemplo0107.c
  
  No terminal do Windows: Exemplo0107
  */

 //dependencias
 #include <stdio.h> //para as entradas e saidas
 #include <math.h>

 int main( )
 {
    //dados
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    //identificar
    printf("%s\n", "Exemplo0107 - Programa = v0.0");
    printf("%s\n", "Autor: Augusto Guerra de Lima");
    printf("\n"); //mudar de linha

    //mostrar valor inicial
    printf("%s%lf\n" , "x =" ,x);
    printf("%s%lf\n" , "y =" ,y);

    //ler do teclado
    printf("Insira um valor Real:");
    scanf("%lf", &x); //necessário indicar o endereço -> &

    getchar( );

    printf("Insira um outro valor Real:");
    scanf("%lf", &y); //necessário indicar o endereço -> &

    getchar( );

    //operar valores
    z= pow(x,y);

    //mostrar valor resultante
    printf("%s(%lf)*(%lf)= (%lf)\n\n", "z=", x,y,z);

    // operar valores
 z = pow( x, y ); // elevar a base (x) 'a potencia (y)
// mostrar valor resultante
 printf ( "%s(%lf)*(%lf) = (%lf)\n", "z = ", x, y, z );


    
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
0.7 01. ( OK ) - potenciação de reais
*/
