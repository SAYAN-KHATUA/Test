#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 5;
    int *p = &a;
    
    printf("%d ",&*p);
    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int numbers[5] = {1, 2, 3, 4, 5};
//    int *ptr = numbers;
//     printf("%d\n", *ptr); // Outputs 1
//     ptr++;
//     printf("%d\n", *ptr); // Outputs 2
//     return 0;
// }
