#include <stdio.h>

int factorial(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int power(int x, int y)
{
    int result = 1, i;
    for (i = 1; i <= y; i++)
    {
        result = result * x;
    }
    return result;
}

int main()
{
    int opt;
    float a, b;
    int x, y, n;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &opt);

    switch (opt)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not allowed");
            break;

        case 5:
            printf("Enter value of x and y: ");
            scanf("%d %d", &x, &y);
            printf("Result = %d", power(x, y));
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);
            printf("Result = %d", factorial(n));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
