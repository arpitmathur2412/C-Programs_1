#include<stdio.h>
int main(int argc, char const *argv[])
{
   char c='A';
    for(int i=1;i<6;i++){

        for(int j=1;j<=i;j++){

            printf("%c",c);
        }
       printf("\n");
        c++;
    } 
        
    return 0;
}
