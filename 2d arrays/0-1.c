#include<stdio.h>
int main()
{
    int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}};
int maxCount=0;
int row=-1;





    

for(int i=0;i<3;i++){
    int count=0;
    for(int j=0;j<4;j++){
        if(arr[i][j]==1){count++;}
    }
   if(count>maxCount){maxCount=count;
   row=i+1;
   }
}
printf("%d %d",maxCount,row);
 return 0;
}