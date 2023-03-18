#include<stdio.h>

struct queue{
    int front,rear;
    int arr[5];
};

int isFull(struct queue *q){
    if(q->front==5){
       return 1;
    }
    else return 0;
}

int isEmpty(struct queue *q){
    if(q->rear==-1){
        return 1;
    }
    else return 0;
}

void enQueue(struct queue *q,int a){
    if(isFull(q)){
        printf("cannot be enqued as queue is full");
    }
    else{
        q->rear=(q->rear+1);
        q->arr[q->rear]=a;
        printf("%d is enqueued to the queue",a);
    }
}
int deQueue(struct queue *q){
    if(isEmpty(q)){
        printf("queue cannot be dequeued as it is empty");
    }
    else{
        return q->arr[q->front++];
    }
}
int main()
{
    struct queue q;
    q.rear=-1;
    q.front=-1;
    enQueue(&q,5);

    return 0;
}