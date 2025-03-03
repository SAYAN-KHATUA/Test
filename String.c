#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*In c sting is a character array */ 
int main()
{
    // char arr[]={'S','A','Y','A','N','\0'};
    // printf("%s",arr);
    char arr[50];   
    printf("Enter the name:\n");
    // scanf("%s",arr);
    gets(arr);
    // printf("%s",arr);
    puts(arr);
        return 0;
}     