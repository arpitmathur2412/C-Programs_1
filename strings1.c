#include<stdio.h>
#include<string.h>

void printString(char s[]){
    int i=0;
    while(s[i]!='\0'){
        printf("%c",s[i]);
        i++;
    }

}

void concat(char s[],char str[]){
    for(int i=0;i<=strlen(str);i++){
        s[strlen(s)+i]=str[i]; 
    }

}


int main()
{
    char s[40],str[40];
    printf("enter the string s:");
    scanf("%s",s);

     printf("enter the string str:");
    scanf("%s",str);

    printString(s);
    printString(str);

    concat(s,str);
    printf("%s",s);


    return 0;
}