#include<stdio.h>
int hcf(num1,num2){
    int i;
    for(  i=num1<num2?num1:num2;i>=1;i--){
        if(num1%i==0&&num2%i==0){break;}
    
    }
    return i;
}
int main()
{

    int num1;int num2;
    printf("enter the numbers");
    scanf("%d %d",&num1,&num2);
    int Hcf=hcf(num1,num2);
    printf("%d",Hcf);
    
 return 0;
}