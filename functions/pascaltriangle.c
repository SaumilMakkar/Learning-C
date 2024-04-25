#include <stdio.h> 
void printPascal(int n) 
{ 
    for (int i = 1; i <= n; i++) { 
        for (int space = 1; space <= n - i; space++) {
            printf("  "); }
        // used to represent C(line, i) 
        int coef = 1; 
        for (int j = 1; j <= i; j++) { 
            // The first value in a line 
            // is always 1 
            printf("%4d", coef); 
            coef = coef * (i- j) / j; 
        } 
        printf("\n"); 
    } 
} 
  
// Driver code 
int main() 
{ 
    int n = 5; 
    printPascal(n); 
    return 0; }