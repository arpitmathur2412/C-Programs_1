#include <stdio.h>
#include <stdlib.h>
 
struct stack
{
    int size;
    int top;
    char *arr;
};
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
void push(struct stack* ptr, char *val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = *val;
    }
}
 
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
void postfix_eval(char *c){
    struct stack s;
    s.top=-1;
    s.size=20;
    s.arr=(char*)malloc(s.size*sizeof(char));

    for(int i=0;c[i]!='\0';i++){
        if(c[i]!='+' && c[i]!='-' && c[i]!='/' && c[i]!='*'){
            push(&s,&c[i]);
        }
        else if(c[i]=='+'){
            int val1=(int)pop(&s);
            int val2=(int)pop(&s);
            char *a=(char)(val1+val2);
            push(&s,&a);
        }
        else if(c[i]=='-'){
            int val1=(int)pop(&s);
            int val2=(int)pop(&s);
            char*a=(char)(val2-val1);
            push(&s,&a);
        }
        else if(c[i]=='*'){
            int val1=(int)pop(&s);
            int val2=(int)pop(&s);
            char*a=(char)(val2*val1);
            push(&s,&a);
        }
        else if(c[i]=='/'){
            int val1=(int)pop(&s);
            int val2=(int)pop(&s);
            char *a=(char)(val1+val2);
            push(&s,&a);
        }
}

int main(){
    
}