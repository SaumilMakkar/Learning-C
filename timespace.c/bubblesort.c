#include<stdio.h>
int main()
{
int n=5;
int arr[5]={10,3,4,2,6};
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
for(int i=0;i<=n-1;i++){
    printf("%d ",arr[i]);
}

 return 0;
}