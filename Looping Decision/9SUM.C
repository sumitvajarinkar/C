#include<stdio.h>
#include<conio.h>
void main()
{
 int n,sum=0,r;
 clrscr();
 printf("\nEnter any no.=");
 scanf("%d",&n);
 while(n>0)
 {
  r=n%10;
  sum=sum+r;
  n=n/10;
  }
  printf("Sum of digits in given no.=%d\n",sum);
  getch();
  }





















