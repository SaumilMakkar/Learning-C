#include<stdio.h>
#include<string.h>
#include<stdbool.h>
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

typedef struct legendarypokemon{
 pokemon normal;
char ability[10];
}legendarypokemon;


typedef struct godpokemon{
    legendarypokemon legend;
    int specialattack;
}godpokemon;
godpokemon arceus;
arceus.specialattack=300;
arceus.legend.normal.hp=500;
 return 0;
}