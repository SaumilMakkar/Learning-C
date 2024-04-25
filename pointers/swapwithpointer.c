#include<stdio.h>
int swap(int *x,int *y,int *z){
    *z=*x;
    *x=*y;
    *y=*z;
    
}
int main()
{

    int num1,num2,temp;
    printf("Enter two numbers");
    scanf("%d %d",&num1,&num2);
    swap(&num1,&num2,&temp);
    printf("%d\n",num1);
    printf("%d\n",num2);

 return 0;
}