#include<stdio.h>

void delete(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
             for(int j=k-1;j<n-1;j++){
             arr[j]=arr[j+1];
             }
      }   
    }
}
int main()
{
    int n,k;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("\n enter the element to delete:");
    scanf("%d",&k);
    delete(arr,n,k);
    for(int i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}