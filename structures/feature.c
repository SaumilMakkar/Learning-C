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
pokemon a,b,c;
a.attack=100;
a.hp=100;
a.speed=54;
strcpy(a.name,"bobby"  );
b=a;
strcpy(b.name,"sunny");
printf("%s",b.name);


}