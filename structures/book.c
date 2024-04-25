#include<stdio.h>
#include<string.h>
int main()
{

    struct book{
    char name[20];
   float price;
    int numberofpages;
    }a,b,c;
    
 strcpy(a.name,"Secret Seven");
    a.numberofpages=100;
    a.price=411.5;
    printf("%d\n",a.numberofpages);
      printf("%f\n",a.price);
      printf("%s",a.name);
       

 return 0;
}