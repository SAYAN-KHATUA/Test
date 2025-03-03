#include <stdio.h>

int power(int base, int exponent) {
    int ans = 1;

    for (int i = 0; i < exponent; i++)
        ans *= base;

    return ans;
}

int main()
{
    int n, i, rem, count = 0, s = 0;
    printf("Enter the num : ");
    scanf("%d", &n);
    i = n;
    while (i != 0)
    {
        i = i / 10;
        count++;
    }

    printf("The digits of the number is = %d \n", count);
    i = n;
    while (i != 0)
    {
        rem = i % 10;
        s += power(rem, count);
        i /= 10;
    }

    printf("The number is = %d\n", s);
    if (s == n)
        printf("Armstrong \n");
    else
        printf("not Armstrong \n");

    return 0;
}