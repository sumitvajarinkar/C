#include<stdio.h>
#include<conio.h>
void main()
{
 int i,fact=1;
 clrscr();
 printf("Enter no.=\n");
 scanf("%d",&i);
 while(i>=1)
 {
  fact=fact*i;
  i--;
  }
  printf("Factorial of no.=%d",fact);
  getch();
  }
























