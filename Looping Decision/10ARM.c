#include<stdio.h>
#include<conio.h>
void main()
{
 int n,r,sum=0,no;
 clrscr();
 printf("\nEnter any no.=");
 scanf("%d",&n);
 no=n;
 while(n>0)
{
 r=n%10;
 sum=sum+(r*r*r);
 n=n/10;
 }
 if(sum==no)
 {
  printf("No is armstrong\n");
  }
  else
  {
   printf("No. is not armstrong\n");
   }
   getch();
   }
