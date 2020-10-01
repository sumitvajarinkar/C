#include<stdio.h>
#include<conio.h>
void main()
{
 float p,r,t,si;
 clrscr();
 printf("enter p,r,t=\n");
 scanf("%f%f%f",&p,&r,&t);
 si=(p*r*t)/100;
 printf("simple interest=%f",si);
 getch();
 }