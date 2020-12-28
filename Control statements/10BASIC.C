#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 printf("Enter grade code=\n");
 scanf("%c",&ch);
 if(ch=='a')
 {
  printf("Basic salary=15000");
  }
  else if(ch=='b')
  {
   printf("Basic salary=12000");
   }
   else if(ch=='c')
   {
    printf("Basic salary=10000");
    }
    else if(ch='d')
    {
     printf("Basic salary=8000");
     }
     else
     {
      printf("Wrong choice\n");
      }
      getch();
      }

