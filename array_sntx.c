/*#include<stdio.h>   // for 1-D array//

int main()
{
int a[3];
a[0]=1;
a[1]=2;
a[2]=3;
for(int i=0;i<3;i++){

printf("the %d element of the array is %d\n",i,a[i]);

}
}
*/


#include<stdio.h>//for 2-D array//

int main(){

int a[2][4]={{4,54,23,33}        //like a matrix//
           ,{62,12,43,66}};

           for(int i=0;i<2;i++){

               for(int j=0;j<4;j++){

                   printf("the %d,%d element is %d\n",i,j,a[i][j]);
               }
           }


}