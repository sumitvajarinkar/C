#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter sides of triangle=\n");
 scanf("%d%d%d",&a,&b,&c);
 if(a+b>c && b+c>a && a+c>b)
  {
   if(a==b && b==c)
   {
    printf("Triangle is equilateral\n");
    }
     if(a==b || b==c || a==c)
     {
      printf("Triangle is isosceles\n");
      }
     }
  else
  {
   printf("Triangle is scalene\n");
    }
 getch();
 }