#include<stdio.h>
#include<conio.h>
void main()
{
 int n,rev=0,r,no;
 clrscr();
 printf("\nEnter any no.=");
 scanf("%d",&n);
 no=n;
 while(n>0)
  {
   r=n%10;
   rev=rev*10+r;
   n=n/10;
  }


    if(rev==no)
   {
    printf("No. is palindrome");
    }
    else
    {
     printf("No. is not palindrome");
    }
    getch();
 }