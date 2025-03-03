#include<stdio.h>
int main()
{
    int n, i, beg, end, mid, item, flag = 0, arr[50];
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("\nEnter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the item to search: ");
    scanf("%d", &item);
    beg = 0;
    end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (arr[mid] == item)
        {
            printf("\nElement found at position %d\n", mid);
            flag = 1;
            break;
        }
        if (arr[mid] > item)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
    if (!flag)
    {
        printf("No such element is found\n");
    }
    return 0;
}
