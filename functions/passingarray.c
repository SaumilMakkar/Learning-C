#include<stdio.h>
int avg(int*p,int size){
int i;
int sum=0;
int average=0;
for(int i=0;i<size;i++){
    sum=sum+*p;
    p++;
}
average=sum/ size;
return average;

}
int main()
{
int marks[5]={10,15,20,25,30};
int size;
size=sizeof(marks)/sizeof(marks[0]);
int average=avg(marks,size);
printf("%d",average);
 return 0;
}