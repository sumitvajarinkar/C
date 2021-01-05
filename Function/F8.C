//no argument with return type
#include<stdio.h>
#include<conio.h>
int perfect();
void main()
{
 int s;
 clrscr();
 s=perfect();
 if(s==1)
	printf("perfect no");
 else
	printf("Not perfect no.");
  getch();
}
int perfect()
{
 int i,n=1,sum=0,s,no;
 printf("Enter any no=\n");
 scanf("%d",&i);
 no=i;
 while(i>n)
  {
   if(i%n==0)
    sum=sum+n;
    n++;
   }
  if(no==sum)
	 return 1;
  else
	 return 0;
}