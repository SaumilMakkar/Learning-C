#include<stdio.h>
int main()
{
    int n;
    
    int temp;
    printf("Enter number of rows/columns");
    scanf("%d",&n);
    
int arr[n][n];

//input
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
    for(int i=0;)