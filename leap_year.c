#include <stdio.h>
int main()
{
    int a;
    printf("enter the last two digits of the year:");
    scanf("%d", &a);

    if (a % 4 == 0)
    {
        printf("it is a leap year");
    }

    else
    {
        printf("it is not a leap year");
    }
}