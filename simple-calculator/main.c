#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char ch;
  double a, b;

  while(1) {
    printf("Enter an operator (+, -, *, /), if want to exit press x: ");
    scanf("%c", &ch);

    if (ch == 'x') exit(0);

    printf("Enter two first and second operand: ");
    scanf("%lf %lf", &a, &b);

    switch(ch) {
      case '+':
        printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
        break;
      case '-':
        printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
        break;
      case '*':
        printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
        break;
      case '/':
        /** in command line, you should enter // */
        printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
        break;
      default: 
        printf("Error! operator is not correct");
    }
    printf("\n");
  }

  return 0;
}
