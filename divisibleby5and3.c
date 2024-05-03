#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n%3==0||n%5==0){
        printf("The number is divisible by 3 or 5");
    }else{
        printf("The number is not divisible by 5 or 3");
    }
 return 0;
}