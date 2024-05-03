#include<stdio.h>
int main()
{
    int Ajay,Shyam,Ram;
    printf("Age of Ajay is: ");
    scanf("%f",&Ajay);
     printf("Age of Shyam is: ");
    scanf("%f",&Shyam);
     printf("Age of Ram is: ");
    scanf("%f",&Ram);
    if(Ajay<Shyam&&Ajay<Ram){
        printf("Ajay is youngest");
    } else if(Shyam<Ajay&&Shyam<Ram){
        printf("Shyam is youngest");}
        else{
            printf("Ram is youngest");
        }
 return 0;
}