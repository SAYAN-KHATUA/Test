#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[50];
    int i,len,plandrome;
    printf("Enter the string  : \n");
    scanf("%s",a);
    len = strlen(a);
    plandrome = 1;
    for ( i = 0; i < (len/2); i++)
    {
       if(a[i]!=a[len - 1 - i])
       {
       plandrome = 0;
       break;
       }
    }
    if(plandrome)
    {
        printf("The word is palindrome ");
    }
    else
    {
        printf("The word is not palindrome ");
    }


    
    return 0;
}