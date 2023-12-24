#include <stdio.h>
#include <string.h>
#include "shape.h"

void game(char sortedArr[][SIZE_CHARECTERS], int option, int lenOfOption, char hint[]);

void game(char sortedArr[][SIZE_CHARECTERS], int option, int lenOfOption, char hint[]) {
  /** variable to know in what stage you are */
  int stage = 1;

  /** flags for the clue and the same letter statement */
  int hintFlag = 1;
  int outFlag = 1;
  int correctFlag = 1;

  /** array of the answers */
  char answers[SIZE_CHARECTERS];

  /** index of the letter in the array */
  int letIndex = 0;

  /** choice of the user */
  char choice = 0;
  char enter;

  /** constant chars for the arrays of the answer and the line */
  const char UNDERLINE = '_', SPACE = ' ', ASTERISK = '*';

  /** answer line array */
  char line[lenOfOption];

  /** making the answer line */
  for(int i = 0; i < lenOfOption; i++){
      if (sortedArr[option][i] != SPACE){
        line[i] = UNDERLINE;
      } else {
        line[i] = SPACE;
      }
  }

  const int ZERO = 0, ONE = 1, SIX = 6;

  while(ONE) {
    shape(stage);

    if (strcmp(line, sortedArr[option]) == ZERO){
      printf("The word is %s, good job!", sortedArr[option]);
      break;
    }

    for(int i = 0; i< lenOfOption; i++) {
      printf("%c ", line[i]);
    }

    if(hintFlag == ONE){
      printf("\ndo you want a clue? press -> *");
    }

    printf("\nThe letters that you already tried:");

    for(int k = 0; k < letIndex; k++) {
      if (k == letIndex - ONE) {
        printf(" %c", answers[k]);
      } else {
        printf(" %c,", answers[k]);
      }
    }

    printf("\nplease choose a letter:\n");

    scanf("%*[^\n]");
    scanf("%*[^\n]%*c");
    scanf("%c %c", &enter, &choice);

    if (choice == ASTERISK && hintFlag == ONE){
      printf("the clue is: ");
      for(int i = 0; i < strlen(hint); i++) {
        printf("%c ", hint[i]);
      }
      printf(".\n");
      hintFlag = 0;
    } else if (choice != ASTERISK) {
      for (int i = 0; i < letIndex; i++){
        if (choice == answers[i]) {
          outFlag = 0;
        }
      }

      if (outFlag == ONE) {
        answers[letIndex] = choice;
        letIndex++;

        for(int i = 0; i < lenOfOption; i++){
          if (sortedArr[option][i] == choice){
            line[i] = choice;
            correctFlag = 0;
          }
        }

        if (correctFlag == ONE) {
          stage++;

          if (stage == SIX) {
            shape(stage);
            printf("The word is %s, GAME OVER!", sortedArr[option]);
            break;
          }
        }
      }
      else {
        printf("You're already tried that letter.\n");
      }
    }

    outFlag = 1;
    correctFlag = 1;
  }
}
