#include<stdio.h>
#include<string.h>
// void delete(char *s[],char x){
//     for(int i=0;i<strlen(s);i++){
//         if(s[i]!='x'){
//             return x;
//         }
//     }

// }
int main()
{
    int n,j=0;
    char s[50];
    printf("enter the string:");
    gets(s);
    
    printf("the final string:");
    
    for(int i=0;i<strlen(s);i++){
        if(s[i]!='p'){
            printf("%c",s[i]);
        }
    }

    return 0;
}