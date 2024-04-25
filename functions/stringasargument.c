#include<stdio.h>
void modify(char  str1[],char str2[]){
    int l=0;
    for(int i=0;str1[i]!='\0';i++){
l++;

    }
    str2[0]='z';
    printf("%d",l);
    printf("%s %s",str1,str2);
}

int main()
{

char str1[]="jenny";
char str2[]="khatri";
modify(str1,str2);
 return 0;
}