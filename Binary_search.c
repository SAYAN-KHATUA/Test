#include <stdio.h>
void main()
{
    int A[25], n, i, x, beg, end, mid, loc;
    printf("How many num want to input : ");
    scanf("%d", &n);
    printf("Enter %d nums : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Display initial array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Which num want to search : ");
    scanf("%d", &x);
    beg = 0, end = n-1;
    mid = (beg + end) / 2;
    while (beg <= end && A[mid] != x)
    {
        if (x < A[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
    }
    if (A[mid] == x)
    {
        loc = mid;
        printf("%d found at position %d \n", x, loc+1);
    }
    else
    {
        printf("%d not found in the array \n");
    }
}