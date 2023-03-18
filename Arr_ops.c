#include<stdio.h>
#include<stdlib.h>
void traverse(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void search(int a[],int n,int b){
    for(int i=0;i<n;i++){
        if(a[i]==b){
            printf("found at index %d",i);
            break;
        }
        else continue;
    }
}
void insert(int a[],int n,int c,int d){
    int arr[n+1];
    for(int i=0;i<d;i++){
        arr[i]=a[i];
    }
    arr[d]=c;
    for(int j=d+1;j<n+1;j++){
        arr[j]=a[j-1];
    }
    traverse(arr,n+1);
}


int main()
{   
    int *a;
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    a=(int*)malloc(size*sizeof(int));
    
    for(int i=0;i<size;i++){
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    traverse(a,size);
    int find;
    printf("\nenter element to find:");
    scanf("%d",&find);
    search(a,size,find);

    int ins,ind;
    printf("\nenter element and index:");
    scanf("%d%d",&ins,&ind);
    insert(a,size,ins,ind);
    return 0;
}