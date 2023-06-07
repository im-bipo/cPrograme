#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter any numner up to where you want to check: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if (n%i == 0)
        c++;
    }
    if (c==0)
    printf("the number is prime\n");
    else
    printf("the number is composite\n");
}