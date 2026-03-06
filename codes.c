/*#include <stdio.h>
//basic
int main() {
  printf("Hello World!");
  return 0;
}
//arithmetic operations
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
    basic
#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("You entered: %d", a);

    return 0;
}

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
#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);

    return 0;
}
    //if-else
#include <stdio.h>

int main()
{
    int num;

    printf("num: ");
    scanf("%d", &num);

    if(num > 0)
        printf("+ve num:");

    return 0;
}
#include <stdio.h>

int main()
{
    int num;

    printf("num: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
    //for loop
#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int i = 1;

    while(i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};
    int i;

    for(i=0;i<5;i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a[2][2] = {{1,2},{3,4}};
    int i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

void greet()
{
    printf("Hello Student");
}

int main()
{
    greet();
    return 0;
}
#include <stdio.h>

void add(int a, int b)
{
    printf("Sum = %d", a + b);
}

int main()
{
    add(5,3);
    return 0;
}
#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", p);
    printf("Value using pointer = %d", *p);

    return 0;
}
#include <stdio.h>

void changeValue(int *x)
{
    *x = 20;
}

int main()
{
    int a = 10;

    changeValue(&a);

    printf("Value of a = %d", a);

    return 0;
}*/
#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p1, *p2;

    p1 = &a;
    p2 = &b;

    printf("Sum = %d", *p1 + *p2);

    return 0;
}