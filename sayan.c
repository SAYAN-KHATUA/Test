#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, rem, count = 0, s = 0;
    printf("Enter the num : ");
    scanf("%d", &n);
    i = n;
    while (i > 0)
    {

        i = i / 10;
        count++;
    }
    printf("The digits of the number is =%d \n", count);

    i = n;
    while (i > 0)
    {
        rem = i % 10;
        s = s + pow(rem, count);

        i = i / 10;
        // s=s+pow(rem,count);
    }
    printf("The number is = %d\n", s);
    if (s == n)
    {
        printf("Armstrong ");
    }
    else
    {
        printf("not Armstrong ");
    }

    return 0;
}