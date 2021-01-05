#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5]={10,20,30,40,50};
 int i;
 clrscr();
 for(i=4;i>=0;i--)
  {
   printf("%d is at address of %u\n",a[i],&a[i]);
  }
getch();
}