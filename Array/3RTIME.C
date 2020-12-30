#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
 int a[5];
 clrscr();
 printf("Enter any 5 elements=\n");
 for(i=0;i<5;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++)
 printf("\n%d is at index of %d",a[i],i);
getch();
}