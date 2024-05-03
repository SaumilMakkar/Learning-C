#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b ){
        if(a>c){
            printf("A is greatest");
        }else{
            printf("C is greatest");
        }
    }else {
        if(b>c)  
        printf("b is greatest");
        else printf("c is greatest");
        
    }
 return 0;
}