
#include <stdio.h>
#include <string.h>

#define SIZE_NAME 16
#define SIZE_CHARECTERS 21

void shape(int stage);

/******************
* Function Name:shape
* Input:number of stage
* Output:Void
* Function Operation: printing the shape
******************/
void shape(int stage){

    /**constant integer for the shape stages' lines */
    const int ZERO = 0, ONE = 1, TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6;

    /** stage 1 print */
    if(stage == ONE){
        printf(" _________________\n");
        for(int t = 0; t < FIVE; t++){
            printf("|                |\n");
        }
        printf("|________________|\n");
    }

    /** stage 2 print */
    else if(stage == TWO){
        printf(" _________________\n");
        for(int t = 0; t < FIVE; t++){
            if(t == ONE || t == TWO){
                printf("|  **            |\n");
            }
            else{
                printf("|                |\n");
            }
        }
        printf("|________________|\n");
    }

    /** stage 3 print */
    else if(stage == THREE){
        printf(" _________________\n");
        for(int t = 0; t < FIVE; t++){
            if(t == ONE || t == TWO){
                printf("|  **        **  |\n");
            }
            else{
                printf("|                |\n");
            }
        }
        printf("|________________|\n");
    }

    /** stage 4 print */
    else if(stage == FOUR){
        printf(" _________________\n");
        for(int t = 0; t < FIVE; t++){
            if(t == ZERO){
                printf("|  --            |\n");
            }
            else if(t == ONE || t == TWO){
                printf("|  **        **  |\n");
            }
            else{
                printf("|                |\n");
            }
        }
        printf("|________________|\n");
    }

    /** stage 5 print */
    else if(stage == FIVE){
        printf(" _________________\n");
        for(int t = 0; t < FIVE; t++){
            if(t == ZERO){
                printf("|  --        --  |\n");
            }
            else if(t == ONE || t == TWO){
                printf("|  **        **  |\n");
            }
            else{
                printf("|                |\n");
            }
        }
        printf("|________________|\n");
    }

    /** stage 6 print */
    else if(stage == SIX){
        printf(" _________________\n");
        for(int t = 0; t < FIVE; t++){
            if(t == ZERO){
                printf("|  --        --  |\n");
            }
            else if(t == ONE || t == TWO){
                printf("|  **        **  |\n");
            }
            else if(t == FOUR){
                printf("| \\/\\/\\/\\/\\/\\/\\  |\n");
            }
            else{
                printf("|                |\n");
            }
        }
        printf("|________________|\n");
    }

}
