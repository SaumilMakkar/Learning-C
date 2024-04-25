#include<stdio.h>
void powerfact(int a,int b,int n,int *powercal,int *fact){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
        
    }
    *fact=factorial;
    int power1=1;
for(int i=1;i<=b;i++){
power1=power1*a;

}
*powercal=power1;

}
int main()
{
int n;
printf("Value of n is");
scanf("%d",&n);
int base;
printf("Enter the value of base");
scanf("%d",&base);
int power;
printf("Enter the value of power");
scanf("%d",&power);
int powercal;
int fact;
powerfact(base,power,n,&powercal,&fact);
printf("%d %d",fact,powercal);



 return 0;
}