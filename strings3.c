#include<stdio.h>
int main()
{
    char s[50];
    char *ptr=s;

    printf("enter your name:");
    scanf("%s",s);//& will not come as it s is already the address because it is array//
    printf("the string is %s",s);
    return 0;
}