#include <stdio.h>

 int main()//finding factorial of number by loop//
{ int i,f=1;

printf("enter the number for finding factorial:");
scanf("%d",&i);

do
{
      f=f*i;
      i=i-1;
}while(i>0);

    printf("the factorial is %d",f);
    return 0;
}