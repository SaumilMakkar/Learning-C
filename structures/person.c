#include<stdio.h>
int main()
{
    struct Person{
        char name[50];
        int salary;
        int age;
    };
    struct Person gaurav;
    strcpy(gaurav.name,"gaurav");

    gaurav.salary=1500;
    gaurav.age=22;
    struct Person ramesh;
    strcpy(ramesh.name,"ramesh");
    ramesh.age=21;
    ramesh.salary=56000;
    printf("%s\n",ramesh.name);
    printf("%d",gaurav.age);
 return 0;
}