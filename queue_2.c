#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct queue{
    int front;
    int rear;
    int size;
    int *arr;
};

int isEmpty(struct queue*q){
    if(q->front>=q->rear){
        return 1;
    }
    else return 0;
}

int isFull(struct queue *q){
    if(q->rear==q->size-1){
        return 1;
    }
    else return 0;
}

void enqueue(struct queue* q,int a){
    if(isFull(q)){
        printf("queue is full buddy");
    }

    if(isEmpty(q)){
       q->arr[++q->rear]=a;
        q->front++;
    }

    else{
        q->arr[++q->rear]=a;
    }
}

int dequeue(struct queue *q){
    return q->arr[q->front++];
}


int main()
{
    struct queue q;
    q.rear=-1;
    q.front=-1;
    q.size=10;
    q.arr=(int*)malloc(q.size*sizeof(int));
    
    struct queue q1;
    q1.rear=-1;
    q1.front=-1;
    q1.size=q.size;
    q1.arr=(int*)malloc(q1.size*sizeof(int));
    
    enqueue(&q,2);
    enqueue(&q,5);
    enqueue(&q,7);
    printf("%d",dequeue(&q));
    printf("%d",dequeue(&q));
    printf("%d",dequeue(&q));


    return 0;
}