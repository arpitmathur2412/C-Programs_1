#include <stdio.h>

int main()
{
    int i,age;
    
    for(i=1;i<11;i++){
        
        printf("\n%d enter the age:",i);
        scanf("%d",&age);
        
        if(age>10){
            continue;
        }
        printf("we have not come across any comtinue statements");
    }
}