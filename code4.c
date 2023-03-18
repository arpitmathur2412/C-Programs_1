#include<stdio.h>
int main()
{
    char s1[50],s2[50];
    int len1,len2;
    printf("enter string s1:");
    gets(s1);
    printf("enter string s2:");
    gets(s2);

    for(int i=0;i<len2;i++){
        s1[len1+i]=s2[i];
    }
    puts(s1);

    return 0;
}