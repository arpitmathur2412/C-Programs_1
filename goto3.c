#include<stdio.h>
int main(int argc, char const *argv[])
{   int num;
    for (int i = 0; i<8; i++)
    {
        for (int j = 0; i < 8; i++)
        {
            printf("enter the number. exit if 0");
            scanf("%d",&num);
            if(num==0){
                goto end;//we can exit all the loops directly//
            }

        }
        
    }end:
    
    return 0;
}
