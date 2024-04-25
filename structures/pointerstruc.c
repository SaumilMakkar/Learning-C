#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;
void change(pokemon *p){
    //(*p).hp=70;//(*x).something=x->something
    p->hp=70;
    (*p).attack=80;
    (*p).speed=150;
    (*p).tier='b';
    strcpy((*p).name,"Raichu");
    return;

}
int main()
{
    pokemon pikachu={60,70,100,'A',"Pikachu"};
    //pikachu.hp=300;
    //pikachu.speed=70;
    //pikachu.attack=70;
    //pikachu.tier='A';
    strcpy(pikachu.name,"humo");
      change(&pikachu);
    printf("%d\n",pikachu.hp);
     printf("%d\n",pikachu.speed);
      printf("%d\n",pikachu.attack);
       printf("%c\n",pikachu.tier);
        printf("%s\n",pikachu.name);
   
  

 return 0;
}