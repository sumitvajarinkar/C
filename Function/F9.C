#include<stdio.h>
#include<conio.h>
int perfect();
void main()
{
 int s;
 clrscr();
 s=perfect();
 if(s==1)
  printf("Perfect");
 else
  printf("Not perfect");
 getch();
}
int perfect()
{
 int i,n=1,sum=0,no;
 printf("Enter any no.\n");
 scanf("%d",&n);
 while(i<n)
  {
   if(i%n==0)
     sum=sum+n;
     n++;
   }
 if(sum==no)
  return 1;
}

