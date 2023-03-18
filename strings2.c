#include<stdio.h>
int main()
{
    //char s[]={'A','R','P','I','T','\0'};//
    char s[]="ARPIT";
    char *ptr=s;
    /*while(*ptr!='\0'){             //can also be used but a bit long//
        printf("%c",*ptr);
        ptr++;*/ 

        printf("%s",ptr);//easy method//
    
    
    return 0;
}  