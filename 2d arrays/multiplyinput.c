 #include<stdio.h>
 int main()
 {
//1st matrix
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
    //2nd matrix
     int p;
    printf("Enter no of rows of second matrix");
    scanf("%d",&p);
    int q ;
    printf("Enter no of columns of second matrix");
    scanf("%d",&q);
     int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //check
    if(n!=p){
        printf("The matrices cannot be multiplied");
    }else{
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                //i row of a,j column of b
                for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        //print
        printf("Resultant matrix is\n");
         for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){

printf("%d ",res[i][j]);
    }printf("\n");
        
  
 }
 }}