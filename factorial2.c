#include<stdio.h>

int main(int argc, char const *argv[])
{  int i,n,f=1;
  printf("factorial of:");
  scanf("%d",&i);
 
 for(n=1;n<i+1;n++)
 {
   f=f*n;

 }
 printf("the factorial of %d is %d",i,f);
    
}
