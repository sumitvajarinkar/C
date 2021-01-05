//with argument with return type
#include<stdio.h>
#include<conio.h>
int prime(int a);
void main()
{
 int a,s;
 clrscr();
 printf("Enter any no.=\n");
 scanf("%d",&a);
 s=prime(a);
 if(s==1)
  printf("No. is prime");
 else
  printf("No. is not prime");
 getch();
}
int prime(int a)
{
 int i,c=0;
 for(i=1;i<=a;i++)
  {
   if(a%i==0)
     {
       c++;
     }
  }
 if(c==2)
    return 1;
 else
    return 0;
 }
