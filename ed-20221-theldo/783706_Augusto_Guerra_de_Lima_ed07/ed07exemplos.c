/*
exemplos do ed07
783706 - Augusto Guerra de Lima
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include "io.h";

//
//------------------------------------------exemplo0701
//
/*
 writeInts - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void writeInts ( chars fileName, int x )
{
// definir dados
 FILE *arquivo = fopen ( fileName, "wt" );
 int y = 0;
// repetir para a quantidade de dados
 for ( y = 1; y <= x; y = y + 1 )
 {
 // gravar valor
 fprintf ( arquivo, "%d\n", y );
 } // fim repetir
// fechar arquivo (INDISPENSAVEL para gravacao)
 fclose ( arquivo );
} // fim writeInts ( )
/**
 Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
// identificar
 IO_id ( "EXEMPLO0701 - Method01 - v0.0" );
// executar o metodo auxiliar
 writeInts ( "DADOS1.txt", 10 );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )
//
//------------------------------------------exemplo0702
//
/*
 readInts - Ler de arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void readInts ( chars fileName )
{
// definir dados
 FILE* arquivo = fopen ( fileName, "rt" );
 int x = 0;
// tentar ler o primeiro
 fscanf ( arquivo, "%d", &x );
// repetir enquanto houver dados
 while ( ! feof ( arquivo ) )
 {
 // mostrar valor
 printf ( "%d\n", x );
 // tentar ler o proximo
 fscanf ( arquivo, "%d", &x );
 } // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
 fclose ( arquivo );
} // fim readInts ( )
/**
 Method02.
*/
void method02 ( )
{
// identificar
 IO_id ( "EXEMPLO0702 - Method02 - v0.0" );
// executar o metodo auxiliar
 readInts ( "DADOS1.TXT" );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )
//
//------------------------------------------exemplo0703
//
/*
 writeDoubles - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void writeDoubles ( chars fileName, int x )
{
// definir dados
 FILE* arquivo = fopen ( fileName, "wt" );
 int y = 0;
// gravar quantidade de valores
 IO_fprintf ( arquivo, "%d\n", x );
// repetir para a quantidade de dados
 for ( y = 1; y <= x; y = y + 1 )
 {
 // gravar valor
 IO_fprintf ( arquivo, "%lf\n", (0.1*y) );
 } // fim repetir
// fechar arquivo (INDISPENSAVEL para gravacao)
 fclose ( arquivo );
} // fim writeDoubles ( )
/**
 Method03.
*/
void method03 ( )
{
// identificar
 IO_id ( "EXEMPLO0710 - Method03 - v0.0" );
// executar o metodo auxiliar
 writeDoubles ( "DADOS2.TXT", 10 );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )
//
//------------------------------------------exemplo0704
//
/**
 readDoubles - Ler de arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void readDoubles ( chars fileName )
{
// definir dados
 FILE* arquivo = fopen ( fileName, "rt" );
 int x = 0 ;
 int y = 1 ;
 double z = 0.0;
// tentar ler a quantidade de dados
 fscanf ( arquivo, "%d", &x );
// repetir enquanto houver dados e
// quantidade nao tiver sido alcancada
 while ( ! feof ( arquivo ) && y <= x )
 {
 // tentar ler
 fscanf ( arquivo, "%lf", &z );
 // mostrar valor
 printf ( "%2d: %lf\n", y, z );
 // passar ao proximo
 y = y + 1;
 } // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
 fclose ( arquivo );
} // fim readDoubles ( )
/**
 Method04.
*/
void method04 ( )
{
// identificar
 IO_id ( "EXEMPLO0710 - Method04 - v0.0" );
// executar o metodo auxiliar
 readDoubles ( "DADOS2.TXT" );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )
