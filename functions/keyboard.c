#include<stdio.h>
int prime(int n){

for(int i=2;n>1;i++){
while(n%i==0){
    printf("%d ",i);
    n=n/i;
}


}
}
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
prime(n);


 return 0;
}