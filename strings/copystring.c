#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Physics";
    int size=0;
    int k=0;
    while(s1[k]!='\0'){
       size++;
       k++; 
    }
    
   
    char s2[size];
    for(int i=0;i<size;i++){
        s2[i]=s1[i];
      }
      printf("%s",s2);
    
    // char *s2=s1;//s2 is a shalow copy
    // s1[0]='D';
    // printf("%s",s2);
//     char s2[]="Physics Wallah";
//     //s2[0]='D';
//     printf("%p\n",s1);
//     printf("%p",s2);

//  return 0;

}