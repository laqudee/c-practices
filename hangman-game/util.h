#include <stdio.h>
#include <string.h>

#define SIZE_NAME 16
#define SIZE_CHARECTERS 21

void sort (char sortedArr[][SIZE_CHARECTERS], int wordNum);

/**
 * @brief sort
 * 
 */
void sort(char sortedArr[][SIZE_CHARECTERS], int wordNum)
{
  char temp[SIZE_CHARECTERS];
  const int ONE = 1;

  /** sorting the names by alphabetical order, comparing first name  */
  for (int k = 0; k< wordNum - ONE; k++){
    // comparing second name
    for (int j= k + ONE; j < wordNum; j++) {
      if (strcmp(sortedArr[k], sortedArr[j]) > 0) {
        // replacing the order
        strcpy(temp, sortedArr[k]);
        strcpy(sortedArr[k], sortedArr[j]);
        strcpy(sortedArr[j], temp);
      }
    }
  }
}

/**
 * @brief strList
 * 
 */
int strList(char sortedArr[][SIZE_CHARECTERS], char mainStr[], char hint[], char sep[]);

int strList(char sortedArr[][SIZE_CHARECTERS], char mainStr[], char hint[], char sep[]) {
  const char start = ':';

  // saving the hint
  for(int i=0; mainStr[i] != start; i++) {
    hint[i] = mainStr[i];
  }

  // making a pointer to start from the first word
  char *token;
  token = strchr(mainStr, start);

  token += sizeof(char);
  token = strtok(token, sep);

  // amount of word to new array
  int wordNum = 0;

  // coping each word to new array
  while (token != NULL) {
    strcpy(sortedArr[wordNum], token);
    token = strtok(NULL, sep);
    wordNum++;
  }

  return wordNum;
}


