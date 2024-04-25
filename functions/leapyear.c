#include<stdio.h>
void leap(int n){
    if(n%400==0)printf("yes");
    else if(n%100)printf("no");
    else if(n%4==0)printf("yes");
    else printf("no");
}

int main()
{

    int year;
    printf("Enter the year");
    scanf("%d",&year);
     leap(year);
 return 0;
}