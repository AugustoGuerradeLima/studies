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

void playerMove()
{
    
}

int main()
{
    char winner = ' ';
    resetBoard();
    while(winner == ' ' && checkSpaces())
    {
        printBoard();
        playerMove();
    }
    return(0);
}