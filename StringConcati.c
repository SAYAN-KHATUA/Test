#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int n1, n2;

  printf("Enter size of the first string: ");
  scanf("%d", &n1);
  char str1[n1];

  printf("Enter the first string: ");
  scanf("%s", str1);

  printf("Enter size of the second string: ");
  scanf("%d", &n2);
  char str2[n2];

  printf("Enter the second string: ");
  scanf("%s", str2);

  char name[n1 + n2 + 1];
  int p = 0, q = 0;

  for (int i = 0; i < n1 + n2 + 1; i++)
  {
    if (str1[p] != '\0')
    {
      name[i] = str1[p++];
    }
    else
    {
      name[i] = str2[q++];
      if (i == n1 + n2)
      {
        name[i] = str2[i];
      }
    }
  }

  printf("The concatenated string is: %s", name);

  return 0;
}