#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
char sq[] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkWin();
void drawBoard();

int main()
{
    system("color 4a"); // this is used to draw the colour of the board backgroud and text. integer part for background and alphabet for the font
    int player = 1, i, choice;
    char mark; // this will be either O or X
    do
    {
        drawBoard();
        player = (player % 2) ? 1 : 2; //if player % 2 evaluatess to be true then player will be 1 or else 2
        printf("Player %d, enter your choice:  ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O'; // if the player is 1 then mark will be X or else O

        //filling of the choices
        //if the choice entered by the user is 1 and at the same time sq[1] is not flled i.e. containing 1 inside the mark with X for player 1 or O for player 2 and similar to all the remaining
        if (choice == 1 && sq[1] == '1')
        {
            sq[1] = mark;
        }
        else if (choice == 2 && sq[2] == '2')
        {
            sq[2] = mark;
        }
        else if (choice == 3 && sq[3] == '3')
        {
            sq[3] = mark;
        }
        else if (choice == 4 && sq[4] == '4')
        {
            sq[4] = mark;
        }
        else if (choice == 5 && sq[5] == '5')
        {
            sq[5] = mark;
        }
        else if (choice == 6 && sq[6] == '6')
        {
            sq[6] = mark;
        }
        else if (choice == 7 && sq[7] == '7')
        {
            sq[7] = mark;
        }
        else if (choice == 8 && sq[8] == '8')
        {
            sq[8] = mark;
        }
        else if (choice == 9 && sq[9] == '9')
        {
            sq[9] = mark;
        }

        //if the input is other than 1 to 9 then that wil be invalid input
        else
        {
            printf("Invalid option Input...!");
            //this will take input from the same user if input was invalid and consume that previous invalid input
            player--;
            getch();
        }
        i = checkWin();
        player++;

    } while (i == -1); // loop will run till all the conatainers not filled with X or O or any player has nnot won the match

    if (i == 1)
    {
        printf("==> Player %d won the match...boom!!", --player);
    }
    else
    {
        printf("Game is draw.");
    }
    getch();
    return 0;
}

//checking the winning condition of the player
int checkWin()
{
    if (sq[1] == sq[2] && sq[2] == sq[3])
    {
        return 1;
    }
    else if (sq[4] == sq[5] && sq[5] == sq[6])
    {
        return 1;
    }
    else if (sq[7] == sq[8] && sq[8] == sq[9])
    {
        return 1;
    }
    else if (sq[1] == sq[4] && sq[4] == sq[7])
    {
        return 1;
    }
    else if (sq[2] == sq[5] && sq[5] == sq[8])
    {
        return 1;
    }
    else if (sq[3] == sq[6] && sq[6] == sq[9])
    {
        return 1;
    }
    else if (sq[1] == sq[5] && sq[5] == sq[9])
    {
        return 1;
    }
    else if (sq[3] == sq[5] && sq[5] == sq[7])
    {
        return 1;
    }
    else if (sq[1] != '1' && sq[2] != '2' && sq[3] != '3' && sq[4] != '4' && sq[5] != '5' && sq[6] != '6' && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

//function to draw the board
void drawBoard()
{
    system("cls"); // this clears the screen and then draw the board for the game. A function in stdlib.h library
    printf("\t\t  WELCOME \n \t\tTic Tac Toe ");
    printf("\n\n\tPlayer 1(X) and Player 2(O)\n\n ");
    printf("%c  | %c   |  %c \n", sq[1], sq[2], sq[3]);
    printf("____|_____|____ \n");
    printf("    |     |     \n");
    printf(" %c  | %c   |  %c \n", sq[4], sq[5], sq[6]);
    printf("____|_____|____ \n");
    printf("    |     |     \n");
    printf(" %c  | %c   |  %c \n", sq[7], sq[8], sq[9]);
}