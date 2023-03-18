#include <stdio.h>
#include<string.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

// check if stack is empty
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
        return 0;
}
// check if stack is full
int isFull(struct stack *ptr)
{
    if (ptr->top == (ptr->size) - 1)
    {
        return 1;
    }
    else
        return 0;
}

//removes the topmost element of stack
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\ncannot be popped as stack is empty\n");
    }
    else
    {
        return ptr->arr[ptr->top--];
    }
}

//pushes the given element on the top of the stack
void push(struct stack *ptr, char a)
{
    if (isFull(ptr))
    {
        printf("\n%c cannot be pushed as stack is full\n",a);
        printf("STACKOVERFLOW\n");
    }
    else
    {
        ptr->arr[++ptr->top] = a;
        printf("\n%c element was pushed", a);
    }
}

//returns the topmost element of the stack
char peek(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
int main()
{
    struct stack s; 

    s.top = -1;
    s.size = 10;
    s.arr = (int *)malloc(s.size * sizeof(int));
    char str[10];
    printf("enter the string:");
    gets(str);

    for(int i=0;i<strlen(str);i++){
        push(&s,str[i]);
    }
    printf("\n");
    for(int i=0;i<strlen(str);i++){

        printf("%c",pop(&s));
    }

}