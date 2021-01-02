#include<stdio.h>
#include<conio.h>
void main()
{
 int a[4][2],b[4][2],i,j;
 clrscr();
 printf("Enter temp of A city");
 for(i=0;i<7;i++)
  {
   for(j=0;j<7;j++)
    {
     scanf("%d",&a[i][j]);
    }
 }
   printf("Enter temp of B city");
    for(i=0;i<7;i++)
  {
   for(j=0;j<7;j++)
    {
     scanf("%d",&b[i][j]);
    }
}
     printf("Temp of A city");
       for(i=0;i<7;i++)
  {
   for(j=0;j<7;j++)
    {
    printf("\n%d",a[i][j]);
    }
}
 printf("temp of city B");
   for(i=0;i<7;i++)
  {
   for(j=0;j<7;j++)
    {
     printf("\n%d",b[i][j]);
    }
}

getch();
}