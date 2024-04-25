#include<stdio.h>
int main()
{

    int a[]={3,2,67,0,56};
    const int *p;
    p=a;
    
   printf("%d\n",*p++);
   printf("%d",*p);

 return 0;
}