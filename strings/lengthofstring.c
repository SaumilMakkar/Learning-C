#include<stdio.h>
#include<string.h>
int main()
{
int count=0;
char str[30];
int i;
gets(str);
while(str[i]!='\0'){
    count++;
    i++;
}
printf("%d",count);



 return 0;
}