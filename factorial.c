#include <stdio.h>

int factorial(int x)
{
    if (x == 0 )
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}

int main()
{
    int a;
    printf("Enter a number a to calculate the factorial : ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("factorial of the number is : %d", factorial(a));
    }
    else
    {
        printf("Enter a positive number ");
    }

    return 0;
}
