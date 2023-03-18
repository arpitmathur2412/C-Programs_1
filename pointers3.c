#include<stdio.h>
int main()
{
    int a=30;
    int *ptr = &a;
    printf("%d",ptr);
    printf("\n%d",ptr=ptr+1);
    printf("\n%d",ptr=ptr+1);
    return 0;
}