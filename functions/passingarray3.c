#include<stdio.h>
#include<stdbool.h>
int linearSearch(int arr[],int n){
int key=20;
bool found=0;
int a;
for(int i=0;i<n;i++){
    if(arr[i]==key){found=1;
    a=i;}
}
if(found==1)printf("%d found at location %d",key,a+1);
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

linearSearch(arr,n);


 return 0;
}