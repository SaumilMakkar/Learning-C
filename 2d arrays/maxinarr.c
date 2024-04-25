#include<stdio.h>
int main()
{
int arr[2][2]={1,2,3,4};
int max=arr[0][0];
int min=arr[0][0];
int k=0;
int h=0;
int j=0;
int l=0;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        if(max<arr[i][j]){
            max=arr[i][j];
            k=i;
            h=j;
            
        }
        if(min>arr[i][j]){
            min=arr[i][j];
            j=i;
            l=j;
        }
    }
}
printf("%d %d %d\n",max,k,h);
printf("%d %d %d\n",min,j,l);

 return 0;
}