//
//------------------------------------------exemplo0705
//
/*
writeText - gravar em arquivo texto certa quantidade de valores.
*/
void writeText(chars fileName)
{
    //data
    FILE* arquivo = fopen(fileName, "wt");
    chars linha = IO_new_chars(STR_SIZE);

    //repeat
    IO_println("Gravar linhas(para terminar, entrar com \"PARAR\":\n");
    do
    {
        //ler do teclado
        strcpy(linha,IO_readln(""));
        //gravar valor
        IO_fprintf(arquivo,"%s\n", linha);
    }
    while(strcmp("PARAR",linha)!=0);
    //fechar arquivo(indispensavel para gravacao)
    fclose(arquivo);
}//fim writeText( )
/*
method05.
*/
void method05( )
{
    //identificar
    IO_id("EXEMPLO0710 - Method05 - v.0.0");

    //executar o metodo auxiliar
    writeText("DADOS3.TXT");

    //encerrar
    IO_pause("Apertar ENTER para continuar");
}//fim method05( )
//
//------------------------------------------exemplo0706
//
/*
method06( ).
*/
/*
readText - Ler de arquivo texto certa quantidade de valores.
*/
void readText( chars fileName)
{
    //dados
    FILE* arquivo = fopen(fileName, "rt");
    chars linha = IO_new_chars(STR_SIZE);

    //tentar ler o primeiro
    strcpy(linha, IO_freadln(arquivo));

    //repetir enquanto houver dados
    while(!feof(arquivo) && 
    strcmp("PARAR", linha)!=0)
    {
        //mostrar valor
        printf("%s\n", linha);

        //tentar ler o proximo
        strcpy(linha, IO_freadln(arquivo)); 
    }//fim repetir

    //fechar arquivo(recomendavel para leitura)
    fclose(arquivo);

}//fim readText( )
/*
method06.
*/
void method06( )
{
    //identificar
    IO_id("EXEMPLO0710 - method06 - v.0.0");

    //executar o metodo auxiliar
    readText("DADOS3.TXT");

    //encerrar
    IO_pause("Apertar ENTER para continuar");
}//fim method06( )
//
//------------------------------------------exemplo0707
//
/**
 copyText - Copiar arquivo texto.
 @param fileOut - nome do arquivo de saida (destino)
 @param fileIn - nome do arquivo de entrada (origem )
*/
void copyText ( chars fileOut, chars fileIn )
{
// definir dados
 FILE* saida = fopen ( fileOut, "wt" );
 FILE* entrada = fopen ( fileIn , "rt" );
 chars linha = IO_new_chars ( STR_SIZE );
 int contador = 0;
// ler da origem
 strcpy ( linha, IO_freadln ( entrada ) );
// repetir enquanto houver dados
 while ( ! feof ( entrada ) )
 {
 // contar linha lida
 contador = contador + 1;
 // gravar no destino,
 // EXCEPCIONALMENTE sem a ultima linha, nesse caso
 if ( strcmp ( "PARAR", linha ) != 0 )
 {
 IO_fprintln ( saida, linha );
 } // fim se
 // ler da origem
 strcpy ( linha, IO_freadln ( entrada ) );
 } // fim repetir
// informar total de linhas copiadas
 IO_printf ( "Lines read = %d\n", contador );
// fechar arquivos
 fclose ( saida );
 fclose ( entrada );
} // fim copyText ( )
/**
 Method07.
*/
void method07 ( )
{
// identificar
 IO_id ( "EXEMPLO0707 - Method07 - v0.0" );
// executar o metodo auxiliar
 copyText ( "DADOS4.TXT", "DADOS3.TXT" );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method07 ( )
//
//------------------------------------------exemplo0708
//
/**
 appendText - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void appendText ( chars fileName )
{
// definir dados
 FILE* arquivo = fopen ( fileName, "at" );
 chars linha = IO_new_chars ( STR_SIZE );
// repetir ate' desejar parar
 IO_println ( "Gravar linhas (para terminar, entrar com \"PARAR\"):\n" );
 do
 {
 // ler do teclado
 strcpy ( linha, IO_readln ( "" ) );
 // gravar valor
 IO_fprintln ( arquivo, linha );
 }
 while ( strcmp ( "PARAR", linha ) != 0 );
// fechar arquivo (INDISPENSAVEL para gravacao)
 fclose ( arquivo );
} // fim appendText ( )
/**
 Method08.
*/
void method08 ( )
{
// identificar
 IO_id ( "EXEMPLO0710 - Method08 - v0.0" );
// executar o metodo auxiliar
 appendText ( "DADOS4.TXT" );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method08 ( )
//
//------------------------------------------exemplo0709
//
/**
 readWords - Ler palavras de arquivo.
 @param fileName - nome do arquivo
*/
void readWords ( chars fileName )
{
// definir dados
 FILE* arquivo = fopen ( fileName, "rt" );
 chars linha = IO_new_chars ( STR_SIZE );
// tentar ler a primeira
 strcpy ( linha, IO_fread ( arquivo ) );
// repetir enquanto houver dados
 while ( ! feof (arquivo) &&
 strcmp ( "PARAR", linha ) != 0 )
 {
 // mostrar valor
 printf ( "%s\n", linha );
 // tentar ler o proximo
 strcpy ( linha, IO_fread ( arquivo ) );
 } // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
 fclose ( arquivo );
} // fim readWords ( )
/**
 Method09.
*/
void method09 ( )
{
// identificar
 IO_id ( "EXEMPLO0710 - Method09 - v0.0" );
// executar o metodo auxiliar
 readWords ( "DADOS4.TXT" );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method09 ( )
//
//------------------------------------------exemplo0710
//
/**
 searchWord - Procurar palavra em arquivo.
 @return true, se encontrar; false, caso contrario
 @param fileName - nome do arquivo
 @param word - palavra a procurar
*/
bool searchWord ( chars fileName, chars word )
{
// definir dados
 FILE* arquivo = fopen ( fileName, "rt" );
 chars linha = IO_new_chars ( STR_SIZE );
// tentar ler a primeira
 strcpy ( linha, IO_fread ( arquivo ) );
// repetir enquanto houver dados
 while ( ! feof (arquivo) &&
 strcmp ( word, linha ) != 0 )
 {
 // tentar ler o proximo
 strcpy ( linha, IO_fread ( arquivo ) );
 } // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
 fclose ( arquivo );
 
// retornar resultado
 return ( strcmp ( word, linha ) == 0 );
} // fim searchdWord ( )
/**
 Method10.
*/
void method10 ( )
{
// identificar
 IO_id ( "EXEMPLO0710 - Method10 - v0.0" );
// procurar palavra
 IO_printf ( "Procurar (\"%s\") = %d\n", "pqr", searchWord ( "DADOS4.TXT", "pqr" ) );
 IO_printf ( "Procurar (\"%s\") = %d\n", "pqs", searchWord ( "DADOS4.TXT", "pqs" ) );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method10 ( )
/*
main - main function
*/
int main( void )
{
    //data
    int option = 0;

    //id
    printf("\ned07 783706_Augusto_Guerra_de_Lima - v.0.0\n");

    //switch
    do
    {
        printf("\noptions\n");
        printf("\n0 - stop\n");
        printf("\n1 - save archive with values int\n");
        printf("\n2 - read archive int\n");
        printf("\n3 - save archive with values double\n");
        printf("\n4 - read archive double\n");
        printf("\n5 - save archive with values str\n");
        printf("\n6 - read archive str\n");
        printf("\n7 - copy arquive 3 to a new (4)\n");
        printf("\n8 - add things on archive 4\n");
        printf("\n9 - read archive 4\n");
        printf("\n10 - search words archive 4\n");
        scanf("%d", &option);

        //cpm vallues
        switch(option)
        {
            case 0: /*nda*/ break;
            case 1: method01( ); break;
            case 2: method02( ); break;
            case 3: method03( ); break;
            case 4: method04( ); break;
            case 5: method05( ); break;
            case 6: method06( ); break;
            case 7: method07( ); break;
            case 8: method08( ); break;
            case 9: method09( ); break;
            case 10: method10( ); break;
            default: printf("\nERROR - invalid vallue\n"); break;
        }
    }while(option!=0);

    //finish
    printf("Aperte ENTER para finalizar");
    getchar( );
    return(0);
}//end main( )