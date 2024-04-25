#include<stdio.h>
void roman(int num){
while(num!=0){
    if(num>=1000){
        printf("m");
        num=num-1000;
    }
    else if(num>=500){
        printf("d");
        num=num-500;
    }
    else if(num>=100){
        printf("c");
        num=num-100;
    }
    else if(num>=50){
        printf("l");
        num=num-50;
    }
    else if(num>=10){
        printf("x");
        num=num-10;
    }
    else if(num>=5){
        printf("v");
        num=num-5;
    }
    else if(num>=1){
        printf("i");
        num=num-1;
    }
}

}

int main()
{
int yr;
printf("Enter yr");
scanf("%d",&yr);
roman(yr);




 return 0;
}