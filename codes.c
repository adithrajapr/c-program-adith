/*#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &b);

    if(op == '+')
        printf("Result = %.2f", a + b);
    else if(op == '-')
        printf("Result = %.2f", a - b);
    else if(op == '*')
        printf("Result = %.2f", a * b);
    else if(op == '/')
        printf("Result = %.2f", a / b);
    else
        printf("Invalid operator");

    return 0;
}
#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("You entered: %d", a);

    return 0;
}*/
#include<stdio.h>
int main()
{
    int a = 10;
    float b = 5.5;
    char c = 'A';
    printf("Int : %d\n", a);
    printf("Float: %f\n", b);
    printf("Char: %c\n", c);
    return 0;
}