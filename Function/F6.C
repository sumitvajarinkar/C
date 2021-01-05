#include<stdio.h>
#include<conio.h>
void fact();
void main()
{
 clrscr();
 fact();
 getch();
}
void fact()
{
 int i,fact=1;
 printf("Enter any no=\n");
 scanf("%d",&i);
 while(i>=1)
 {
  fact=fact*i;
  i--;
 }
  printf("Factorial of no.=%d",fact);
}
