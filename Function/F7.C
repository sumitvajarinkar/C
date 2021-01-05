//no argument with return type
#include<stdio.h>
#include<conio.h>
int as();
void main()
{
int s;
clrscr();
s= as();
if(s==1)
	printf("\n number is armstrong");
else
	printf("\n number is not armstrong");

 getch();
}
int as()
{
 int a,r,sum=0,no;
 printf("Enter any no=\n");
 scanf("%d",&a);
 no=a;
 while(a>0)
  {
   r=a%10;
   sum=sum+(r*r*r);
   a=a/10;
  }
   if(sum==no)
    return 1;
   else
    return 0;
}


