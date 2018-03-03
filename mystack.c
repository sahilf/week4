#include"mystack.h"
#include<stdio.h>
void push(int *p,int *t)
{
  int ele;
  *t+=1;
  printf("Enter the element \n");
  scanf("%d",&ele);
  p[*t]=ele;
}
void pop(int *p,int *t)
{
 int ele;
 if (*t==-1)
 {
  printf("Pop cannot be done since stack  is empty \n");
  printf("\n");
 }
 else
 {
 ele=p[*t];
 printf("Element has been popped: %d\n",ele);
 printf("\n");
 *t-=1;
 }
}
void peek(int *p,int *t)
{
 if(*t==-1)
 {
  printf("No element in the stack \n");
  printf("\n");
 }
 else
 {
  printf("Top elment is %d\n",p[*t]);
 }
}





 
  
 
  

