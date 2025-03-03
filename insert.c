#include <stdio.h>
int main()
{
    int n, j = 0, k, i, arr[50];
    printf("enetr the number");
    scanf("%d", &n);
    while (j < n)
    {
        scanf("%d", &arr[j]);
        j++;
    }
    printf("enetr the arrray pos");
    scanf("%d", &k);
    if (k < 0 || k > n)
    {
        printf("invalid location");
    }
    else
    {
        printf("enyer the array insert belement");
        scanf("%d", &i);
        j = n;
        while (j >= k)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[k] = i;
        j = 0;
        while (j <= n)
        {
            printf("%d", arr[j]);
            j++;
        }
    }
    return 0;
}