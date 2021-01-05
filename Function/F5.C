// with argument with return type
#include<stdio.h>
#include<conio.h>
int avg(int a,int b,int c);
void main()
{
 int a,b,c,y;
 clrscr();
  printf("\nEnter any 3 nos.=");
 scanf("%d%d%d",&a,&b,&c);
 y=avg(a,b,c);
  printf("Average=%d",y);
 getch();
}
int avg(int a, int b,int c)
{
 int y;
 y=(a+b+c)/3;
 return y;
}






















