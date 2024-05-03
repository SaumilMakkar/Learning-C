#include<stdio.h>
int main(){
    int cp;
    int sp;
    printf("Enter cp: ");
    scanf("%d",&cp);
printf("Enter sp: ");
scanf("%d",&sp);
if(cp>sp){
    printf("Loss is made by %d",cp-sp);
}else if(sp>cp){
    printf("Profit is made by %d",sp-cp);
}else {
    printf("No loss or profit is made");
}

}