#include<stdio.h>
int main()
{

    int n;
    int lastdigit;
    int decvalue=0;
    int base=1
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0){
lastdigit=n%10;
decvalue=decvalue+(base*lastdigit);
base=base*2;
    }
    printf("%d",decvalue);
 return 0;
}