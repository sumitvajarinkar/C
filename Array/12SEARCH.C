 #include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,c=0;
 clrscr();
 printf("Enter 5 elements\n");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
  }
  printf("Select any 1 elememt");
    {
    scanf("%d",&n);
    }
  for(i=0;i<5;i++)
  {
   if(a[i]==n)
    {
     c=1;
printf("%dNumber is at index of %d",n,i);
  break;
  }
 }
  if(c==0)
  {
  printf("not present");
  }
 getch();
}


