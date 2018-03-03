#include"mystack.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a,top=-1,n,m,i;
 int stack[a];
 while(1)
 {
  printf("Enter 1 to push\n      2 to pop\n      3 to peek \n      4 to exit\n");
  scanf("%d",&n);
  printf("\n");
  switch(n)
    {
	case 1:printf("Enter how many elements do u want push  \n");
	       scanf("%d",&m);
	       for(i=1;i<=m;i++)
	       push(stack,&top);
	       break;
	case 2:pop(stack,&top);
	       break;	
	case 3:peek(stack,&top);	
	       break;
	case 4:printf("!!!!........\n");
	       exit(0);
	default:printf("Wrong input.... \n\n");
    }

 }
}
