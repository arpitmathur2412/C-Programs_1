#include<stdio.h>

int main(int argc, char const *argv[])
{
    label:
    printf("we are at label");
    
    goto label;
    

    //infinite loop gets created//

    
    return 0;
}
