#include<stdio.h>

int main()
{
 int per ;
  printf("\nEnter the percentage\n");
   scanf("%d",&per);

  if(per>=80)
   printf("Student scored A Grade ");
  else if(per<80 && per>=70)
   printf("Student scored B Grade ");
  else if(per<70 && per>=60 )
    printf("Student scored C Grade ");
  else if(per<60 && per>=45)
    printf("Students scored D Grade ");

  else
   printf("Student is fail ");
  return 0;
}