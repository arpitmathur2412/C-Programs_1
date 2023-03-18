#include<stdio.h>

int main()
{
int a=76;
int *prt= &a; 
int *prt2=NULL;
printf("the address of pointer to a is %x", &prt);
printf("\nthe address of a is %x",&a);
printf("\nthe address of a is %x",prt);
printf("\nthe value of a is %d",*prt);
printf("\nthe value of a is %d",a);
printf("\nthe address of some garbage is %u",prt2);

}

//prt prints the address of the variable//
//*prt prints the value at the address of the variable//