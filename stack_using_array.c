#include <stdio.h>
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
    else{
        return 0;
    }
}

//removes the topmost element of stack
int pop(struct stack *ptr)
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
void push(struct stack *ptr, int a)
{
    if (isFull(ptr))
    {
        printf("\n%d cannot be pushed as stack is full\n",a);
        printf("STACKOVERFLOW\n");
    }
    else
    {
        ptr->arr[++ptr->top] = a;
        printf("\n%d element was pushed\n", a);
    }
}

//returns the topmost element of the stack
int peek(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int main()
{

    struct stack s; 

    s.top = -1;
    s.size = 5;
    s.arr = (int *)malloc(s.size * sizeof(int));

    pop(&s);

    push(&s, 30);
    
    printf("\n");

    if (isEmpty(&s))
    {
        printf("stack is empty\n");
    }
    else
        printf("it is not empty\n");

    push(&s, 60);
    pop(&s);
    push(&s,25);
    push(&s,15);
    push(&s,45);
    push(&s,70);
    push(&s,75);
    printf("\n%d has been peeked", peek(&s));
}