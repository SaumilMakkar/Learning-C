#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates ");
    scanf("%d %d",&x,&y);
    if (x==0&&y==0){
        printf("Point is origin");

    }
else if(y==0){
    printf("Lies on x axis");
}else if(x==0){
    printf("Lies on y axis");
}else 
printf("point does not die on x,y axis or origin");


    
 return 0;
}