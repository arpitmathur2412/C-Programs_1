#include <stdio.h>
#define n 5

int main()
{
    int a[n],i=0,least=0,sum=0;
    
    for(i=0;i<n;i=i+1){
        printf("enter %d element:",i);
        scanf("%d",&a[i]);
      }
    printf("%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4]);
    
    sum=sum+a[0]+a[1]+a[2]+a[3]+a[4];
    printf("\nthe sum is %d",sum);
}
