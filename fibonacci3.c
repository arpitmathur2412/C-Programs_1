#include<stdio.h>  // 0,1,1,2,3,5,8,13...

int fib(int pre,int n){
    if(pre==n+1){
        return 0;
    }
    printf("%d ",(pre)+(++pre));
    fib(pre,n);
}

int main()
{
    fib(1,5);
    return 0;
}