#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("Enter any no.=\n");
 scanf("%d",&a);
 switch(a%2==0)
 {
  case 0:
	    printf("No. is odd\n");
	    break;
  case 1:
	   printf("No. is even\n");
	   break;
	   }
	  getch();
	  }