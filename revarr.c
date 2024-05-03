#include<stdio.h>
int main()
{

    int arr[]={1,2,3,4,5,6};
    int a=0;
    int b=5;
    for(int a=0,b=5;a<=b;a++,b--){
       int temp=arr[a];
       arr[a]=arr[b];
       arr[b]=temp;
    }
    for(int i=0;i<6;i++){
        printf("%d",arr[i]);
    }
 return 0;
}