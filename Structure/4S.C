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
 struct cricket_team c[5];
 int i;
 clrscr();
 printf("Enter info of 5 cricketers\n");
 for(i=0;i<5;i++)
 {
  printf("Name=\n");
  scanf("%s",c[i].name);
  printf("Age=\n");
  scanf("%d",&c[i].age);
  printf("Score\n");
  scanf("%d",&c[i].score);
  printf("*****-----******\n");
 }
 for(i=0;i<5;i++)
 {
  if(c[i].score>=100)
  {
  printf("Name=%s\n",c[i].name);
  printf("Age=%d\n",c[i].age);
  printf("Score=%d\n",c[i].score);
  printf("*****-----******\n");
 }
}
getch();
}
