/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    float C,F;

    printf("enter the temperature in C:");
    scanf("%f",&C);

    F=1.8*C+32;

    printf("the temperature in F: %.2f",F);// %.2f is for 2 decimals//
    return 0;
}*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    loop:
    printf("\nenter the number:");
    scanf("%d",&i);

    if(i>0){
        printf("the number is positive");
    }
    if(i<0){
        printf("the number is negative");
    }
    if(i=0){
    printf("the number is zero");}
    
    goto loop;
}

