// with argument no return type
#include<stdio.h>
#include<conio.h>
void min(int a,int b);
void main()
{
int a,b;
clrscr();
printf("\nEnter 2 nos.=");
scanf("%d%d",&a,&b);
min(a,b);
getch();
}
void min(int a,int b)
{
 if(a<b)
   printf("a is minimum\n");
 else
   printf("b is minimum");
}
