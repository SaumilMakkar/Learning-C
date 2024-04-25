#include<stdio.h>
int sum(int a,int b){
return a+b;
}
int main(){
    int x,y;
    printf("enter first number");
scanf("%d",&x);
printf("enter second number");
scanf("%d",&y);
int add=sum(x,y);
printf("%d",add);

    return 0;
}