 #include<stdio.h>
 int main(){

 
 int r;
    int c;
    printf("Enter number of rows");
    scanf("%d",&r);
     printf("Enter number of columns");
    scanf("%d",&c);
    printf("Enter all the elements\n");
int arr[r][c];


for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
    
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
int sum=0;
for(int i=0;i<r-1;i++){
    for(int j=1;j<c;j++){
        sum=sum+arr[i][j];
    }
    

}
printf("%d",sum);
}