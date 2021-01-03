#include<stdio.h>
#include<conio.h>
struct cricket_team
{
 char name[20];
 int age;
 int score;
};
void main()
{
 struct cricket_team c;
 int i;
 clrscr();
 printf("Enter info of 5 cricketers\n");
 for(i=0;i<5;i++)
 {
  printf("Name=\n");
  scanf("%s",c.name);
  printf("Age=\n");
  scanf("%d",&c.age);
  printf("Score\n");
  scanf("%d",&c.score);
  printf("*****-----******\n");
  printf("Name=%s\n",c.name);
  printf("Age=%d\n",c.age);
  printf("Score=%d\n",c.score);
  printf("*****-----******\n");
 }
getch();
}
