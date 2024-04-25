#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n");
scanf("%d",&n);
    int a=0;
    printf("%d",a);
    int b=1;
    printf("%d",b);
    int nextNumber=a+b;
    for(int i=3;i<=n;i++){
nextNumber=a+b;
printf("%d",nextNumber);
a=b;
b=nextNumber;
    }
 return 0;
}