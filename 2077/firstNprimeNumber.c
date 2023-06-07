#include<stdio.h>
int main()
{
    int n,i,j,c;
    printf("\nenter the number: ");
    scanf("%d",&n);
    printf("\nThe prime number are: ");
    for (i=1;i<=n;i++)
    {

        c=0;
        for (j=1; j<=i;j++)
        {
            if ((i%j)==0)
            c++;
        }
            if(c==2)
            printf("%d\t",i);

    }
}