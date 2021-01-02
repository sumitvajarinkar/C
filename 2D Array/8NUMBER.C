#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],i,j;
 clrscr();
 printf("Enter 9 elements\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
  printf("Even nos.\n=");
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
     if(a[i][j]%2==0)
  printf("%d\n",a[i][j]);
  }
  }
  printf("odd nos.=\n");
   for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
    if(a[i][j]%2!=0)
   printf("%d\n",a[i][j]);
   }
  }
 getch();
}

