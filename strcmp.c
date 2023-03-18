#include<stdio.h>
#include<string.h>
int main()
{
    char st1[]="Arpit";             //negative value as ASCII  value of A is less than M//
    char st2[]="Mathur";
    int val=strcmp(st1,st2);
    printf("the val is %d",val);
    return 0;

    char st1[]="Mathur";             //positive value as ASCII value of M is more than A//
    char st2[]="Arpit";
    int val=strcmp(st1,st2);
    printf("the val is %d",val);
    return 0;

    char st1[]="Arpit";                // 0 as both strings are same//
    char st2[]="Arpit";
    int val=strcmp(st1,st2);
    printf("the val is %d",val);
    return 0;
}
