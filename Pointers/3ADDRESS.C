#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5]={1,2,3,4,5};
 int i;
 clrscr();
 for(i=0;i<5;i++)
 {
 printf("Element of a[%d]=%d\t",i,a[i]);
  printf("Address of a[%d]=%u\n",i,&a[i]);
  }
getch();
}