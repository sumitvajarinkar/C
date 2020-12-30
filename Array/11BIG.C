#include<stdio.h>
#include<conio.h>
void big();
void main()
{
clrscr();
big();
getch();
}
void big()
{
 int i,max;
 int a[5];
 printf("Enter any no.\n");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 max=a[0];
 for(i=0;i<5;i++)
 if(max<a[i])
  {
   max=a[i];
  }
 printf("Big no.is=%d",max);
}