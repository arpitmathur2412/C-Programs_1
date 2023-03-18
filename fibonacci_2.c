#include<stdio.h>//by recursion//
//fibonacci series: 0,1,1,2,3,5,8,13....
int fib(int n)
{ 
    if(n==1||n==2){
        return (n-1);
    }
    else{
        return fib(n-1)+ fib(n-2);
    }
}
int main()
{
int n;
printf("enter the index value to get the fibonacci value:");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    printf("%d ",fib(i));
    }
}
