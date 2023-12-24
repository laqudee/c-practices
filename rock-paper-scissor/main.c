/** C program for the above approach */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char, char);

/** Function to implement the game */
int game(char you, char computer)
{
  if (you == computer)
    return -1;

  if (you == 's' && computer == 'p')
    return 0;
  else if (you == 'p' && computer == 's')
    return 1;

  if (you == 's' && computer == 'z')
    return 1;
  else if (you == 'z' && computer == 's')
    return 0;

  if (you == 'p' && computer == 'z')
    return 0;
  else if (you == 'z' && computer == 'p')
    return 1;

  return -1;
}

int main(void)
{
  int n;
  char you, computer, result;

  /** Choose the random number */
  srand(time(NULL));

  n = rand() % 100;

  if (n < 33)
    computer = 's';
  else if (n > 33 && n < 66)
    computer = 'p';
  else
    computer = 'z';

  printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

  /** input from user */
  scanf("%c", &you);

  result = game(you, computer);

  if (result == -1)
    printf("\n\t\t\t\t\t\t\t\t\tGAME DRAW\n");
  else if (result == 1)
    printf("\n\t\t\t\t\t\t\t\t\tYOU WIN\n");
  else {
    printf("\n\t\t\t\t\t\t\t\t\tYOU LOSE\n");
  } 

  printf("\t\t\t\tYou choose : %c and Computer choose : %c\n",you, computer);

  return 0;
}
