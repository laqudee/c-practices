// C program to print the month by month  
// calendar for the given year  
  
#include <stdio.h> 
#include "util.h" 
  
void printCalendar(int year)  
{  
    printf("     Calendar - %d\n\n", year);  
    int days;  
  
    // Index of the day from 0 to 6  
    int current = dayNumber(1, 1, year);  
  
    // i for Iterate through months  
    // j for Iterate through days  
    // of the month - i  
    for (int i = 0; i < 12; i++) {  
        days = numberOfDays(i, year);  
  
        // Print the current month name  
        printf("\n ------------%s-------------\n",  
            getMonthName(i));  
  
        // Print the columns  
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");  
  
        // Print appropriate spaces  
        int k;  
        for (k = 0; k < current; k++)  
            printf("     ");  
  
        for (int j = 1; j <= days; j++) {  
            printf("%5d", j);  
  
            if (++k > 6) {  
                k = 0;  
                printf("\n");  
            }  
        }  
  
        if (k)  
            printf("\n");  
  
        current = k;  
    }  
  
    return;  
}  
  
// Driver Code  
int main()  
{  
    int year;

    printf("Enter year: ");
    scanf("%d", &year);
  
    // Function Call  
    printCalendar(year);  
    return 0;  
}  
