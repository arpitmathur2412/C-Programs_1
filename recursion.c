#include<stdio.h>

int factorial(int a)
{
    if(a==0||a==1){
        return 1;
    }
    else{
        return (a*factorial(a-1));
    }

}

int main()
{
    int a; 
printf("enter the number:");
scanf("%d",&a);

printf("the factorial of %d is %d",a,factorial(a));



}