#include<stdio.h>
int factorial(int x){
    int factorial1=1;
    for(int i=1;i<=x;i++){
        factorial1=factorial1*i;
    }
    return factorial1;
}
int main()
{

    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);
 return 0;
}