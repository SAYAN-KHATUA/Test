
// #include <stdio.h>

// int main() {
//     int a[50], n, k, item, loc, choice,j;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     printf("Enter the array elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     while (loc==0 && k<=n)
//     {
//        item=a[k];
//        loc=k;
//        k=k++;
//        if(loc=0)
//        {
//         printf("item is not found in the array");

//        }
//        else{
//         printf("loc is the location of item");
//        }

//     }
//     return 0;
// }   
#include <stdio.h>

int main() {
    int a[50], n, k=1, item, loc = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the item to search for: ");
    scanf("%d", &item);

    // Search for the item in the array
    // for (k = 1; k < n; k++) 
          while(k<n)
    {
        if (a[k] == item) {
            loc = k; // Store the location of the item (0-based index)
            break;
        }
        k++;
    }

    if (loc == 0) {
        printf("Item is not found in the array.\n");
    } else {
        printf("Item found at location (0-based index): %d\n", loc);
    }

    return 0;
}
