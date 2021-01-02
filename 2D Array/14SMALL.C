#include<stdio.h>
#include<conio.h>
void small();
void main()
{
 clrscr();
 small();
 getch();
}
void small()
{
 int a[3][3],i,j,x;
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
     scanf("%d",&a[i][j]);
    }
   }
   x=a[0][0];
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
      if(x>a[i][j])
      x=a[i][j];
   }
  }
 printf("Smallest no. is %d",x);
}