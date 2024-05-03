#include<stdio.h>
int main()
{
int n,r,temp;

printf("Enter the number ");
scanf("%d",&n);

for(int i=1;i<=n;i++){
     temp=n;
    int sum=0;
   
    while(temp!=0){
    r=temp%10;
    sum=sum+(r*r*r);
    temp=temp/10;}
    if(sum==i)
{
    printf("Answer is %d\n",sum);
}}}