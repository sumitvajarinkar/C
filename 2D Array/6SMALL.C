#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],min,i,j;
 clrscr();
 printf("Enter 9 elements\n");
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
    min=a[0][0];
    {
    if(min>a[i][j])
      min=a[i][j];
     }
   }
  }
 printf("Small no. is=%d",min);
getch();
}

