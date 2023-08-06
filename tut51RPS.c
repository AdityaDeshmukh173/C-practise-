#include <stdio.h>
#include<stdlib.h>
#include<time.h>

/*
Create Rock paper scissors game 
Player 1: User 
Player 2 : Comp
3 rounds 
Rock vs papper - Pappe wins 
Rock vs SCissors - Rock wins
Scissors vs Paper - Scissors wins 

Write a C program to allow user to play this game three times with computer. Log the scores of the usre and the comp. Display the name of the winner at the end. 
Note: You have to display name of the player during the game. Take users name as an input from the user.
*/

int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside the stdlib.h
    return rand()%n ;
}
int main()
{
    printf("The random number between 0 to 5 is %d \n",generateRandomNumber(5));
    
    return 0 ;
}