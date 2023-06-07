#include<stdio.h>
int product (int x,int y);
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("the product of %d and %d is %d",a,b,product(a,b));
}
int product (int x,int y)
{
    return x*y;

}