#include<stdio.h>
int main()
{

int x=3;
int *y;
int **k;
y=&x;
k=&y;
printf("%d %d %d\n",&x,&y,&k);
printf("%d %d\n",y,k);
printf("%d %d %d\n",x,*y,**k);



 return 0;
}