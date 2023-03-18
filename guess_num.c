#include<stdio.h>//guess game//
#include<stdlib.h>
#include<time.h>

int main(){

int num,a;
srand(time(0));
num=rand()%150;

for(int i=1;i>0;i++){

printf("\nguess %d:",i);
scanf("%d",&a);
if(a>num){
    printf("the number is too high\n");
    }
else if(a<num){
    printf("the number is too low\n");
}    
else if(a==num) {
   printf("\nCongratulations!!the number is %d\ntaken guesses:%d",num,i);
   break;
}

}



}