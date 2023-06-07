#include<stdio.h>
int main()
{
    int i;
    struct course{
        char name[100];
        int code, credit_hour;
    };
    struct course s[5];
    for (i=0;i<5;i++)
    {
        printf("Enter name of course: ");
        scanf("%s",s[i].name);
        printf("Enter code of %s: ",s[i].name);
        scanf("%d",&s[i].code);
        printf("Enter credit hour for %s: ", s[i].name);
        scanf("%d",&s[i].credit_hour);
        printf("------------------------------\n");
    }

    // to print the input data
    for (i=0;i<5;i++)
    {
        if(s[i].credit_hour>3)
        {
        printf("Course %d name: %s",i+1,s[i].name);
        printf("Course %d code: %d",i+1,s[i].code);
        printf("Course %d credit hour: %d",i+1,s[i].credit_hour);
        printf("------------------------------\n");
        }
    }
}