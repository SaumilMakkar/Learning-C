#include<stdio.h>
#include<string.h>

int main()
{


    char str[20]="Saumil";
    char str1[30]="Makkar";
//    strcat(str,str1);
//     printf("%s",str);
int len1=strlen(str);
int len2=strlen(str1);
for(int i=0;i<=len2;i++){
    str[len1+i]=str1[i]; 
}
printf("%s ",str);
}