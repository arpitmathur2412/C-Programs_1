#include<stdio.h>
int main()
{
    int a=34;
    int* ptra = &a;
    printf("%u\n%u",ptra,(ptra+1));
    return 0;
}