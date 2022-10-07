#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard()
{
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;i<3;i++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    printf("%c | %c | %c",board[0][0], board[0][1],board[0][2]);
    printf("\n---|---|---\n");
    printf("%c | %c | %c",board[1][0], board[1][1],board[1][2]);
    printf("\n---|---|---\n");
    printf("%c | %c | %c",board[2][0], board[2][1],board[2][2]);
    printf("\n---|---|---\n");
}

int checkSpaces()
{
    int freeSpaces = 9;
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;i<3;i++)
        {
           if(board[i][j] != ' ')freeSpaces--;
        }
    }
    return freeSpaces;
}

char checkWinner()
{
    for(int i = 0 ; i<3;i++)
    {
        if(board[i][0]==board[i][1]&&board[i][0]==board[i][2])
        {
            return board[i][0];
        }
    }
    for(int i = 0 ; i<3;i++)
    {
        if(board[0][i]==board[1][i]&&board[0][i]==board[2][i])
        {
            return board[0][i];
        }
    }
    for(int i = 0 ; i<3;i++)
    {
        if(board[0][0]==board[1][1]&&board[0][i]==board[2][2])
        {
            return board[0][i];
        }
    }
    for(int i = 0 ; i<3;i++)
    {
        if(board[0][2]==board[1][1]&&board[0][i]==board[2][0])
        {
            return board[0][i];
        }
    }
    return ' ';
}

void playerMove()
{
    int row,column;

do
{    
    printf("\nrow: \n");
    scanf("%d",&row);
    printf("\ncolumn\n");
    scanf("%d",&column);


    if(board[row][column]!=' ')
    {
        printf("\ncant place here\n");
    }
    else
    {
        board[row][column]= PLAYER;
        break;
    }
}while(board[row][column]!=' ');
}

void computerMove()
{
    srand(time(0));
    int x,y;
    if(checkSpaces()>0)
    {
        do
        {
            x=rand()%3;
            y=rand()%3;
        } while (board[x][y]!=' ');
        board[x][y]=COMPUTER;
        }
        else
        {
            printWinner();
        }
}

void printWinner(char winner)
{
    if(winner==PLAYER)
    {
        printf("\nyou win\n");
    }
    else if(winner==COMPUTER)
    {
        printf("\nyou lose\n");
    }
    else
    {
        printf("\ntie\n");
    }    
}

int main()
{
    char winner = ' ';
    resetBoard();
    while(winner == ' ' && checkSpaces())
    {
        printBoard();
        playerMove();
        winner = checkWinner();
        if(winner!=' '||checkSpaces()==0)
        {
            break;
        }
        computerMove();
        winner = checkWinner();
        if(winner!=' '||checkSpaces()==0)
        {
            break;
        }
    }
    printBoard();
    printWinner(winner);
    return(0);
}
