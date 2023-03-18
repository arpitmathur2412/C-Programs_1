#include<stdio.h>
#include<string.h>
void palindrome(char s[]){
    
}

int main()
{
    char s[50];
    int n,c,d;
    printf("enter the string:");
    gets(s);
    n=strlen(s);
    for(int i=0;i<=n/2;i++){
        if(s[i]!=s[n-i-1]){
            c++;
        }

    }
    if(c>0){
        printf("it is not a palindrome");

    }
    else printf("it is a palindrome");



    return 0;
}