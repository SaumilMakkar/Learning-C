#include<stdio.h>
int main()
{
int arr[3][2]={1,2,3,4,5,6};
int maxSum=0;
int row=0;
int i=0;

for( i=0;i<3;i++){
int sum=0;
    for(int j=0;j<2;j++){
       sum=sum+arr[i][j];
    }
    if(sum>maxSum){
    maxSum=sum;
    row=i;
}
}

printf("%d %d",maxSum,i);


  return 0;
}