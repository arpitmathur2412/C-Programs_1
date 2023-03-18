#include<stdio.h>// take two strings of equal strings and merge them
#include<string.h>
 


int main()
{
    char s1[5];
    char s2[5];
    char s3[10];

    printf("enter 1st string:");
    for(int i=0;i<5;i++){
        scanf("%c",&s1[i]);
        s3[i]=s1[i];
    }

    printf("enter 2nd string:");
    int k=5;
    for(int j=0;j<5;j++){
        scanf("%c",&s2[j]);
        s3[k]=s2[j];
        k++;
    }

    for(int i=0;i<10;i++){
        printf("%c",s3[i]);
    }
    

}