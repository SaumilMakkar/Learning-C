#include<stdio.h>
int main(){
    int length,breadth;
    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter breadth: ");
    scanf("%d",&breadth);
int area=length*breadth;
int perimeter=2*(length+breadth);
if(area>perimeter){
    printf("area is greater");
}else if(area==perimeter){
    printf("Area is equal to perimeter");
}else{
printf("Perimeter is greater than area");
}

}