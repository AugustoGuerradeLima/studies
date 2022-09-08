/*
 Guia01E1 - v0.0. - 27/ 03 / 2022
 Author: 783706 Augusto Guerra de Lima
 Para compilar em uma janela de comandos (terminal):
 
 No Linux : g++ -o Guia01E1 ./Guia01E1.cpp
 No Windows: g++ -o Guia01E1.exe Guia01E1.cpp
 Para executar em uma janela de comandos (terminal):
 No Linux : ./Guia01E1
 No Windows: Guia01E1
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
//muros horizontais do mapa
world->set ( 3, 3, HWALL );
world->set ( 4, 3, HWALL );
world->set ( 5, 3, HWALL );
world->set ( 3, 6, HWALL );
world->set ( 4, 6, HWALL );
world->set ( 5, 6, HWALL );

//muros verticais do mapa
world->set ( 2, 4, VWALL );
world->set ( 2, 5, VWALL );
world->set ( 2, 6, VWALL );
world->set ( 5, 4, VWALL );
world->set ( 5, 5, VWALL );

//colocando marcadores
world->set(2, 4, BEEPER);
world->set(3, 7, BEEPER);
world->set(3, 7, BEEPER);
world->set(6, 4, BEEPER);
world->set(6, 4, BEEPER);
world->set(6, 4, BEEPER);


// salvar a configuracao atual do mundo
 world->save( fileName );
} // decorateWorld ( )
/**
 Classe para definir robo particular (MyRobot),
 a partir do modelo generico (Robot)
 Nota: Todas as definicoes irao valer para qualquer outro robo
 criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
 public:
 /**
 turnRight - Procedimento (acao) para virar 'a direita.
 */
 void turnRight ( )
 {
 // testar se o robo esta' ativo
 if ( checkStatus ( ) )
 {
 // o agente que executar esse metodo
 // devera' virar tres vezes 'a esquerda
 turnLeft ( );
 turnLeft ( );
 turnLeft ( );
 } // end if
 } // end turnRight ( )
 //volta para trás
 void turnBack( )
 {
turnLeft ( );
 turnLeft ( );

 }
 
 /**
 moveN - Metodo para mover certa quantidade de passos.
 @param steps - passos a serem dados.
 */
 void moveN( int steps )
 {
 // definir dado local
 int step = 0;
 // repetir contando e testando ate' atingir a quantidade de passos
 for ( step = 1; step <= steps; step = step + 1 ) // outra forma de repetir
 {
 // dar um passo por vez
 move( );
 } // end if
 } // end moveN( )
 /**
 doPartialTask - Metodo para descrever parte de uma tarefa.
 */
 void doPartialTask( )
 {
 // especificar acoes dessa parte da tarefa
 moveN( 2 );
 turnLeft( );
 } // end doPartialTask( )
 /**
 doTask - Relacao de acoes para o robo executar.
 */

//enquanto houverem Beepers com o robo, ele os posiciona
void putBeepers( )
{
    while( nbeepers( ) > 0)
    {
        putBeeper( );
    }

}

void pickBeepers( )
{

    while(nextToABeeper( ) )
    {
        pickBeeper( );

    }


}

 void doTask( )
 {
     turnLeft( );
     moveN(3);
     turnRight( );
     moveN(1);

    pickBeepers( );

    turnLeft( );
     moveN(3);
     turnRight( );
     moveN(1);

    pickBeepers( );

    moveN(3);
    turnRight( );
    moveN(3);
    
    pickBeepers( );

    turnBack( );
    moveN(2);
    turnLeft( );

    moveN(2);
    turnLeft( );

    moveN(2);
     
    //coloca todos os Beepers até não haver mais
    putBeepers( );

    turnLeft( );


 turnOff ( );
 } // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
 Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
 world->create ( "" ); // criar o mundo
 decorateWorld ( "Guia01E1.txt" );
 world->show ( );
// preparar o ambiente para uso
 world->reset ( ); // limpar configuracoes
 world->read ( "Guia01E1.txt" );// ler configuracao atual para o ambiente
 world->show ( ); // mostrar a configuracao atual
 set_Speed ( 3 ); // definir velocidade padrao
// criar robo
 MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
 robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
 robot->doTask ( );
// encerrar operacoes no ambiente
 world->close ( );
// encerrar programa
 getchar ( );
 return ( 0 );
} // end main ( )
// ---------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 0.1 ( OK ) teste inicial
 0.2 0.1 ( OK ) teste da tarefa
 0.3 0.1 ( OK ) teste da tarefa parcial
 0.4 0.1 ( OK ) teste do apanhar marcador
 0.5 0.1 ( OK ) teste do colocar marcador
0.6 01. ( OK ) teste da repeticao do movimento
0.7 01. ( OK ) teste com marcador na posicao (4,4)
02. ( OK ) teste sem marcador na posicao (4,4)
 0.8 01. ( OK ) teste com a quantidade de marcadores
 0.9 01. ( OK ) teste com outra forma de repeticao
 1.0 01. ( OK ) teste com outra forma de repeticao
 01. ( OK ) teste com outra forma de alternativa
*/