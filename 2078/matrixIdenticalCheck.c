#include<stdio.h>
#include<matrixFunction.c>
int i,j;
void scanm(int mat[10][10],int r, int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\n%d%d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
}
int main()
{
    int a[10][10],b[10][10],co=0,r,c,i,j;
    printf("Enter Number of row and column: ");
    scanf("%d %d",&r,&c);
    printf("Enter matrix A: \n");
    scanm(a,r,c);
    printf("Enter matrix B: \n");
    scanm(b,r,c);
    // to check identity
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                co=1;
            }
        }
    }
    if(co){
        printf("The matrix is not identical");
    }
    else if (co==0){
        printf("The matrix is identical");
    }
    else{
        printf("unknown error occur %d",co);
    }
}