#include<stdio.h>
struct Student
{
    int id;
    int marks;
    char s[20];
};
// typedef struct Student st;     //will no need to use struct again and again// saves time// efficient code

int main()
{
    struct Student arpit={2412,99,"arpit"};
    // arpit.id=2412;
    // arpit.marks=95;
    // arpit.fav_char='a';
   
    printf("arpit got %d marks",arpit.marks);
    printf("\n");
    printf("%s",arpit.s);
    return 0;
    

}