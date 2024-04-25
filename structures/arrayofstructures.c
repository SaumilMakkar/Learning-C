#include<stdio.h>
#include<string.h>
int main()
{

typedef struct pokemon
{
    int hp;
    int speed ;
    char tier;
    int attack;
    char name[15];
}pokemon;

 pokemon arr[3];
 arr[0].attack=50;
 arr[0].hp=100;
 arr[0].speed=30;
 arr[0].tier='A';
strcpy(arr[0].name,"Charizad");
  arr[1].attack=50;
 arr[1].hp=100;
 arr[1].speed=30;
 arr[1].tier='S';
 strcpy(arr[1].name,"meeto");
  arr[2].attack=50;
 arr[2].hp=100;
 arr[2].speed=30;
 arr[2].tier='B';
 strcpy(arr[2].name,"jii");
 for(int i=0;i<3;i++){
    printf("%d\n",arr[i].attack);
    printf("%d\n",arr[i].hp);
    printf("%c\n",arr[i].tier);
    printf("%d\n",arr[i].speed);
    printf("%s\n",arr[i].name);
 }





 return 0;
}