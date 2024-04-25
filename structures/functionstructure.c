#include<stdio.h>
  typedef struct pokemon
{
    int hp;
    int speed ;
    char tier;
    int attack;
    char name[15];
}pokemon;
void fun(pokemon p){
printf("%d",p.hp);}
int main()
{

  
pokemon pikachu;
pikachu.hp=60;
fun(pikachu);
 return 0;
}