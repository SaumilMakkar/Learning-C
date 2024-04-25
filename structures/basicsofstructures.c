#include<stdio.h>
int main()
{
    struct Pokemon//user defined data type
    {
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct Pokemon pikachu;
    scanf("%d",&pikachu.attack);
    printf("%d\n",pikachu.attack);
   // pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;  
    pikachu.tier='A';
    struct Pokemon charizard;
    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=80;
    pikachu.tier='B';
printf("%d",charizard.attack);
    

 return 0;
}