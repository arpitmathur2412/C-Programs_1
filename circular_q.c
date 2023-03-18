#include<stdio.h>

struct queue{
    int front;
    int rear;
    int size;
    int *arr;
};

int isEmpty(struct queue *q){
    if((q->front==-1 && q->rear==-1)){
        return 1;
    }
    else return 0;
}

int isFull(struct queue *q){
    if((q->rear+1)%q->size==q->front){
        return 1;
    }
    else return 0;
}
void enqueue(struct queue*q,int a){
    if(isFull(q)){
        printf("queue is full");
    }
    else if(isEmpty(q)){
        q->arr[++q->rear]=a;
        q->front++;
    }
    else{
        q->arr[(++q->rear)%q->size]=a;
    }

}

int dequeue(struct queue *q){
    if(isEmpty(q)){
        printf("cannot be dequeued");
    }
    else{
        return q->arr[q->front];
        q->front=(q->front+1)%q->size;
    }
}
int main()
{
    
    return 0;
}