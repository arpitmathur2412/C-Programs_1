#include<stdio.h>
#include<string.h>

void traverse(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

void concat(char s1[],int n1,char s2[],int n2){
    n1=strlen(s1);
    n2=strlen(s2);
    char s3[n1+n2];
    for(int i=0;i<n1;i++){
        s3[i]=s1[i];
    }
    for(int j=n1;j<n2;j++)
    {
        int k=0;
        s3[j]=s2[k];
        k++;
    }
    traverse(s3,n1+n2);
}
int main()
{
    char s1[10];
    char s2[10];
    printf("enter s1:");
    scanf("%s",s1);
    printf("enter s2:");
    scanf("%s",s2);

    concat(s1,strlen(s1),s2,strlen(s2));


}   