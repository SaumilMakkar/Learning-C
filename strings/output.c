#include<stdio.h>
#include<string.h>
int main(){
char str[40];
puts("enter a string");
gets(str);
puts("the size of string is");
int i=0;
int size=0;
while(str[i]!='\0'){
    size++;
    i++;
}
printf("%d",size);
int j;
for(int i=0, j=size-1;i<=j;i++,j--){
char temp=str[i];
str[i]=str[j];
str[j]=temp;
}
printf("%s",str);
}