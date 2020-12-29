#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(j=0;j<=5;j++)
   {
    if(j>=i)
	printf("*");
      else
	printf(" ");
   }
   printf("\n");
 }
 getch();
 }
