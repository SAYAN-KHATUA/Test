

#include<stdio.h>

   
int main()
{
    int  n,m,a[m][n],i,j,s=0;
    printf("Enter the size of matrix : \n");
    scanf("%d%d",&m,&n);
    if(m==n)
    {
         printf("Enter the matrix element : \n ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    s = s + a[i][j];
                }
            }
        }
        printf("%d",s);
        

    }
    else
    {
        printf("addition of the diagonal matrix is not possible");
    }
       return 0;
}