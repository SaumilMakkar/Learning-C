#include<stdio.h>
char* display(int n){
    return "Jenny"; 
}
int main()
{

    char *str;
    int n=2;
    str=display(n);
    printf("%s",str);
 return 0;
}