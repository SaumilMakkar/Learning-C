#include<stdio.h>
int factorials(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
void printfacts(int n){
    for(int i=1;i<=n;i++){
        printf("Factorial of %d is %d\n",i,factorials(i));
    }
}
int main()
{


    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
     printfacts(n);
 return 0;
}