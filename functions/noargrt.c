#include<stdio.h>
int sum(void);
int main()
{
    int s=sum();
    printf("%d",s);
 return 0;
}
int sum(){
    int a=5;
    int b=7;
    int sum=a+b;
    return sum;
}