#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
 clrscr();
 sum();
 getch();
}
void sum()
{
 int a[3][3],i,j,sum=0;
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
     scanf("%d",&a[i][j]);
    }
   }
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
     sum=sum+a[i][j];
   }
  }
 printf("Sum of elements are %d",sum);
}