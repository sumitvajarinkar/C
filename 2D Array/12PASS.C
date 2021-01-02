#include<stdio.h>
#include<conio.h>
void pass();
void main()
{
clrscr();
pass();
getch();
}
void pass()
{
 int a[2][2],i,j;
 printf("Enter 4 elements");
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
   printf("\nPassing array are\n \n=%d",a[i][j]);
  }
 }
}