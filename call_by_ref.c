#include<stdio.h>//program to swap two values of given variables//
                  // concept of pointers is used//
void swap(int *x,int *y){
    int temp;
    temp=*x;    //giving temp the value of variable whose address is stored in x//
    *x=*y;      //giving the value of var whose address is stored in y to the variable whose address is stored in x//
    *y=temp;    //givng the value stored to var whose address is stored in y of temp//

}
int main()
{
    int a=34,b=74;
    printf("the intitial values of a and b are:%d %d",a,b);
    swap(&a,&b);
    printf("\nthe final values of a and b are:%d %d",a,b);
    
    return 0;
}