#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter any 3 nos.=\n");
scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c)
   {
    printf("A is greater no.\n");
    }
 else if(b>c)
    {
    printf("B is greater no.\n");
    }
 else if(b>a && b>c)
    {
     printf("B is greater no.\n");
     }
 else if(a>c)
    {
    printf("A is greater no.\n");
     }
  else
   {
   printf("C is greater no.\n");
    }
  getch();
  }

