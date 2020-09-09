#include<stdio.h>

int main()
{
 int a[20],i,sum=0,n;

 printf("How many no you want to enter\n");
 scanf("%d",&n);
 printf("enter the inputs\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum+=a[i];
  }
  i=0;
  printf("sum of");
  while(i<n)
  {
   printf(" %d ",a[i++]);
  }
  printf(" is %d",sum);
 }
