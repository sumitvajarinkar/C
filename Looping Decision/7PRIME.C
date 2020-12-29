#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,c=0;
 clrscr();
 for(n=1;n<=100;n++)
 {
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
   {
     c++;
    }
  }
   if(c==2)
    {
     printf("\t%d",n);
    }
    c=0;
 }
  getch();
}
