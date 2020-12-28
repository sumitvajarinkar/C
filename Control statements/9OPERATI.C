#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,a,s,m,d;
 char ch;
 clrscr();
 printf("Enter value of x & y=\n");
 scanf("%d%d",&x,&y);
 printf("Enter operation=\n");
 scanf("%c",&ch);
 if(ch=='a')
     a=x+y;
     {
     printf("Addition=%d\n");
     }
    else if(ch=='s')
    s=x-y;
    {
     printf("Subtraction=%d\n");
     }
     else if(ch=='m')
     m=x*y;
     {
      printf("Multiplication=%d\n");
      }
      else if(ch=='d')
      d=x/y;
      {
       printf("Division=%d\n");
       }
       else
       {
	printf("Wrong");
	}
   getch();
   }






















