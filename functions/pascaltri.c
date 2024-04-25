#include <stdio.h> 
void printPascal(int n) 
{ 
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf("  ");
        }
        int first=1;
        for(int j=1;j<=i;j++){
            printf("%4d",first);
            first=first*(i-j)/j;
        }
        printf("\n");
    }
}
int main()
{

    int n=5;
    printPascal(n);
 return 0;
}