#include<stdio.h>
int main()
{
    int n,a=0,c=1;
    printf("Enter number: ");
    scanf("%d",&n);
    while(c<=n)
    {
        a+=c;
        c++;
    }
    printf("\nThe sum is %d and average of number is %d ",a,a/n);

}