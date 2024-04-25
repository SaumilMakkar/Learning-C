#include<stdio.h>
int powercal(int x,int y){
   int pow=1;
    for(int i=0;i<y;i++){

        pow=pow*x;

    }
    return pow;
}
int main()
{

    int base,power;
    printf("Enter the base");
    scanf("%d",&base);
    printf("Enter the power");
    scanf("%d",&power);
    int answer=powercal(base,power);
    printf("%d",answer);

 return 0;
}