#include<stdio.h>
int main()
{
int arr[3][4]={{1,2,3,4},{1,2,3,4},{4,6,3,9}};
int maxsum=0;

int i=0;
int row=0;
for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<4;j++){
        sum=sum+arr[i][j];
    }
    if(sum>maxsum){
        maxsum=sum;
        row=i;
    }

}printf("%d %d",maxsum,row+1);

 return 0;
}