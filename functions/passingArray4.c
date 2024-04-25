#include<stdio.h>
void bubblesort(int arr[],int n){
int temp;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
        }
    }

}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

}
int main()
{
int arr[100];
    int n;
    printf("Enter the no of elements to be entered");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
 }
bubblesort(arr,n);

 return 0;
}