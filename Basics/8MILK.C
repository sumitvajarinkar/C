#include<stdio.h>
#include<conio.h>
void main()
{
 int a,r,total;
 clrscr();
 printf("Amount of milk=\n");
 scanf("%d",&a);
 printf("Rate of milk per day=\n");
 scanf("%d",&r);
 total=a*r*30;
 printf("Total cost=%d",total);
 getch();
 }