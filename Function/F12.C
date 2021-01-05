//with argument no return type
#include<stdio.h>
#include<conio.h>
void si(int p,int r,int t);
void main()
{
 int p,r,t;
 clrscr();
 printf("Enter value p,r,t=\n");
 scanf("%d%d%d",&p,&r,&t);
 si(p,r,t);
 getch();
}
void si(int p,int r,int t)
{
 int si;
 si=(p*r*t)/100;
 printf("Simple interest=%d",si);
 getch();
}