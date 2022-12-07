/*
 Exemplo0210 - v0.0. - 02 / 04 / 2022
 Author: 783706_Augusto_Guerra de Lima
*/
// dependencias
#include "io.h" // para definicoes proprias
/**
 Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // fim method00 ( )
/**
 Method01 - mostrar mensagem com texto constante.
*/
void method01 ( )
{
 IO_println ( "Valor igual a um" );
} // fim method01 ( )
/**
 Method02 - mostrar mensagem com texto constante e
 valor variavel
 @param x - valor a ser exibido
*/
void method02 ( int x )
{
 IO_println ( IO_concat ( "Valor igual a (",
 IO_concat ( IO_toString_d ( x ), ")\n" ) ) );
} // fim method02 ( )
/**
 Method03 - mostrar mensagem com texto e
 valor variavel
 @param text1 - texto a ser exibido
 @param x - valor a ser exibido
*/
void method03 ( char* text1, int x )
{
 IO_println ( IO_concat ( 
 IO_concat ( text1, " (" ),
 IO_concat ( IO_toString_d ( x ), ")\n" ) ) );
} // fim method03 ( )
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( )
{
// definir dado
 int x = 0; // definir variavel com valor inicial
// identificar
 IO_id ( "EXEMPLO0210 - Programa - v0.0" );
// ler do teclado
 x = IO_readint ( "Entrar com um inteiro [0,1,2,3]: " );
// testar valor
 switch ( x )
 {
 case 0:
 method00 ( );
 break;
 case 1:
 method01 ( );
 break;
 case 2:
 method02 ( x );
 break;
 case 3:
 method03 ( "Valor igual a tres", x );
 break;
 default: // se nao alguma das opcoes anteriores
 IO_println ( IO_concat ( "Valor diferente das opcoes [0,1,2,3] (", 
 IO_concat ( IO_toString_d ( x ), ")" ) ) );
 } // fim escolher
// encerrar
 IO_pause ( "Apertar ENTER para terminar" );
 return ( 0 );
} // fim main( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0
b.) 1
c.) 2
d.) 3
e.) 4
f.) -1
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
 0.2 01. ( OK ) teste com int
 0.3 01. ( OK ) teste com double
 0.4 01. ( OK ) teste com double 2
 0.5 01. ( OK ) teste com char
 0.6 01. ( OK ) teste com char 2
 0.7 01. ( OK ) teste logico de negacao
 0.8 01. ( OK ) switch case (char)
 0.9 01. ( OK ) switch case 2 (int)
 0.10 01. ( OK ) test void method

*/