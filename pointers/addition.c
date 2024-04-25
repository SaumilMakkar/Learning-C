#include<stdio.h>
int main()
{

    int s[5]={1,4,2,-8,0};
    int *p=&s[0];
    int *q=&s[1];
//p=p+q;//you cannot add two pointers
    printf("%d\n",*p);
    printf("%u\n",p);
    p=p+2;
    *p=34;
    printf("%d\n",*p);
printf("%u",p);
   
 return 0;
}