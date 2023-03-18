#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    for(int i=0;i<=(num/2);i++){
        if(i*(i+1)==num){
            printf("it is a prolic number");
            break;
            
            }
        
        }
  
    
    return 0;
}