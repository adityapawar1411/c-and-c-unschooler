#include<stdio.h>


int main()
{
 int x,y,add,sub,mul,div;

 printf("Enter the first no\n");
	scanf("%d",&x);
 printf("Enter the second no\n");
	scanf("%d",&y);
 add=x+y;
	printf("Addition of %d & %d is %d \n",x,y,add);
  sub=x-y;
	printf("Substraction %d & %d is %d\n",x,y,sub);
 mul=x*y;
	printf("Multiplication %d & %d  is %d\n",x,y,mul);
 div=x/y;
	printf("On division of %d with %d quotient is %d\n",x,y,div);
 div=x%y;
	printf("On divison of %d with %d remainder is %d \n",x,y,div);
  return 0;
}




























