#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,t=1;
    printf("enter the number:");
    scanf("%d",&i);

      for(j=1;j<11;j++){

        t=i*j;
        printf("%d*%d=%d\n",i,j,t);
        
    }
    return 0;
}

