#include <stdio.h>


void insertion(int a[], int n)
{
    int j = 1;
    while(j < n)
    {
        int key = a[j];
        int i = j - 1;
        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key;
        j++;
    }
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {5, 7, 3, 2, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion(arr, n); 
    return 0;
}
