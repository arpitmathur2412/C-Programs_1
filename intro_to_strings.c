#include<stdio.h>
int main()
{
    //char s[]={'A','R','P','I','T','\0'};//
    char s[]="ARPIT";
    char *ptr=s;
    
    printf("%u\n",ptr);//address of each character of string//
    printf("%u\n",ptr+1);//in this architecture, each character of string takes 1 byte//
    printf("%u\n",ptr+2);
    printf("%u\n",ptr+3);
    printf("%u\n",ptr+4);
    printf("%c\n",*ptr);
    printf("%s",ptr);
   
    return 0;
}