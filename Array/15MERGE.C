#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],b[5],c[5],i,j,k;
 clrscr();
 printf("Enter 5 elements");
  for(i=0;i<5;i++)
   {
    scanf("%d",&a[i]);
   }
 printf("Enter 5 elemnts");
  for(j=0;j<5;j++)
   {
    scanf("%d",&b[j]);
   }
  printf("Enter 5 elements");
   for(k=0;k<5;k++)
   {
    scanf("%d",&c[k]);
   }
  printf("Merging\n");
  for(i=0;i<5;i++)
   {
    for(j=0;j<5;j++)
    {
     for(k=0;k<5;k++)
      {
	printf("%d\n",a[i]);
      }
     printf("%d",b[j]);
     }
     printf("%d",c[k]);
    }
getch();
}