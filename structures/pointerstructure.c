#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;
int main()
{
    pokemon pikachu;
    pikachu.hp=300;
    pikachu.speed=70;
    pikachu.attack=70;
    pikachu.tier='A';
    strcpy(pikachu.name,"humo");
    printf("%p\n",&pikachu.hp);
    pokemon*x=&pikachu;
    printf("%p\n",x);
 return 0;
}