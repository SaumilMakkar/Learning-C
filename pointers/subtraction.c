#include<stdio.h>
int main()
{
int arr[]={0,1,-1,10,113};
int *p=&arr[0];
int *q=&arr[4];
int *w=&arr[1];
//addresses can be subtracted but cannot be added.
printf("%d\n",q-p);
printf("%d\n",*q-*p);
printf("%u\n",w);
q=q-2;
printf("%d\n",*q);
printf("%u\n",q);
p=p+1;
printf("%u",q-p);


 return 0;
}