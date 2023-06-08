#include<stdio.h>
void scanm(int mat[10][10],int r, int c)
{
    int i,j;
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\n%d%d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
}
void printm(int matp[10][10], int r, int c)
{
    int i,j;
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",matp[i][j]);
        }
        printf("\n");
    }
}
void addm(int math1[10][10], int math2[10][10], int result[10][10], int r , int c)
{
    int i,j;
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            result[i][j]=math1[i][j]+math2[i][j];
        }
    }
}
void main()
{
    int a[10][10], b[10][10],result[10][10],z;
    printf("enter number of rows or column");
    scanf("%d",&z);
    int r=z,c=z;
    printf("Matrix A: \n");
    scanm(a,r,c);
    printf("Matrix B: \n");
    scanm(b,r,c);

    printf("Matrix A is : \n");
    printm(a,r,c);

    printf("Matrix B is: \n");
    printm(b,r,c);

    printf("The sum is: \n");
    addm(a,b,result,r,c);
    printm(result,r,c);
}