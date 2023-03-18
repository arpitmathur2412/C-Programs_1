#include<stdio.h>
int main(int argc, char const *argv[])
{
    label:
    printf("we are at label");

    goto end;

    goto label;//this gets skipped as we directly go to the end//

    end:
    printf("\nwe are at end");
    return 0;
}
