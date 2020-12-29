#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,c=0;
 clrscr();
 printf("Enter any no=\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
   {
    c++;
    }
  }
   if(c==2)
    {
     printf("No. is prime");
     }
   else
     {
      printf("No. is not prime");
      }
  getch();
}
