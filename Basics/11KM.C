#include<stdio.h>
#include<conio.h>
void main()
{
 float a,b,c,d,e;
 clrscr();
 printf("Enter distance between two cities in km=\n");
 scanf("%d",&a);
 b=a*1000;
 printf("In metre=%f\n",b);
 scanf("%f",&b);
 c=a*3280.44;
 printf("In feet=%f\n",c);
 sacnf("");
 d=a*39370.079;
 printf("In inches=%f\n",d);
 e=a*100000;
 printf("In centimetres=%f\n",e);
 getch();
 }