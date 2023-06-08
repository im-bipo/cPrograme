void scanm(int mat[100][100],int r, int c)
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