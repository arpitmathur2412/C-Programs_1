#include<stdio.h>
int main()
{
    int n,a;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        int arr[a];
        for(int j=0;j<a-1;j++){
            scanf("%d",&arr[j]);
        }
        for (int i = 0 ; i < a- 1; i++){

         for (int j= 0 ; j < a - i - 1; j++){
      if (arr[j] > arr[j+1]){
        int temp   = arr[j];
        arr[j]   = arr[j+1];
        arr[j+1] = temp;
      }
    }
    }
    for(int k=0;k<a-1;k++){
        if(arr[k]!=k){
            printf("%d",arr[k]);
        }
    }
  }


    return 0;
}
