#include<stdio.h>
#include<conio.h>
void main()
{
 char a[10]={"hello"};
 int i;
 clrscr();
 for(i=0;i<5;i++)
  {
   printf("%c is at address of %u\n",a[i],&a[i]);
  }
getch();
}