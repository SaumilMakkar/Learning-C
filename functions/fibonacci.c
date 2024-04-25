#include<stdio.h>
void fun(int*,int*);
int main()
{
int x=5,y=7;
    fun(&x,&y);
    printf("%d %d ",x,y);

 return 0;
}
void fun(int *x,int *y){
    *x=7;*y=5;
printf("%d %d",*x,*y);
}