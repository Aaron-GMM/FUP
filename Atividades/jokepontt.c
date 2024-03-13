#include <stdio.h>

int main()
{

    char player1;
    char player2;

    scanf(" %c", &player1);
    scanf(" %c", &player2);

    if (
        (player1 == 'R' && player2 == 'S') || 
        (player1 == 'S' && player2 == 'P') || 
        (player1 == 'P' && player2 == 'R'))
    {
        printf("jog1");
    }
    else if (player1 == player2)
    {
        printf("empate");
    }
    else
    {
        printf("jog2");
    }
}