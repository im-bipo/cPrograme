#include<stdio.h>
void printm(int matp[3][3], int r, int c)
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
void addm(int math1[3][3], int math2[3][3], int result[3][3], int r , int c)
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
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, b[3][3] ={{10,11,12},{13,14,15},{16,17,18}},result[3][3],z=3;
    int r=z,c=z;

    printf("Matrix A is : \n");
    printm(a,r,c);

    printf("Matrix B is: \n");
    printm(b,r,c);

    printf("The sum is: \n");
    addm(a,b,result,r,c);
    printm(result,r,c);
}