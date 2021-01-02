#include<stdio.h>
#include<conio.h>
void main()
{
 int a[2][2],i,j;
 int c=0,n;
 clrscr();
 printf("Enter 5 elements\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
  for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   {
   for(n=1;n<=a[2][2];n++)
   {
     if(a[i][j]%n==0)
      {
       c++;
      }
   }
  }
 }
 if(c==2)
   printf("prime nos. are=%d",a[i][j]);
  else
   printf("Non prime nos.=%d",a[i][j]);
getch();
}