#include<stdio.h>
int maxArray(int arr[],int n){
    int max;
    max=arr[0];
for(int i=0;i<n;i++){

if(max<arr[i]) max=arr[i];
}
return max;
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
    int max=maxArray(arr,n);
    printf("%d",max);
 return 0;
}