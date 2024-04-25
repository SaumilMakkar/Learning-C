#include<stdio.h>
int main()
{
int m;
    printf("Enter no of rows of first matrix");
    scanf("%d",&m);
    int n;
    printf("Enter no of columns of first matrix");
    scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //spiral print 
    printf("\n");
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
     while(count<tne){
        //print the minimum row
        for(int j=minc;j<=maxc;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne)break;
        //print the maximum column
        for(int i=minr;i<=maxr;i++){
            printf("%d ",a[i][maxc]);
             count++;
        }
        maxc--; if(count>=tne)break;
        //print the maximum row
        for(int j=maxc;j>=minc;j-- ){
            printf("%d ",a[maxr][j]);
             count++;
        }
        maxr--; if(count>=tne)break;
        //print minimum column
        for(int i=maxr;i>=minr;i--){
            printf("%d ",a[minc][i]);
             count++;
        }
        minc++; if(count>=tne)break;



     }



 return 0;
}

