#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c;
    printf("enter number of row and column: ");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("\nA%d%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    //this is to print the enterd matrix
    printf("Your matrix is: \n");
     for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("\t%d ",a[i][j]);
        }
        printf("\n");
    }

    //this is to print the transpose of given matrics

     printf("Your traspose is: \n");
    for(j=1;j<=c;j++)
    {
         for(i=1;i<=r;i++)
        {
            printf("\t%d ",a[i][j]);
        }
        printf("\n");
    }
}