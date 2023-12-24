/**
 * @file main.c
 * @author laqudee
 * @brief Hangman game
 * @version 0.0.1
 * @date 2023-12-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <string.h>
#include "util.h"
#include "game.h"

int main(void)
{
  char mainStr[SIZE_NAME * SIZE_CHARECTERS];
  char sortedArr[SIZE_NAME][SIZE_CHARECTERS];
  char hint[SIZE_CHARECTERS] = {0};
  
  /** asking the user for words */
  printf("Enter your worlds: \n");
  scanf("%[^\n]", mainStr);

  /** sending the separated of words be separated and getting the number of words */
  int wordNum = strList(sortedArr, mainStr, hint, ",");

  /** sending the separated array to b3e sorted */
  sort(sortedArr, wordNum);

  /** printing the sorted array as a list */
  const int ONE = 1;
  printf("choose an option: \n");
  for(int i = 0; i < wordNum; i++) {
    printf("%d: %s\n", (i + ONE), sortedArr[i]);
  }

  /** variable to store the option */
  int option;
  scanf("%d", &option);
  option -= ONE;

  int lenOfOption = strlen(sortedArr[option]);

  game(sortedArr, option, lenOfOption, hint);

  return 0;
}


