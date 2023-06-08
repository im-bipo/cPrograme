#include<stdio.h>
int main()
{
    int n,c,i;
    printf("\nEnter any number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            printf("%d/%d = %d \t",n,i,n/i);
            c++;
        }
    }
        if(c==0)
        printf("%d is prime number.\n\n",n);
        else
        printf("\nIt is divided %d times except one and itself. Therefore, %d is composite number.\n\n",c,n);
}