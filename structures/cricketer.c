#include<stdio.h>
int main()
{

    typedef struct cricketer{
        char name[20];
        int age;
        int noofMatches;
        float average;
    }cricketer;
    cricketer arr[3];
    
    for(int i=0;i<3;i++){
        
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noofMatches);
        scanf("%f",&arr[i].average);




    }
    for(int i=0;i<3;i++){
        
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].age);
        printf("%d\n",arr[i].noofMatches);
        printf("%f\n",arr[i].average);




    }
    
 return 0;
}