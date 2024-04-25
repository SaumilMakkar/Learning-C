#include<stdio.h>
#include<string.h>
typedef union pokemon{
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
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    
 return 0;
}