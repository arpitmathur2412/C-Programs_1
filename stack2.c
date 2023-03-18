#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char s[10];
    printf("enter the string:");
    gets(s);
    n=strlen(s);

    struct Stack{
        int top;
        char s[15];

    };
    return 0;
}